#ifndef __SUM_H__
#define __SUM_H__

#include "antheaderPlusPlus.h"
#include "MenuControll.h"
#include "memberFile.h"
using namespace std;

void MemberFile::ViewShip() {
    int y = 12;
    SHIP.open("MEMBERSHIP.bin", ios::in | ios::binary);

    if (!SHIP) {
       MessageBox(
			    NULL,
			    "File not found.\n\nPlease ensure the file exists and try again.",  
			    "Assign Member - File Error",  
			    MB_OK | MB_ICONERROR            
			);

        return;
    }

    foreColor(7);

    bool dataFound = false;

    M.HeaderAssign2(y-2);
    // y += 3;

    while (SHIP.read((char*)&M, sizeof(M))) {
        if (M.getMorY() == 1) {
            M.Dmonthly(y);
        } else if (M.getMorY() == 2) {
            M.Dyearly(y);
        }
        y += 3;
        dataFound = true;
    }

    if (!dataFound) {
       MessageBox(
			    NULL,
			    "File not found.\n\nPlease ensure the file exists and try again.",  
			    "Assign Member - File Error",  
			    MB_OK | MB_ICONERROR            
			);
    }

    SHIP.close();
}

void MenuControl::MenuAssignMember() {
    int x = 0;
    char option;
    cls();
    Design::Cover();
    foreColor(7);
    Design::menu_assign();
    do {
        Design::Dmembership();
        foreColor(7);
        setcursor(false, 1);

        if (x == 0) {
            for (int i = 65; i < 98; i++) {
                for (int j = 12; j < 15; j++) {
                    gotoxy(i, j);
                    foreColor(10);
                    cout << char(219);
                }
            }
            foreColor(167); gotoxy(73, 13); cout << "ASSIGN MEMBER SHIP " << endl;
        }
        if (x == 1) {
            for (int i = 65; i < 98; i++) {
                for (int j = 15; j < 18; j++) {
                    gotoxy(i, j);
                    foreColor(10);
                    cout << char(219);
                }
            }
            foreColor(167); gotoxy(74, 16); cout << "VIEW MEMBER SHIP" << endl;
        }
        if (x == 2) {
            for (int i = 65; i < 98; i++) {
                for (int j = 18; j < 21; j++) {
                    gotoxy(i, j);
                    foreColor(10);
                    cout << char(219);
                }
            }
            foreColor(167); gotoxy(73, 19); cout << "SEARCH MEMBER SHIP" << endl;
        }
        if (x == 3) {
            for (int i = 65; i < 98; i++) {
                for (int j = 21; j < 24; j++) {
                    gotoxy(i, j);
                    foreColor(10);
                    cout << char(219);
                }
            }
            foreColor(167); gotoxy(73, 22); cout << "UPDATE MEMBER SHIP" << endl;
        }
        if (x == 4) {
            for (int i = 65; i < 98; i++) {
                for (int j = 24; j < 27; j++) {
                    gotoxy(i, j);
                    foreColor(10);
                    cout << char(219);
                }
            }
            foreColor(167); gotoxy(73, 25); cout << "DELETE MEMBER SHIP" << endl;
        }
        if (x == 5) {
            for (int i = 65; i < 98; i++) {
                for (int j = 27; j < 30; j++) {
                    gotoxy(i, j);
                    foreColor(10);
                    cout << char(219);
                }
            }
            foreColor(167); gotoxy(78, 28); cout << "INVOICE " << endl;
        }
        if (x == 6) {
            for (int i = 65; i < 98; i++) {
                for (int j = 30; j < 33; j++) {
                    gotoxy(i, j);
                    foreColor(10);
                    cout << char(219);
                }
            }
            foreColor(167); gotoxy(79, 31); cout << "BACK " << endl;
        }

        option = getch();
        switch (option) {
        case 72:
            x--;
            if (x < 0) {
                x = 6;
            }
            break;
        case 80:
            x++;
            if (x > 6) {
                x = 0;
            }
            break;
        }
    } while (option != 13);

    do {
        switch (x) {
            case 0:
                // do {
                    foreColor(7);
                    cls();
                    Design::Cover();
                    MemberFile::ViewMember();
                    MemberFile::AssignMember();
                    foreColor(4);
//                    cls();
//                    Design::Cover();
                    gotoxy(45, 18);
                    // cout << "<<< Press Key [ESC] back to MENU and Press any Key to Assign Again >>>" << endl;
                // } while (getch() != 27);
                MenuAssignMember();
                break;
            case 1:
                do {
                    foreColor(7);
                    cls();
                    Design::Cover();
                    Design::display_membership();
                    MemberFile::ViewShip();
                    for(int i = 64; i<76; i++){
                        for(int j = 35 ; j <36 ; j++){
                            gotoxy(i,j);
                            foreColor(7);
                            cout << char(219);
                        }
                    }
                    // foreColor(4);
                    foreColor(249);
                    gotoxy(65,35);
                    cout << "<<<<< Press Key ESC to back [MENU] >>>>> ";
                    foreColor(2);
                } while (getch() != 27);
                MenuAssignMember();
                break;
            case 2:
                do {
                    foreColor(7);
                    cls();
                    Design::Cover();
                    MemberFile::ViewShip();
                    MemberFile::SearchShip();
                    for(int i = 64; i<96; i++){
								for(int j = 35 ; j <36 ; j++){
									gotoxy(i,j);
									foreColor(7);
									cout << char(219);
								}
							}
							// foreColor(4);
							foreColor(249);
							gotoxy(45,35);
                    cout << "<<< Press Key [ESC] back to MENU and Press any Key to Search Again >>>" << endl;
                    foreColor(2);
                } while (getch() != 27);
                MenuAssignMember();
                break;
            case 3:
                do {
                    foreColor(7);
                    cls();
                    Design::Cover();
                    MemberFile::ViewShip();
                    MemberFile::UpdateShip();
                    for(int i = 64; i<96; i++){
								for(int j = 35 ; j <36 ; j++){
									gotoxy(i,j);
									foreColor(7);
									cout << char(219);
								}
							}
							// foreColor(4);
							foreColor(249);
							gotoxy(45,35);
                    cout << "<<< Press Key [ESC] back to MENU and Press any Key to Update Again >>>" << endl;
                    foreColor(2);
                } while (getch() != 27);
                MenuAssignMember();
                break;
            case 4:
                do {
                    foreColor(7);
                    cls();
                    Design::Cover();
                    MemberFile::ViewShip();
                    MemberFile::DeleteShip();
                    for(int i = 64; i<96; i++){
								for(int j = 35 ; j <36 ; j++){
									gotoxy(i,j);
									foreColor(7);
									cout << char(219);
								}
							}
							// foreColor(4);
							foreColor(249);
							gotoxy(45,35);
                    cout << "<<< Press Key [ESC] back to MENU and Press any Key to Delete Again >>>" << endl;
                    foreColor(2);
                } while (getch() != 27);
                MenuAssignMember();
                break;
            case 5:
                do {
                    foreColor(7);
                    cls();
                    // Design::Cover();
                    MemberFile::InvoiceShip();
                    for(int i = 64; i<96; i++){
								for(int j = 35 ; j <36 ; j++){
									gotoxy(i,j);
									foreColor(7);
									cout << char(219);
								}
							}
							// foreColor(4);
							foreColor(249);
							gotoxy(45,35);
                    cout << "<<< Press Key [ESC] back to MENU and Press any Key to Search Again >>>" << endl;
                    foreColor(2);
                } while (getch() != 27);
                MenuAssignMember();
                break;
            case 6:
                foreColor(7);
                cls();
                MenuControl::Main();
                break;
        }

    } while (1);
     
}
#endif

