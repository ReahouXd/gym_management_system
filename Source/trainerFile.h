#ifndef __TRAINERFILE_H__
#define __TRAINERFILE_H__

#include <fstream>
#include "antheaderPlusPlus.h"
#include "gym.h"
#include "windows.h"
#include "design.h"

class TrainerFile {
    static fstream fileTrainer;
    static Trainer trainer;

public:
    static void InsertTrainer();
    static void ShowTrainer();
    static void SearchTrainer();
    static void UpdateTrainer();
    static void DeleteTrainer();
};

fstream TrainerFile::fileTrainer;
Trainer TrainerFile::trainer;

void TrainerFile::InsertTrainer() {
    setcursor(true, 1);
    fileTrainer.open("TRAINER.bin", ios::in | ios::binary);

    int lastId = 3000;

    if (fileTrainer) {
        while (fileTrainer.read((char*)&trainer, sizeof(trainer))) {
            lastId = trainer.getid();
        }
        fileTrainer.close();
    }

    trainer.setid(lastId + 1);
    fileTrainer.open("TRAINER.bin", ios::out | ios::app | ios::binary);
    Design::Cover();
    Design::add_trainer();
    trainer.InsertTrainer();
    fileTrainer.write((char*)&trainer, sizeof(trainer));
    fileTrainer.close();
    MessageBox(NULL, "Trainer added successfully", "Trainer", MB_OK);
}

void TrainerFile::ShowTrainer() {
    setcursor(false, 1);
    int y = 12;
    fileTrainer.open("TRAINER.bin", ios::in | ios::binary);

    if (!fileTrainer) {
        MessageBox(NULL, "File not found.\n\nPlease ensure the file exists and try again.", "Trainer - File Error", MB_OK | MB_ICONERROR);
        return;
    }

    fileTrainer.seekg(0, ios::end);
    if (fileTrainer.tellg() == 0) {
        MessageBox(NULL, "No data found in the file.\n\nPlease check the file and try again.", "Trainer - No Data Found", MB_OK | MB_ICONINFORMATION);
        fileTrainer.close();
        return;
    }

    fileTrainer.seekg(0, ios::beg);
    Design::Cover();
    gotoxy(0, 9);
    trainer.Header(y - 2);
    while (fileTrainer.read((char*)&trainer, sizeof(trainer))) {
        trainer.Display(y);
        y += 3;
    }
    fileTrainer.close();
}

void TrainerFile::SearchTrainer() {
    setcursor(true, 1);
    int y = 17;
    fileTrainer.open("TRAINER.bin", ios::in | ios::binary);

    if (!fileTrainer) {
        MessageBox(NULL, "File not found.\n\nPlease ensure the file exists and try again.", "Trainer - File Error", MB_OK | MB_ICONERROR);
        return;
    }

    int searchID;
    Design::Cover();
    drawBoxSingleLine(64, 4, 38, 1, 3);
    gotoxy(65, 5); foreColor(14);
    cout << "Enter ID you want to search: "; 
    gotoxy(95, 5); searchID = inputNumber();

    bool see = false;
    fileTrainer.seekg(0, ios::beg);
    while (fileTrainer.read((char*)&trainer, sizeof(trainer))) {
        if (searchID == trainer.getid()) {
            cls();
            Design::Cover();
            Design::display_trainer();
            gotoxy(0, 17);
            trainer.Header(y);
            trainer.Display(y + 2);
            foreColor(3);
            y += 3;
            see = true;
            break;
        }
    }

    if (!see) {
        MessageBox(NULL, "ID not found.\n\nPlease check the ID and try again.", "Trainer - ID Not Found", MB_OK | MB_ICONERROR);
    }

    fileTrainer.close();
}

void TrainerFile::UpdateTrainer() {
    setcursor(true, 1);
    fileTrainer.open("TRAINER.bin", ios::in | ios::out | ios::binary);

    if (!fileTrainer) {
        MessageBox(NULL, "File not found.\n\nPlease ensure the file exists and try again.", "Trainer - File Error", MB_OK | MB_ICONERROR);
        return;
    }

    int updateID;
    Design::Cover();
    drawBoxSingleLine(64, 4, 38, 1, 3);
    gotoxy(65, 5); foreColor(14);
    cout << "Enter ID you want to update: "; 
    gotoxy(95, 5); updateID = inputNumber();

    bool see = false;
    fileTrainer.seekg(0, ios::beg);
    while (fileTrainer.read((char*)&trainer, sizeof(trainer))) {
        if (updateID == trainer.getid()) {
            cls();
            Design::Cover();
            Design::update_trainer();
            trainer.InsertTrainer();
            long pos = fileTrainer.tellg();
            fileTrainer.seekp(pos - sizeof(trainer));
            fileTrainer.write((char*)&trainer, sizeof(trainer));
            see = true;
            break;
        }
    }

    if (see) {
        MessageBox(NULL, "Trainer updated successfully", "Trainer", MB_OK | MB_ICONINFORMATION);
    } else {
        MessageBox(NULL, "ID not found.\n\nPlease check the ID and try again.", "Trainer - ID Not Found", MB_OK | MB_ICONERROR);
    }

    fileTrainer.close();
}

void TrainerFile::DeleteTrainer() {
    setcursor(true, 1);
    fileTrainer.open("TRAINER.bin", ios::in | ios::binary);
    fstream backup;

    backup.open("Temp.bin", ios::out | ios::binary);

    if (!fileTrainer) {
        MessageBox(NULL, "File not found.\n\nPlease ensure the file exists and try again.", "Trainer - File Error", MB_OK | MB_ICONERROR);
        return;
    }

    fileTrainer.seekg(0, ios::end);
    if (fileTrainer.tellg() == 0) {
        MessageBox(NULL, "No data found in the file.\n\nPlease check the file and try again.", "Trainer - No Data Found", MB_OK | MB_ICONINFORMATION);
        fileTrainer.close();
        backup.close();
        return;
    }

    fileTrainer.seekg(0, ios::beg);
    int deleteID;
    Design::Cover();
    Design::DesignDelete();
    gotoxy(44, 5); foreColor(223); cout << "ENTER ID YOU WANT TO DELETE OR ENTER NUMBER 1 TO DELETE ALL DATA :  "; 
    gotoxy(110, 5); deleteID = inputNumber();
//
    bool see = false;
    bool deleteAll = (deleteID == 1);

    while (fileTrainer.read((char*)&trainer, sizeof(trainer))) {
        if (deleteAll) {
            continue;
        } else if (deleteID == trainer.getid()) {
            see = true;
        } else {
            backup.write((char*)&trainer, sizeof(trainer));
        }
    }

    fileTrainer.close();
    backup.close();

    if (deleteAll) {
        MessageBox(NULL, "All trainer records have been successfully deleted.", "Delete Trainer - Success", MB_OK | MB_ICONINFORMATION);
    } else if (!see) {
        MessageBox(NULL, "ID not found.\n\nPlease check the ID and try again.", "Trainer - ID Not Found", MB_OK | MB_ICONERROR);
    } else {
        MessageBox(NULL, "Trainer successfully deleted.", "Delete Trainer - Success", MB_OK | MB_ICONINFORMATION);
    }

    remove("TRAINER.bin");
    rename("Temp.bin", "TRAINER.bin");
}

#endif
