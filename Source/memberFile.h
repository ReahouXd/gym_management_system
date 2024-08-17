#ifndef __MEMBERFILE_H__
#define __MEMBERFILE_H__
#include "antheaderPlusPlus.h"
#include <iostream>
#include <fstream>
#include "gym.h"

using namespace std;

Member M;
fstream filemember;
fstream SHIP;
int option;
bool found = false;

class MemberFile{
public:
    static void InsertMember() {
        setcursor(true, 1);
        filemember.open("MEMBER.bin", ios::in | ios::binary);
        int lastId = 2000;
        if (filemember) {
            while (filemember.read((char*)&M, sizeof(M))) {
                lastId = M.getId();
            }
            filemember.close();
        }
        M.setId(lastId + 1);

        filemember.open("MEMBER.bin", ios::out | ios::app | ios::binary);
        if (filemember) {
//            Design::Cover();
            Design::add_member();
            M.InsetMember();
            filemember.write((char*)&M, sizeof(M));
            filemember.close();
        } else {
            MessageBox(
				    NULL,
				    "File not found.\n\nPlease ensure the file exists and try again.",  
				    "Assign Member - File Error",  
				    MB_OK | MB_ICONERROR            
				);
        }
    }

    static void ViewMember() {
        setcursor(false, 1);
        filemember.open("MEMBER.bin", ios::in | ios::binary);
        if (!filemember) {
            MessageBox(NULL,"File not found","Member",MB_OK);
        } else {
            int y = 12;
            filemember.read((char*)&M, sizeof(M));
            Design::Cover();
            M.Header(y-2);
            while (filemember) {
                M.Display(y);
                y += 3;
                filemember.read((char*)&M, sizeof(M));
            }
            filemember.close();
        }
    }

    static void SearchMember() {
        int y = 17;
        setcursor(true, 1);
        filemember.open("MEMBER.bin", ios::in | ios::binary);
        if (!filemember) {
             MessageBox(
				    NULL,
				    "File not found.\n\nPlease ensure the file exists and try again.",  
				    "Assign Member - File Error",  
				    MB_OK | MB_ICONERROR            
				);
        } else {
            int search;
            Design::Cover();
            drawBoxSingleLine(64, 4, 38, 1, 3);
            gotoxy(65, 5); foreColor(14);
            cout<<"Enter ID you want to search : "; 
            gotoxy(95, 5); search = inputNumber();
            setcursor(false, 1);
            found = false;
            while (filemember.read((char*)&M, sizeof(M))) {
                if (search == M.getId()) {
                    cls();
                    Design::Cover();
                    Design::display_member();
                    M.Header(y);
                    M.Display(y + 2);
                    found = true;
                    break;
                }
            }
            if (!found) {
                MessageBox(
						    NULL,
						    "ID Not Found.\n\nPlease check the ID and try again.",  
						    "Assign Member - Error",  
						    MB_OK | MB_ICONERROR      
						);
            }
            filemember.close();
        }
    }

    static void DeleteMember() {
    setcursor(true, 1);
    fstream back;
    filemember.open("MEMBER.bin", ios::in | ios::binary);
    back.open("MEMBER2.bin", ios::out | ios::binary);

    if (!filemember) {
        MessageBox(
            NULL,
            "File not found.\n\nPlease ensure the file exists and try again.",  
            "Delete Member - File Error",  
            MB_OK | MB_ICONERROR            
        );
        return;
    }

    filemember.seekg(0, ios::end);
    if (filemember.tellg() == 0) {
        MessageBox(
            NULL,
            "No data found in the file.\n\nPlease check the file and try again.",  
            "Delete Member - No Data Found",  
            MB_OK | MB_ICONINFORMATION  
        );
        filemember.close();
        back.close();
        return;
    }

    filemember.seekg(0, ios::beg);
    int deletebyid;
    Design::Cover();
    Design::DesignDelete();
    gotoxy(44, 5); foreColor(223); cout << "ENTER ID YOU WANT TO DELETE OR ENTER NUMBER 1 TO DELETE ALL DATA:  "; 
    gotoxy(110, 5); deletebyid = inputNumber();

    bool found = false;
    bool deleteAll = (deletebyid == 1);

    while (filemember.read((char*)&M, sizeof(M))) {
        if (deleteAll) {
            continue;
        } else if (deletebyid == M.getId()) {
            found = true;
        } else {
            back.write((char*)&M, sizeof(M));
        }
    }

    if (deleteAll) {
        MessageBox(
            NULL,
            "All members have been successfully deleted.",  
            "Delete Member - Success",  
            MB_OK | MB_ICONINFORMATION  
        );
    } else if (!found) {
        MessageBox(
            NULL,
            "ID Not Found.\n\nPlease check the ID and try again.",  
            "Delete Member - Error",  
            MB_OK | MB_ICONERROR            
        );
    } else {
        MessageBox(
            NULL,
            "Member successfully deleted.",  
            "Delete Member - Success",  
            MB_OK | MB_ICONINFORMATION  
        );
    }

    filemember.close();
    back.close();

    remove("MEMBER.bin");
    rename("MEMBER2.bin", "MEMBER.bin");
}


