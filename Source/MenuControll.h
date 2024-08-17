#ifndef __MENUCONTROL_H__
#define __MENUCONTROL_H__

#include <iostream>
#include <conio.h>
#include "antheaderPlusPlus.h"
#include "trainerFile.h"
#include "memberFile.h"
#include "staffFileIO.h"

// MemberFile ship;

class MenuControl{
	public:
		static void Login(){
			setcursor(false, 0);
			char username[20] ;
			char password[20]; 
			int attempts=3;
            while(1){
                // cls();
                Design::log();
            	gotoxy(62,21);foreColor(4);	cout << " INPUT USERNAME  =  " ;
            	gotoxy(62,25);foreColor(4);	cout << " INPUT PASSWORD  =  " ;
            	//
     			gotoxy(81,21);foreColor(2);
                while(true)
                {
                    inputLetter(username);
                    if(!strcmp(username, "\0"))
                    {
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
               	gotoxy(81,25);foreColor(2);
                while(true)
                {
                    hidePassword(password);
                    if(!strcmp(password, "\0"))
                    {
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                if(!strcmp(username, "admin") && !strcmp(password, "123"))
                {
                    system("cls");
                    MenuControl::Main();
                }
                else
                {
                    attempts--;
                    if(attempts > 0) 
                    {
                        MessageBox(NULL,"Incorrect username or password","LOGIN",MB_OK);
                        cls();
                    } 
                    else 
                    {
                        MessageBox(NULL,"Login failed","LOGIN",MB_OK);
                        exit(0);
                    }
    			}
    	
   		 	}
   		}
		static void welCome(){
			cls();
			Design::welComeDesign();
				
			int y=1;
			char arrow;			
			do {
				Design::bgColor();
				Design::text();
				if(y==1){

					Design::controllOne();
				}
				else if(y==2){
					Design::controllTwo();
				}
				else if(y==3){
					Design::controllThree();
				}
				arrow = getch();  
				switch(arrow){
					case 77: { // Right
						y++;
						if(y > 3){
							y = 1;
						}
						break;
					}
					case 75: { // Left
						y--;
						if(y <1){
							y = 3;
						}
						break;
					}
				}
			}while(arrow != 13);	
			foreColor(7);
			system("cls");
			do{
				switch(y){
					case 1:
						Login();
						break;
					case 2:
//						cls();
						aboutUs();
						break;
					case 3:
						Design::thank();
						exit(0);
						break;
				}
			}while(1);
			
   	    }

		static void aboutUs() {
			Design::Dabout();

			int o = 1;
			char arrow;

			do {
				setcursor(false, 0);
				for (int i = 10; i < 30; i++) {
					for (int j = 20; j < 23; j++) {
						gotoxy(i, j + 1);
						foreColor(10);
						cout << char(219);

						gotoxy(i, j + 5);
						foreColor(10);
						cout << char(219);

						gotoxy(i, j + 9);
						foreColor(10);
						cout << char(219);
					}
				}

				Design::displayNames();
				Design::highlightCurrent(o);

				arrow = _getch();
				Design::clearPreviousHighlight(o);

				switch (arrow) {
					case 77: // Right
					case 80: // Down
						o++;
						if (o > 3) {
							o = 1;
						}
						break;
					case 75: // Left
					case 72: // Up
						o--;
						if (o < 1) {
							o = 3;
						}
						break;
					case 27: // ESC key
						// MenuControl::Main();
						cls();
						welCome();
						return;
				}
			} while (arrow != 13);

	
			
				switch (o) {
					case 1:
						system("start http://training.antkh.com/students/?s=5027");
						break;
					case 2:
						system("start http://training.antkh.com/students/?s=4996"); // jack
						break;
					case 3:
						system("start http://training.antkh.com/achievements/721.aspx"); // porsur
						break;
				}
				
			// }
		}
		// MainMenu
		static void Main(){
			cls();
			int x = 0;
			char option;
			Design::title();
			Design::picgym();
			do{
				foreColor(7);
				setcursor(false, 1);
         		Design::Dmain();

				if(x == 0)
				{
					 for(int i = 65; i<98; i++){
					 	for(int j = 12 ; j <15 ; j++){
					 		gotoxy(i,j);
					 		foreColor(10);
					 		cout << char(219);
					 	}
					 } 
					foreColor(167); gotoxy(78,13);cout<< "MEMBER "<<endl;
				
				}
				if(x == 1)
				{
					 for(int i = 65; i<98; i++){
					 	for(int j = 16 ; j <19 ; j++){
					 		gotoxy(i,j);
					 		foreColor(10);
					 		cout << char(219);
					 	}
					 } 
					foreColor(167); gotoxy(79,17);cout<< "STAFF "<<endl;
				}
				if(x == 2)
				{
					 for(int i = 65; i<98; i++){
					 	for(int j = 20 ; j <23 ; j++){
					 		gotoxy(i,j);
					 		foreColor(10);
					 		cout << char(219);
					 	}
					 } 
					foreColor(167); gotoxy(77,21);cout<< "TRAINER "<<endl;
				}
				if(x == 3)
				{
					 for(int i = 65; i<98; i++){
					 	for(int j = 24 ; j <27 ; j++){
					 		gotoxy(i,j);
					 		foreColor(10);
					 		cout << char(219);
					 	}
					 } 
					foreColor(167); gotoxy(73,25);cout<< "ASSIGN TO MEMBESHIP"<<endl;
				}
				if(x == 4)
				{
					 for(int i = 65; i<98; i++){
					 	for(int j = 28 ; j <31 ; j++){
					 		gotoxy(i,j);
					 		foreColor(10);
					 		cout << char(219);
					 	}
					 } 
					foreColor(167); gotoxy(80,29);cout<< "BACK "<<endl;
					foreColor(7);
				}
				option = getch();
				switch(option)
				{
					case 72:
						{
							x--; 
							if(x < 0)
							{
								x = 4;
							}
							break;
						}
					case 80:
						{
							x++; 
							if(x > 4)
							{ 
								x = 0;
							}
							break;
						}
				}
			}while(option != 13); 
			
			do{	
				switch(x)
				{
					case 0:
						{
							foreColor(7);
							cls();
							MenuMember();
						}
						break;
					case 1:
						{
							foreColor(7);
							cls();
							MenuStaff();
						}
						break;
					case 2:
						{
							foreColor(7);
							cls(); 
							MenuTrainer();
						}
						break;
					case 3:
						{
							foreColor(7);
							cls();
							MenuAssignMember();
						}
						break;
					case 4:
						{
							foreColor(7);
							cls();
							welCome();

						}
						break;
				}

			}while(1);
		}
	

/////////////// MENU Member
		static void MenuMember() {
			int x = 0;
			char option;
			cls();
			foreColor(7);
			Design::Cover();
			Design::member();
			do{
				foreColor(7);   
				setcursor(false, 1);
				Design::Dmember();

				if(x == 0)
				{
					for(int i = 65; i<98; i++){
						for(int j = 12 ; j <15 ; j++){
							gotoxy(i,j);
							foreColor(10);
							cout << char(219);
						}
					} 
					foreColor(167); gotoxy(78,13);cout<< "INSERT "<<endl;
				}
				if(x == 1)
				{
					for(int i = 65; i<98; i++){
						for(int j = 16 ; j <19 ; j++){
							gotoxy(i,j);
							foreColor(10);
							cout << char(219);
						}
					} 
					foreColor(167); gotoxy(79,17);cout<< "VIEW "<<endl;
				}
				if(x == 2)
				{
					for(int i = 65; i<98; i++){
						for(int j = 20 ; j <23 ; j++){
							gotoxy(i,j);
							foreColor(10);
							cout << char(219);
						}
					} 
					foreColor(167); gotoxy(78,21);cout<< "SEARCH "<<endl;
				}
				if(x == 3)
				{
					for(int i = 65; i<98; i++){
						for(int j = 24 ; j <27 ; j++){
							gotoxy(i,j);
							foreColor(10);
							cout << char(219);
						}
					} 
					foreColor(167); gotoxy(78,25);cout<< "UPDATE"<<endl;
				}
				if(x == 4)
				{
					for(int i = 65; i<98; i++){
						for(int j = 28 ; j <31 ; j++){
							gotoxy(i,j);
							foreColor(10);
							cout << char(219);
						}
					} 
					foreColor(167); gotoxy(78,29);cout<< "DELETE "<<endl;
				}
				if(x == 5)
				{
					for(int i = 65; i<98; i++){
						for(int j = 32 ; j <35 ; j++){
							gotoxy(i,j);
							foreColor(10);
							cout << char(219);
						}
					} 
					foreColor(167); gotoxy(79,33);cout<< "BACK "<<endl;
					foreColor(7);
				}
				option = getch();
				switch(option)
				{
					case 72:
						{
							x--; 
							if(x < 0)
							{
								x = 5;
							}
							break;
						}
					case 80:
						{
							x++; 
							if(x > 5)
							{ 
								x = 0;
							}
							break;
						}
				}
			}while(option != 13); 
			
			do{	
				foreColor(7);
				switch(x)
				{
					case 0:
						do {
							
						
							///
							foreColor(4);
							cls();
							Design::Cover();
							Design::designadd();
							MemberFile::InsertMember();
							//
						
							
						
							// foreColor(4);
//							foreColor(249);
//							gotoxy(45,35);
//							
//							cout <<"<<< Press Key [ESC] back to MENU and Press any Key to Add Again >>>" << endl;
							Design::inputESC();
							
						}while (getch() != 27);
						MenuMember();
						break;
					case 1:
						foreColor(4);
						cls();
						Design::Cover();
						Design::display_member();
						MemberFile::ViewMember();
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
						cout << "<<<<< Press any to back [MENU] >>>>> ";
						foreColor(2);
						getch();
						MenuMember();
						break;
					case 2:
						do {
							foreColor(4);
							cls();
							Design::Cover();
							MemberFile::ViewMember();
							MemberFile::SearchMember();
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
							foreColor(7);
						} while (getch() != 27);
						MenuMember();
						break;
					case 3:
						do {
							foreColor(4);
							cls();
							Design::Cover();
							MemberFile::ViewMember();
							MemberFile::UpdateMember();
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
							foreColor(7);
						} while (getch() != 27);
						MenuMember();
						break;
					case 4:
						do {
							foreColor(4);
							cls();
							Design::Cover();
							MemberFile::ViewMember();
							MemberFile::DeleteMember();
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
							foreColor(7);
						} while (getch() != 27);
						MenuMember();
						break;
					case 5 :
						foreColor(4);
						cls();
						Design::Cover();
						MenuControl::Main();
						break;
				}

			}while(1);
    }

    // Assign Member to Membership
    static void MenuAssignMember();

		static void MenuStaff(){
			int x = 0;
			char option;
			cls();
			foreColor(7);
			Design::Cover();
			Design::staff();
			do{
				foreColor(7); 
				setcursor(false, 1);
				Design::Dmember();
				if(x == 0)
				{
					for(int i = 65; i<98; i++){
						for(int j = 12 ; j <15 ; j++){
							gotoxy(i,j);
							foreColor(10);
							cout << char(219);
						}
					} 
					foreColor(167); gotoxy(78,13);cout<< "INSERT "<<endl;
				}
				if(x == 1)
				{
					for(int i = 65; i<98; i++){
						for(int j = 16 ; j <19 ; j++){
							gotoxy(i,j);
							foreColor(10);
							cout << char(219);
						}
					} 
					foreColor(167); gotoxy(79,17);cout<< "VIEW "<<endl;
				}
				if(x == 2)
				{
					for(int i = 65; i<98; i++){
						for(int j = 20 ; j <23 ; j++){
							gotoxy(i,j);
							foreColor(10);
							cout << char(219);
						}
					} 
					foreColor(167); gotoxy(78,21);cout<< "SEARCH "<<endl;
				}
				if(x == 3)
				{
					for(int i = 65; i<98; i++){
						for(int j = 24 ; j <27 ; j++){
							gotoxy(i,j);
							foreColor(10);
							cout << char(219);
						}
					} 
					foreColor(167); gotoxy(78,25);cout<< "UPDATE"<<endl;
				}
				if(x == 4)
				{
					for(int i = 65; i<98; i++){
						for(int j = 28 ; j <31 ; j++){
							gotoxy(i,j);
							foreColor(10);
							cout << char(219);
						}
					} 
					foreColor(167); gotoxy(78,29);cout<< "DELETE "<<endl;
				}
				if(x == 5)
				{
					for(int i = 65; i<98; i++){
						for(int j = 32 ; j <35 ; j++){
							gotoxy(i,j);
							foreColor(10);
							cout << char(219);
						}
					} 
					foreColor(167); gotoxy(79,33);cout<< "BACK "<<endl;
					foreColor(7);
				}
				option = getch();
				switch(option)
				{
					case 72:
						{
							x--; 
							if(x < 0)
							{
								x = 5;
							}
							break;
						}
					case 80:
						{
							x++; 
							if(x > 5)
							{ 
								x = 0;
							}
							break;
						}
				}
			}while(option != 13); 
			
			do{	
				switch(x)
				{
					case 0 :
						do{
							foreColor(4);
							cls(); 
							Design::addStaff();
							Design::designadd();
							FileControlStaff::InsertStaff();
							Design::inputESC();
							foreColor(7);
						}while(getch() != 27);		
					MenuStaff();
					break;
					case 1 : 
						foreColor(4);
						cls();
						Design::staffInfo();
						FileControlStaff::ShowStaff();
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
						cout << "<<<<< Press any to back [MENU] >>>>> ";
						foreColor(2);
						getch();
						MenuStaff();
					break;
					case 2 : 
						do{
							foreColor(4);
							cls();
							FileControlStaff::ShowStaff();
							FileControlStaff::SearchStaff();
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
							cout<<"<<< Press Key [ESC] back to MENU and Press any Key to Search Again >>>"<<endl;
							foreColor(7);
						}while(getch() != 27);
						MenuStaff();
					break;
					case 3 : 
						do{
							foreColor(4);
							cls();
							FileControlStaff::ShowStaff();
							FileControlStaff::UpdateStaff();
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
							cout<<"<<< Press Key [ESC] back to MENU and Press any Key to Update Again >>>"<<endl;
							foreColor(7);
						}while(getch() != 27);
						MenuStaff();
					break;
					case 4:
						do{
							foreColor(4);
							cls();
							FileControlStaff::ShowStaff();
							FileControlStaff::DeleteStaff();
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
							cout<<"<<< Press Key [ESC] back to MENU and Press any Key to Delete Again >>>"<<endl;
							foreColor(7);
						}while(getch() != 27);
						MenuStaff();
					break;
					case 5:
						cls();
						MenuControl::Main();
				}

			}while(1);           
		}

		static void MenuTrainer(){
			int x = 0;
			char option;
			cls();
			Design::Cover();
			foreColor(7);
			Design::trainer();
			do{
				foreColor(7); 
				setcursor(false, 1);
				Design::Dmember();
				if(x == 0)
				{
					for(int i = 65; i<98; i++){
						for(int j = 12 ; j <15 ; j++){
							gotoxy(i,j);
							foreColor(10);
							cout << char(219);
						}
					} 
					foreColor(167); gotoxy(78,13);cout<< "INSERT "<<endl;
				}
				if(x == 1)
				{
					for(int i = 65; i<98; i++){
						for(int j = 16 ; j <19 ; j++){
							gotoxy(i,j);
							foreColor(10);
							cout << char(219);
						}
					} 
					foreColor(167); gotoxy(79,17);cout<< "VIEW "<<endl;
				}
				if(x == 2)
				{
					for(int i = 65; i<98; i++){
						for(int j = 20 ; j <23 ; j++){
							gotoxy(i,j);
							foreColor(10);
							cout << char(219);
						}
					} 
					foreColor(167); gotoxy(78,21);cout<< "SEARCH "<<endl;
				}
				if(x == 3)
				{
					for(int i = 65; i<98; i++){
						for(int j = 24 ; j <27 ; j++){
							gotoxy(i,j);
							foreColor(10);
							cout << char(219);
						}
					} 
					foreColor(167); gotoxy(78,25);cout<< "UPDATE"<<endl;
				}
				if(x == 4)
				{
					for(int i = 65; i<98; i++){
						for(int j = 28 ; j <31 ; j++){
							gotoxy(i,j);
							foreColor(10);
							cout << char(219);
						}
					} 
					foreColor(167); gotoxy(78,29);cout<< "DELETE "<<endl;
				}
				if(x == 5)
				{
					for(int i = 65; i<98; i++){
						for(int j = 32 ; j <35 ; j++){
							gotoxy(i,j);
							foreColor(10);
							cout << char(219);
						}
					} 
					foreColor(167); gotoxy(79,33);cout<< "BACK "<<endl;
					foreColor(7);
				}
				option = getch();
				switch(option)
				{
					case 72:
						{
							x--; 
							if(x < 0)
							{
								x = 5;
							}
							break;
						}
					case 80:
						{
							x++; 
							if(x > 5)
							{ 
								x = 0;
							}
							break;
						}
				}
			}while(option != 13); 
			
			do{	
				switch(x)
				{
					case 0 :
						do{
							foreColor(4);
							cls(); 
							Design::Cover();
							Design::designadd();
							TrainerFile::InsertTrainer();
							Design::inputESC();
							foreColor(7);
						}while(getch() != 27);		
						MenuTrainer();
					break;
					case 1 : 
						foreColor(4);
						cls();
						Design::Cover();
						Design::display_trainer();
						TrainerFile::ShowTrainer();
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
						cout << "<<<<< Press any to back [MENU] >>>>> ";
						foreColor(2);
						getch();
						MenuTrainer();
					break;
					case 2 : 
						do{
							foreColor(4);
							cls();
							Design::Cover();
							TrainerFile::ShowTrainer();
							TrainerFile::SearchTrainer();
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
							cout<<"<<< Press Key [ESC] back to MENU and Press any Key to Search Again >>>"<<endl;
							foreColor(7);
						}while(getch() != 27);
						MenuTrainer();
					break;
					case 3 : 
						do{
							foreColor(4);
							cls();
							Design::Cover();
							TrainerFile::ShowTrainer();
							TrainerFile::UpdateTrainer();
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
							cout<<"<<< Press Key [ESC] back to MENU and Press any Key to Update Again >>>"<<endl;
							foreColor(7);
						}while(getch() != 27);
						MenuTrainer();
					break;
					case 4:
						do{
							foreColor(4);
							cls();
							Design::Cover();
							TrainerFile::ShowTrainer();
							TrainerFile::DeleteTrainer();
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
							cout<<"<<< Press Key [ESC] back to MENU and Press any Key to Delete Again >>>"<<endl;
							foreColor(7);
						}while(getch() != 27);
						MenuTrainer();
					break;
					case 5:
						foreColor(4);
						cls();
						MenuControl::Main();
					break;	
				}

			}while(1);   
		}	
};

#endif