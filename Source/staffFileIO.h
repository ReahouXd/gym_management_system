#ifndef ___MYSTAFFFILE_H___
#define ___MYSTAFFFILE_H___

#include <fstream>
#include "antheaderPlusPlus.h"
#include "antheaderInput.h"
#include "gym.h"
#include "windows.h"
#include "design.h"

class FileControlStaff {
    static fstream fileStaff;
    static Staff staff;

public:
    static void InsertStaff();
    static void ShowStaff();
    static void SearchStaff();
    static void UpdateStaff();
    static void DeleteStaff();
};

fstream FileControlStaff::fileStaff;
Staff FileControlStaff::staff;

void FileControlStaff::InsertStaff() {
    setcursor(true, 1);
    fileStaff.open("Staff.bin", ios::in | ios::binary);

    int lastId = 999;

    if (fileStaff) {
        while (fileStaff.read((char*)&staff, sizeof(staff))) {
            lastId = staff.getID();
        }
        fileStaff.close();
    }

    staff.setID(lastId + 1);
    fileStaff.open("Staff.bin", ios::out | ios::app | ios::binary);
    Design::Cover();
    staff.Input();
    fileStaff.write((char*)&staff, sizeof(staff));
    fileStaff.close();
}

void FileControlStaff::ShowStaff() {
    setcursor(false, 1);
    int y = 12;
    fileStaff.open("Staff.bin", ios::in | ios::binary);

    if (!fileStaff) {
        MessageBox(NULL, "File not found.\n\nPlease ensure the file exists and try again.", "Staff - File Error", MB_OK | MB_ICONERROR);
        return;
    }

    fileStaff.seekg(0, ios::end);
    if (fileStaff.tellg() == 0) {
        MessageBox(NULL, "No data found in the file.\n\nPlease check the file and try again.", "Staff - No Data Found", MB_OK | MB_ICONINFORMATION);
        fileStaff.close();
        return;
    }

    fileStaff.seekg(0, ios::beg);
    Design::Cover();
    gotoxy(0, 9);
    staff.Header(y - 2);
    while (fileStaff.read((char*)&staff, sizeof(staff))) {
        staff.Display(y);
        y += 3;
    }
    fileStaff.close();
}

void FileControlStaff::SearchStaff() {
    setcursor(true, 1);
    int y = 17;
    fileStaff.open("Staff.bin", ios::in | ios::binary);

    if (!fileStaff) {
        MessageBox(NULL, "File not found.\n\nPlease ensure the file exists and try again.", "Staff - File Error", MB_OK | MB_ICONERROR);
        return;
    }

    int tempId;
    Design::Cover();
    drawBoxSingleLine(64, 4, 38, 1, 3);
    gotoxy(65, 5); foreColor(14);
    cout << "Enter ID you want to search: "; 
    gotoxy(95, 5); tempId = inputNumber();

    bool see = false;
    fileStaff.seekg(0, ios::beg);
    while (fileStaff.read((char*)&staff, sizeof(staff))) {
        if (tempId == staff.getID()) {
            cls();
            Design::Cover();
            Design::staffInfo();
            gotoxy(0, 17);
            staff.Header(y);
            staff.Display(y + 2);
            foreColor(3);
            y += 3;
            see = true;
            break;
        }
    }

    if (!see) {
        MessageBox(NULL, "ID not found.\n\nPlease check the ID and try again.", "Staff - ID Not Found", MB_OK | MB_ICONERROR);
    }

    fileStaff.close();
}

void FileControlStaff::UpdateStaff() {
    setcursor(true, 1);
    fileStaff.open("Staff.bin", ios::in | ios::out | ios::binary);

    if (!fileStaff) {
        MessageBox(NULL, "File not found.\n\nPlease ensure the file exists and try again.", "Staff - File Error", MB_OK | MB_ICONERROR);
        return;
    }

    int updateid;
    Design::Cover();
    drawBoxSingleLine(64, 4, 38, 1, 3);
    gotoxy(65, 5); foreColor(14);
    cout << "Enter ID you want to update: "; 
    gotoxy(95, 5); updateid = inputNumber();

    bool see = false;
    fileStaff.seekg(0, ios::beg);
    while (fileStaff.read((char*)&staff, sizeof(staff))) {
        if (updateid == staff.getID()) {
            cls();
            Design::Cover();
            Design::header_update();
            staff.Input();
            long pos = fileStaff.tellg();
            fileStaff.seekp(pos - sizeof(staff));
            fileStaff.write((char*)&staff, sizeof(staff));
            see = true;
            break;
        }
    }

    if (see) {
        MessageBox(NULL, "Update Successful", "Staff", MB_OK | MB_ICONINFORMATION);
    } else {
        MessageBox(NULL, "ID not found.\n\nPlease check the ID and try again.", "Staff - ID Not Found", MB_OK | MB_ICONERROR);
    }

    fileStaff.close();
}

void FileControlStaff::DeleteStaff() {
    setcursor(true, 1);
    fileStaff.open("Staff.bin", ios::in | ios::binary);
    fstream backup;

    backup.open("Temp.bin", ios::out | ios::binary);

    if (!fileStaff) {
        MessageBox(NULL, "File not found.\n\nPlease ensure the file exists and try again.", "Staff - File Error", MB_OK | MB_ICONERROR);
        return;
    }

    fileStaff.seekg(0, ios::end);
    if (fileStaff.tellg() == 0) {
        MessageBox(NULL, "No data found in the file.\n\nPlease check the file and try again.", "Staff - No Data Found", MB_OK | MB_ICONINFORMATION);
        fileStaff.close();
        backup.close();
        return;
    }

    fileStaff.seekg(0, ios::beg);
    int deleteid;
    Design::Cover();
    Design::DesignDelete();
    gotoxy(44, 5); foreColor(223); cout << "ENTER ID YOU WANT TO DELETE OR ENTER NUMBER 1 TO DELETE ALL DATA :  "; 
    gotoxy(110, 5); deleteid = inputNumber();
	//
    bool see = false;
    bool deleteAll = (deleteid == 1);

    while (fileStaff.read((char*)&staff, sizeof(staff))) {
        if (deleteAll) {
            continue;
        } else if (deleteid == staff.getID()) {
            see = true;
        } else {
            backup.write((char*)&staff, sizeof(staff));
        }
    }

    fileStaff.close();
    backup.close();

    if (deleteAll) {
        MessageBox(NULL, "All staff records have been successfully deleted.", "Delete Staff - Success", MB_OK | MB_ICONINFORMATION);
    } else if (!see) {
        MessageBox(NULL, "ID not found.\n\nPlease check the ID and try again.", "Staff - ID Not Found", MB_OK | MB_ICONERROR);
    } else {
        MessageBox(NULL, "Staff member successfully deleted.", "Delete Staff - Success", MB_OK | MB_ICONINFORMATION);
    }

    remove("Staff.bin");
    rename("Temp.bin", "Staff.bin");
}

#endif