    static void UpdateMember() {
        setcursor(true, 1);
        filemember.open("MEMBER.bin", ios::in | ios::out | ios::binary);
        if (!filemember) {
            MessageBox(
				    NULL,
				    "File not found.\n\nPlease ensure the file exists and try again.",  
				    "Assign Member - File Error",  
				    MB_OK | MB_ICONERROR            
				);
        } else {
            int UpdateID;
            Design::Cover();
            drawBoxSingleLine(64, 4, 38, 1, 3);
            gotoxy(65, 5); foreColor(14);
            cout<<"Enter ID You want to Update : "; 
            gotoxy(95, 5); UpdateID = inputNumber();

            found = false;
            filemember.read((char*)&M, sizeof(M));
            while (!filemember.eof()) {
                if (UpdateID == M.getId()) {

                    cls();
                    Design::Cover();
                    Design::update_member();
                    int last = filemember.tellg();
                    filemember.seekp(last - sizeof(M));
                    M.InsetMember();
                    filemember.write((char*)&M, sizeof(M));
                    found = true;
                    // break;
                }
                filemember.read((char*)&M, sizeof(M));
            }
            if (!found) {
                MessageBox(
						    NULL,
						    "ID Not Found.\n\nPlease check the ID and try again.",  
						    "Assign Member - Error",  
						    MB_OK | MB_ICONERROR      
						);
            }
            if(found == true){
                MessageBox(
				    NULL,
				    "The update was successful.",  
				    "Member Update",  
				    MB_OK | MB_ICONINFORMATION 
				);

            }
        }
        filemember.close();
    }
////////////////  member ship
    static void AssignMember() {
        setcursor(true, 1);
        
        // int MorYSt;
        bool isDub = false, found = false;
        filemember.open("MEMBER.bin", ios::in | ios::binary);
        SHIP.open("MEMBERSHIP.bin", ios::in | ios::out | ios::app | ios::binary);

        if (!filemember) {
            MessageBox(
				    NULL,
				    "File not found.\n\nPlease ensure the file exists and try again.",  
				    "Assign Member - File Error",  
				    MB_OK | MB_ICONERROR            
				);

        } 
        else {
            int search;
            // cls();
            foreColor(7);
            Design::Cover();
            
       Design::DesignDelete();
    gotoxy(55, 5); foreColor(223); cout << "ENTER ID YOU WANT TO ASSIGN MEMBER :   "; 
    gotoxy(92, 5); search = inputNumber();

            SHIP.seekg(0, ios::beg);
            while (SHIP.read((char*)&M, sizeof(M))) {
                if (search == M.getId()) {
                    isDub = true;
                    break;
                }
            }
            if (!isDub) {
                filemember.seekg(0, ios::beg);
                while (filemember.read((char*)&M, sizeof(M))) {
                    if (search == M.getId()) {
                        M.FileMenuAssignMember();
                        if(MorYSt == 1 ){
                        	M.setMorY(1);
						}
						else{
							M.setMorY(2);
						}
                        SHIP.clear();
                        SHIP.seekp(0, ios::end);
                        SHIP.write((char*)&M, sizeof(M));
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    MessageBox(
						    NULL,
						    "ID Not Found.\n\nPlease check the ID and try again.",  
						    "Assign Member - Error",  
						    MB_OK | MB_ICONERROR      
						);

                } else {        
					MessageBox(
							    NULL,
							    "Operation completed successfully!",  
							    "Assign Member",                      
							    MB_OK | MB_ICONINFORMATION          
							);
                }
            } 
            else {
            
				   MessageBox(
				    NULL,
				    "Duplicated ID detected.\n\nPlease use a unique ID and try again.", 
				    "Assign Member - Duplicate ID",  
				    MB_OK | MB_ICONWARNING            
				);

            }
        }

        filemember.close();
        SHIP.close();
    }



    //// VIEW MEMBERSHIP 

    static void ViewShip();

    static void SearchShip() {
        setcursor(true, 1);
        int search;
        SHIP.open("MEMBERSHIP.bin", ios::in | ios::binary);
        if (!SHIP) {
            MessageBox(
				    NULL,
				    "File not found.\n\nPlease ensure the file exists and try again.",  
				    "Assign Member - File Error",  
				    MB_OK | MB_ICONERROR            
				);
        } 
        else {
            Design::Cover();
            drawBoxSingleLine(64, 4, 38, 1, 3);
            gotoxy(65, 5); foreColor(14);
            cout<<"Enter ID you want to search : "; 
            gotoxy(95, 5); search=inputNumber();

                found = false;
                int y = 17;
                setcursor(false, 1);
                while (SHIP.read((char*)&M, sizeof(M))) {
                    if (search == M.getId()) {
                        cls();
                        Design::Cover();
                        setcursor(false, 1);
                         M.HeaderAssign(y);
						if(M.getMorY() == 1){
                            Design::display_membership();
		                	M.Dmonthly(y+2);
                            y+=3;
		                	 found = true;
                       		 break;
						}
                        else {
                            Design::display_membership();
                            M.Dyearly(y + 2);
                            y+=3;
						    found = true;
                        	break;		
						}
                   }    
                }
                if (!found) {
                    MessageBox(
						    NULL,
						    "ID Not Found.\n\nPlease check the ID and try again.",  
						    "Assign Member - Error",  
						    MB_OK | MB_ICONERROR      
						);
                }
            } 
            SHIP.close();
    }

    static void UpdateShip() {
        setcursor(true, 1);
        fstream tempShip;
        SHIP.open("MEMBERSHIP.bin", ios::in | ios::binary);
        tempShip.open("TEMP_MEMBERSHIP.bin", ios::out | ios::binary);
        int UpdateID;
        bool found = false;

        if (!SHIP) {
           MessageBox(
				    NULL,
				    "File not found.\n\nPlease ensure the file exists and try again.",  
				    "Assign Member - File Error",  
				    MB_OK | MB_ICONERROR            
				);
        } else {
            Design::Cover();
            drawBoxSingleLine(64, 4, 38, 1, 3);
            gotoxy(65, 5); foreColor(14);
            cout<<"Enter ID you want to Update : "; 
            gotoxy(95, 5);UpdateID = inputNumber();
            while (SHIP.read((char*)&M, sizeof(M))) {
                if (UpdateID == M.getId()) {
                    if (M.getMorY() == 1) {
                        cls();
                        M.UpdateshipMonth();
                    } else {
                        cls();
                        M.UpdateshipYearly();
                    }
                    found = true;
                }
                tempShip.write((char*)&M, sizeof(M));
            }
            if (!found) {
               MessageBox(
						    NULL,
						    "ID Not Found.\n\nPlease check the ID and try again.",  
						    "Assign Member - Error",  
						    MB_OK | MB_ICONERROR      
						);
            } else {
               MessageBox(
					    NULL,
					    "The member details have been successfully updated.",  
					    "Update Successful",  
					    MB_OK | MB_ICONINFORMATION  
					);

            }
        }

        SHIP.close();
        tempShip.close();
        remove("MEMBERSHIP.bin");
        rename("TEMP_MEMBERSHIP.bin", "MEMBERSHIP.bin");
    }

   static void DeleteShip() {
    setcursor(true, 1);
    fstream tempShip;
    SHIP.open("MEMBERSHIP.bin", ios::in | ios::binary);
    tempShip.open("TEMP_MEMBERSHIP.bin", ios::out | ios::binary);

    if (!SHIP) {
        MessageBox(
            NULL,
            "File not found.\n\nPlease ensure the file exists and try again.",  
            "Assign Member - File Error",  
            MB_OK | MB_ICONERROR            
        );
        return;
    }

    SHIP.seekg(0, ios::end);
    if (SHIP.tellg() == 0) {
        MessageBox(
            NULL,
            "No data found in the file.\n\nPlease check the file and try again.",  
            "Delete - No Data Found",  
            MB_OK | MB_ICONINFORMATION  
        );
        SHIP.close();
        tempShip.close();
        return;
    }

    SHIP.seekg(0, ios::beg);
    int deletebyid;
    
  	 Design::DesignDelete();
    
    gotoxy(44, 5); foreColor(223); cout << "ENTER ID YOU WANT TO DELETE OR ENTER NUMBER 1 TO DELETE ALL DATA :  "; 
    gotoxy(110, 5); cin >> ws;
    
    if (cin.peek() == '1') {
        while (SHIP.read((char*)&M, sizeof(M))) {
            // No action needed, all data is being deleted
        }
        MessageBox(
            NULL,
            "All members have been successfully deleted.",  
            "Delete All Members - Success",  
            MB_OK | MB_ICONINFORMATION  
        );
    } else {
        deletebyid = inputNumber();
        bool found = false;
        while (SHIP.read((char*)&M, sizeof(M))) {
            if (deletebyid == M.getId()) {
                found = true;
            } else {
                tempShip.write((char*)&M, sizeof(M));
            }
        }

        if (!found) {
            MessageBox(
                NULL,
                "ID Not Found.\n\nPlease check the ID and try again.",  
                "Delete - Error",  
                MB_OK | MB_ICONERROR      
            );
        } else {
            MessageBox(
                NULL,
                "The member has been successfully deleted.", 
                "Delete Member - Success",  
                MB_OK | MB_ICONINFORMATION  
            );
        }
    }

    SHIP.close();
    tempShip.close();
    remove("MEMBERSHIP.bin");
    rename("TEMP_MEMBERSHIP.bin", "MEMBERSHIP.bin");
}


   static void InvoiceShip() {
    int search;
    setcursor(true, 1);
    SHIP.open("MEMBERSHIP.bin", ios::in | ios::binary);
    if (!SHIP) {
        MessageBox(
				    NULL,
				    "File not found.\n\nPlease ensure the file exists and try again.",  
				    "Assign Member - File Error",  
				    MB_OK | MB_ICONERROR            
				);
    } else {
        SHIP.seekg(0, ios::end);
        if (SHIP.tellg() == 0) {
          MessageBox(
			    NULL,
			    "No data found in the file.\n\nPlease check the file and try again.",  
			    "Invoice - No Data Found",  
			    MB_OK | MB_ICONINFORMATION  
			);

        } else {
            SHIP.seekg(0, ios::beg);
            Design::D_invoice();
            setcursor(true, 1);
            gotoxy(70, 16); foreColor(2); cout << "SEARCH INVOICE BY ID : "; search = inputNumber();
            bool found = false;
            while (SHIP.read((char*)&M, sizeof(M))) {
                if (search == M.getId()) {
                    if (M.getMorY() == 1) {
                        Design::boxinvoice();
                        M.DisplayInvoice();
                        found = true;
                        break;
                    } else {
                        Design::boxinvoice();
                        M.DisplayInvoice2();
                        found = true;
                        break;
                    }
                }
            }
            if (!found) {
                MessageBox(
						    NULL,
						    "ID Not Found.\n\nPlease check the ID and try again.",  
						    "Assign Member - Error",  
						    MB_OK | MB_ICONERROR      
						);
            }
        }
        SHIP.close();
    }
}

};

#endif
