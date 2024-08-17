#ifndef __DESIGN_H__
#define __DESIGN_H__

#include<iostream>
#include "antheaderPlusPlus.h"
#include"antheaderInput.h"
// #include"Login.h"
using namespace std;
	
class Design{
    public:
    	
static void thank(){
gotoxy(60,4);foreColor(2);  	cout<<"  ________                __      __  __  ";         
gotoxy(60,5);foreColor(3);  	cout<<" /_  __/ /_  ____ _____  / /__    \\ \\/ /___  __  __ ";
gotoxy(60,6);foreColor(4);  	cout<<"  / / / __ \\/ __ `/ __ \\/ //_/     \\  / __ \\/ / / / ";
gotoxy(60,7);foreColor(5);  	cout<<" / / / / / / /_/ / / / / ,<        / / /_/ / /_/ /  ";
gotoxy(60,8);foreColor(9);  	cout<<"/_/ /_/ /_/\\__,_/_/ /_/_/|_|      /_/\\____/\\__,_/ ";  
                     											cout<<endl;
	
}
    	
    	static void DesignDelete(){
	    	for (int i = 40; i <= 120; i++) {
	        for (int j = 3; j < 8; j++) {
	            gotoxy(i, j);
	            foreColor(6);
	            cout << char(219);
	        }
	    }
	    for (int i = 42; i <= 118; i++) {
	        for (int j = 4; j < 7; j++) {
	            gotoxy(i, j);
	            foreColor(5);
	            cout << char(219);
	        }
	    }
}
		static void boxassign(){
			
			
			foreColor(9);   gotoxy(30, 2);cout << " _______  _______  _______  ___   _______  __    _      __   __  _______  __   __  _______  _______  ______   \n";
			foreColor(2);   gotoxy(30, 3);cout << "|   _   ||       ||       ||   | |       ||  |  | |    |  |_|  ||       ||  |_|  ||  _    ||       ||    _ |  \n";
			foreColor(4);   gotoxy(30, 4); cout << "|  |_|  ||  _____||  _____||   | |    ___||   |_| |    |       ||    ___||       || |_|   ||    ___||   | ||  \n";
			foreColor(2);   gotoxy(30, 5);cout << "|       || |_____ | |_____ |   | |   | __ |       |    |       ||   |___ |       ||       ||   |___ |   |_||_ \n";
			foreColor(5);   gotoxy(30, 6);cout << "|       ||_____  ||_____  ||   | |   ||  ||  _    |    |       ||    ___||       ||  _   | |    ___||    __  |\n";
			foreColor(9);  gotoxy(30, 7);cout << "|   _   | _____| | _____| ||   | |   |_| || | |   |    | ||_|| ||   |___ | ||_|| || |_|   ||   |___ |   |  | |\n";
			foreColor(9);   gotoxy(30, 8);cout << "|__| |__||_______||_______||___| |_______||_|  |__|    |_|   |_||_______||_|   |_||_______||_______||___|  |_|\n";

			for (int i = 28; i <=51; i++) {
					for (int j =22; j <25; j++) {
						gotoxy(i, j);
						foreColor(7);
						cout << char(219);
						//
						gotoxy(i+88, j);
						foreColor(7);
						cout << char(219);
						
				}	
			}
			
			for (int i = 76; i <=92; i++) {
						for (int j =26; j <29; j++) {
							gotoxy(i, j);
							foreColor(7);
							cout << char(219);
				}
			}
			
			foreColor(252);gotoxy(32,23);cout<<" M O N T H L Y "<<endl;
			foreColor(252);gotoxy(121,23);cout<<" Y E A R L Y  "<<endl;
			// foreColor(252);gotoxy(80,27);cout<<" B A C K  "<<endl;
			
			foreColor(199);gotoxy(28,26);cout<<" If you choose Monthly "<<endl;
			foreColor(199);gotoxy(23,27);cout<<" The monthly cost is $20 Per month.  "<<endl;
			
			foreColor(199);gotoxy(117,26);cout<<" If you choose Yearly "<<endl;
			foreColor(199);gotoxy(112,27);cout<<" The yearly cost is $200 Per year.  "<<endl;
		}
		
		static void Dassign(){		
			for (int i = 0; i <=169; i++) {
				for (int j =0; j <2; j++) {
					gotoxy(i, j);
					foreColor(5);
				cout << char(219);
				}
			}
				
			for (int i = 0; i <=169; i++) {
				for (int j =37; j <38; j++) {
					gotoxy(i, j);
					foreColor(5);
					cout << char(219);
				}
			}
			
			for (int i = 0; i <=2; i++) {
				for (int j =0; j <16; j++) {
					gotoxy(i, j);
					foreColor(5);
					cout << char(219);
					gotoxy(i, j+20);
					foreColor(5);
					cout << char(219);		
					gotoxy(i+167, j);
					foreColor(5);
					cout << char(219);
					gotoxy(i+167, j+20);
					foreColor(5);
					cout << char(219);		
				}
			}

			for (int i = 60; i <=107; i++) {
				for (int j =11; j <16; j++) {
					gotoxy(i, j);
					foreColor(5);
					cout << char(219);
					//
					
				}
			}

			for (int i = 62; i <=105; i++) {
						for (int j =12; j <15; j++) {
							gotoxy(i, j);
							foreColor(2);
							cout << char(219);
							//
							
					}
			}


			foreColor(9);   gotoxy(30, 2);cout << " _______  _______  _______  ___   _______  __    _      __   __  _______  __   __  _______  _______  ______   \n";
			foreColor(2);   gotoxy(30, 3);cout << "|   _   ||       ||       ||   | |       ||  |  | |    |  |_|  ||       ||  |_|  ||  _    ||       ||    _ |  \n";
			foreColor(4);   gotoxy(30, 4); cout << "|  |_|  ||  _____||  _____||   | |    ___||   |_| |    |       ||    ___||       || |_|   ||    ___||   | ||  \n";
			foreColor(2);   gotoxy(30, 5);cout << "|       || |_____ | |_____ |   | |   | __ |       |    |       ||   |___ |       ||       ||   |___ |   |_||_ \n";
			foreColor(5);   gotoxy(30, 6);cout << "|       ||_____  ||_____  ||   | |   ||  ||  _    |    |       ||    ___||       ||  _   | |    ___||    __  |\n";
			foreColor(9);  gotoxy(30, 7);cout << "|   _   | _____| | _____| ||   | |   |_| || | |   |    | ||_|| ||   |___ | ||_|| || |_|   ||   |___ |   |  | |\n";
			foreColor(9);   gotoxy(30, 8);cout << "|__| |__||_______||_______||___| |_______||_|  |__|    |_|   |_||_______||_|   |_||_______||_______||___|  |_|\n";

		}
		static void RealAssign(){
			
			for (int i = 19; i <=60; i++) {
					for (int j =21; j <33; j++) {
					gotoxy(i, j);
					foreColor(4);
					cout << char(219);
					gotoxy(i+88, j);
					foreColor(4);
					cout << char(219);
				}
			}

			for (int i = 61; i <=75; i++) {
				for (int j =27; j <28; j++) {
					gotoxy(i, j);
					foreColor(7);
					cout << char(219);
					gotoxy(i+31, j);
					foreColor(7);
					cout << char(219);
				}
			}

		}

		static void update_membership(){
			foreColor(1); gotoxy(35, 2);cout << " _  _  ____  ____   __  ____  ____    _  _  ____  _  _  ____  ____  ____  ____  _  _  __  ____ \n";
			foreColor(2); gotoxy(35, 3);cout << "/ )( \\(  _ \\(    \\ / _\\(_  _)(  __)  ( \\/ )(  __)( \\/ )(  _ \\(  __)(  _ \\/ ___)/ )( \\(  )(  _ \\\n";
			foreColor(3); gotoxy(35, 4);cout << ") \\/ ( ) __/ ) D (/    \\ )(   ) _)   / \\/ \\ ) _) / \\/ \\ ) _ ( ) _)  )   /\\___ \\) __ ( )(  ) __/\n";
			foreColor(4); gotoxy(35, 5);cout << "\\____/(__)  (____/\\_/\\_/(__) (____)  \\_)(_/(____)\\_)(_/(____/(____)(__\\_)(____/\\_)(_/(__)(__)  \n";
			HLine(35,7,95, 6, 223);

			DrawRectangle(45, 12, 70, 11, 9);
			HLine(45,14,70, 9, 205);
			HLine(45,16,70, 9, 205);
			HLine(45,18,70, 9, 205);
			HLine(45,20,70, 9, 205);
			HLine(45,22,70, 9, 205);
		}
		static void display_membership(){
			foreColor(1); gotoxy(25, 2); cout << "   __  _________  ______  _______  ______ _________    _____  __________  ___  __  ______ ______________  _  __\n";
			foreColor(2); gotoxy(25, 3); cout << "  /  |/  / __/  |/  / _ )/ __/ _ \\/ __/ // /  _/ _ \\  /  _/ |/ / __/ __ \\/ _ \\/  |/  / _ /_  __/  _/ __ \\/ |/ /\n";
			foreColor(3); gotoxy(25, 4); cout << " / /|_/ / _// /|_/ / _  / _// , _/\\ \\/ _  // // ___/ _/ //    / _// /_/ / , _/ /|_/ / __ |/ / _/ // /_/ /    / \n";
			foreColor(4); gotoxy(25, 5); cout << "/_/  /_/___/_/  /_/____/___/_/|_/___/_//_/___/_/    /___/_/|_/_/  \\____/_/|_/_/  /_/_/ |_/_/ /___/\\____/_/|_/  \n";
			foreColor(5); gotoxy(25, 6); cout << "                                                                                                               \n";
		}
		static void menu_assign(){
			gotoxy(32,2);foreColor(1);cout<<"   __    __      _____     __    __     ______     _____   ______      _____   __    __    _____   _____ "<<endl; 
			gotoxy(32,3);foreColor(2);cout<<"   \\ \\  / /     / ___/     \\ \\  / /    (_   _ \\   / ___/  (   __ \\    / ____\\ (  \\  /  )  (_   _) (  __ \\  "<<endl;
			gotoxy(32,4);foreColor(3);cout<<"   () \\/ ()    ( (__       () \\/ ()      ) (_) ) ( (__     ) (__) )  ( (___    \\ (__) /     | |    ) )_) ) "<<endl;
			gotoxy(32,5);foreColor(4);cout<<"   / _  _ \\     ) __)      / _  _ \\      \\   _/   ) __)   (    __/    \\___ \\    ) __ (      | |   (  ___/  "<<endl;
			gotoxy(32,6);foreColor(5);cout<<"  / / \\/ \\ \\   ( (        / / \\/ \\ \\     /  _ \\  ( (       ) \\ \\  _       ) )  ( (  ) )     | |    ) )     "<<endl;
			gotoxy(32,7);foreColor(6);cout<<" /_/      \\_\\   \\ \\___   /_/      \\_\\   _) (_) )  \\ \\___  ( ( \\ \\_))  ___/ /    ) )( (     _| |__ ( (      "<<endl;
			gotoxy(32,8);foreColor(1);cout<<"(/          \\)   \\____\\ (/          \\) (______/    \\____\\  )_) \\__/  /____/    /_/  \\_\\   /_____( /__\\     "<<endl;

			HLine(38,20,16,2,219);
			HLine(39,21,14,7,219);
			HLine(40,22,12,6,219);

			HLine(38,35,16,2,219);
			HLine(39,34,14,7,219);  
			HLine(40,33,12,6,219); 

			HLine(110,20,16,2,219);
			HLine(111,21,14,7,219);
			HLine(112,22,12,6,219);

			HLine(110,35,16,2,219);
			HLine(111,34,14,7,219); 
			HLine(112,33,12,6,219);   

			HLine(35,16,25,1,219);
			HLine(105,16,25,1,219);  

			VLine(46,24,6,3,219);
			VLine(47,24,6,3,219); 
			VLine(118,24,6,3,219);
			VLine(119,24,6,3,219);	
		}
		static void clearPreviousHighlight(int o) {
			for (int i = 10; i < 30; i++) {
				for (int j = 20; j < 23; j++) {
					if (o == 1) {
						gotoxy(i, j + 1);
						foreColor(10);
						cout << char(219);
					} else if (o == 2) {
						gotoxy(i, j + 5);
						foreColor(10);
						cout << char(219);
					} else if (o == 3) {
						gotoxy(i, j + 9);
						foreColor(10);
						cout << char(219);
					}
				}
			}
		}

		static void displayNames() {
			foreColor(167);
			gotoxy(13, 22);
			cout << "ROEUN CHANTHOU" << endl;
			foreColor(167);
			gotoxy(14, 26);
			cout << "THIM BUNHUV" << endl;
			foreColor(167);
			gotoxy(14, 30);
			cout << "SIHN PORSUR" << endl;
		}

		static void highlightCurrent(int o) {
			for (int i = 10; i < 30; i++) {
				for (int j = 20; j < 23; j++) {
					if (o == 1) {
						gotoxy(i, j + 1);
						foreColor(9);
						cout << char(219);
						foreColor(151);
						gotoxy(13, 22);
						cout << "ROEUN CHANTHOU" << endl;
					} else if (o == 2) {
						gotoxy(i, j + 5);
						foreColor(9);
						cout << char(219);
						foreColor(151);
						gotoxy(14, 26);
						cout << "THIM BUNHUV" << endl;
					} else if (o == 3) {
						gotoxy(i, j + 9);
						foreColor(9);
						cout << char(219);
						foreColor(151);
						gotoxy(14, 30);
						cout << "SIHN PORSUR" << endl;
					}
				}
			}
		}

		static void Dabout() {
			foreColor(9); gotoxy(60, 3); cout << "     \\     __ )    _ \\   |   | __ __|      |   |   ___|  \n";
			foreColor(6); gotoxy(60, 4); cout << "    _ \\    __ \\   |   |  |   |    |        |   | \\___ \\  \n";
			foreColor(4); gotoxy(60, 5); cout << "   ___ \\   |   |  |   |  |   |    |        |   |       | \n";
			foreColor(7); gotoxy(60, 6); cout << " _/    _\\ ____/  \\___/  \\___/    _|       \\___/  _____/  \n";
			foreColor(9); gotoxy(60, 7); cout << "                                                         \n";

			DrawRectangle(8, 20, 24, 14, 7);
			DrawRectangle(8, 15, 26, 4, 7);
			DrawRectangle(35, 15, 44, 4, 7);

			for (int i = 57; i < 77; i++) {
				for (int j = 20; j < 23; j++) {
					gotoxy(i - 11, j + 4);
					foreColor(10);
					cout << char(219);

					gotoxy(i, j + 8);
					foreColor(10);
					cout << char(219);
				}
			}

			for (int i = 35; i < 55; i++) {
				for (int j = 20; j < 23; j++) {
					gotoxy(i, j + 8);
					foreColor(10);
					cout << char(219);
				}
			}

			for (int i = 36; i < 78; i++) {
				for (int j = 16; j < 20; j++) {
					gotoxy(i, j);
					foreColor(10);
					cout << char(219);
				}
			}

			for (int i = 9; i < 33; i++) {
				for (int j = 16; j < 20; j++) {
					gotoxy(i, j);
					foreColor(10);
					cout << char(219);
				}
			}

			foreColor(167); gotoxy(17, 17); cout << "STUDENT" << endl;
			foreColor(167); gotoxy(48, 17); cout << "TEACHER AND MENTOR" << endl;
			foreColor(167); gotoxy(50, 25); cout << "MEAN PHAKDEY" << endl;
			foreColor(167); gotoxy(39, 29); cout << "PE PUNREAY" << endl;
			foreColor(167); gotoxy(59, 29); cout << "SAN MONYAKKHARA" << endl;

			for (int i = 93; i < 162; i++) {
				for (int j = 15; j < 32; j++) {
					gotoxy(i, j + 1);
					foreColor(10);
					cout << char(219);
				}
			}

			for (int i = 95; i < 160; i++) {
				for (int j = 16; j < 30; j++) {
					gotoxy(i, j + 1);
					foreColor(6);
					cout << char(219);
				}
			}

			for (int i = 96; i < 159; i++) {
				for (int j = 17; j < 20; j++) {
					gotoxy(i, j + 1);
					foreColor(7);
					cout << char(219);
				}
			}

			gotoxy(107, 19); foreColor(252); cout << " Ministry of Post and Telecommunications ";

			drawBoxDoubleLineWithBG(2, 10, 2, 26, 4);
			drawBoxDoubleLineWithBG(6, 10, 158, 3, 2);
			drawBoxDoubleLineWithBG(166, 10, 2, 26, 4);
			drawBoxDoubleLineWithBG(6, 33, 158, 3, 2);
			DrawRectangle(8, 15, 71, 16, 7);
			DrawRectangle(93, 15, 69, 16, 7);
			drawBoxDoubleLineWithBG(83, 18, 1, 10, 4);
			drawBoxDoubleLineWithBG(88, 18, 1, 10, 4);
			drawBoxDoubleLineWithBG(85, 14, 2, 18, 4);

			for (int i = 0; i < 3; i++) {
				HLine(85, 15, i, 9, 223);
				HLine(85, 16, i, 9, 223);
				HLine(85, 17, i, 9, 223);
				HLine(85, 18, i, 9, 223);
				HLine(85, 19, i, 9, 223);
				HLine(85, 20, i, 9, 223);
				HLine(85, 21, i, 9, 223);
				HLine(85, 22, i, 9, 223);
				HLine(85, 23, i, 9, 223);
				HLine(85, 24, i, 9, 223);
				HLine(85, 25, i, 9, 223);
				HLine(85, 26, i, 9, 223);
				HLine(85, 27, i, 9, 223);
				HLine(85, 28, i, 9, 223);
				HLine(85, 29, i, 9, 223);
				HLine(85, 30, i, 9, 223);
				HLine(85, 31, i, 9, 223);
				HLine(85, 32, i, 9, 223);
			}

			for (int i = 2; i < 4; i++) {
				for (int j = 10; j < 36; j++) {
					gotoxy(i, j + 1);
					foreColor(6);
					cout << char(219);

					gotoxy(i + 164, j + 1);
					foreColor(6);
					cout << char(219);
				}
			}

			for (int i = 10; i < 12; i++) {
				for (int j = 15; j < 18; j++) {
					gotoxy(i, j + 1);
					foreColor(6);
					cout << char(219);

					gotoxy(i + 20, j + 1);
					foreColor(6);
					cout << char(219);

					gotoxy(i + 65, j + 1);
					foreColor(6);
					cout << char(219);

					gotoxy(i + 27, j + 1);
					foreColor(6);
					cout << char(219);
				}
			}

			for (int i = 10; i < 32; i++) {
				for (int j = 18; j < 19; j++) {
					gotoxy(i, j + 1);
					foreColor(6);
					cout << char(219);
				}
			}

			for (int i = 37; i < 77; i++) {
				for (int j = 18; j < 19; j++) {
					gotoxy(i, j + 1);
					foreColor(6);
					cout << char(219);
				}
			}

			for (int i = 0; i < 5; ++i) {
				VLine(56, 4, i - 2, 9, 219);
				VLine(55, 4, i - 2, 9, 219);
				VLine(52, 2, i, 9, 219);
				VLine(51, 2, i, 9, 219);
				VLine(47, 0, i + 2, 9, 219);
				VLine(48, 0, i + 2, 9, 219);
				VLine(43, -1, i + 3, 9, 219);
				VLine(44, -1, i + 3, 9, 219);

				VLine(121, 4, i - 2, 9, 219);
				VLine(122, 4, i - 2, 9, 219);
				VLine(126, 2, i, 9, 219);
				VLine(125, 2, i, 9, 219);
				VLine(130, 0, i + 2, 9, 219);
				VLine(129, 0, i + 2, 9, 219);
				VLine(133, -1, i + 3, 9, 219);
				VLine(134, -1, i + 3, 9, 219);
			}

			foreColor(225);
			gotoxy(96, 22); cout << " WE ARE THE SCHOLARSHIP STUDENT AT [1] ANT TECHNOLOGY TRAINING ";
			gotoxy(96, 23); cout << " CENTER, SPECIALIZE IN MOBILE APPLICATION STUDY FOR 11 MONTHS ";
			gotoxy(105, 24); cout << " FROM 19 FEBRUARY 2024 DECEMBER 2024.";
			gotoxy(96, 25); cout << " THANKS TO THE GENEROUS SUPPORT OF THE [2] MINISTRY OF POST ";
			gotoxy(110, 26); cout << " AND TELECOMMUNICATION";
			gotoxy(96, 27); cout << " BY TAKING THIS GREAT OPPORTUNITY WE ABLE TO LEARN MORE THING ";
			gotoxy(96, 28); cout << " AND UPGRADE TO THE NEXT LEVEL AND THIS IS OUR FINAL PROJECT ";
			gotoxy(105, 29); cout << " AFTER FINISH THE C++/ OOP COURSE .";
			gotoxy(118, 30); cout << " T H A N K    Y O U ";

			gotoxy(56, 8); foreColor(7); cout << "\4 --------------------------- (\4) -----------------------------\4  ";
			drawBoxDoubleLineWithBG(8, 11, 153, 1, 4); gotoxy(13, 12); foreColor(9); cout << "\4 ------------------------------------------------- >>>> ANT TECHNOLOGY TRAINING CENTER <<<<< -------------------------------------------------\4  ";
			drawBoxDoubleLineWithBG(8, 34, 153, 1, 4); gotoxy(13, 35); foreColor(9); cout << "\4 -------------------------------------------------"; gotoxy(68, 35); foreColor(7); cout << " >>>> PRESS KEY ESC TO BACK <<<<< "; gotoxy(107, 35); foreColor(9); cout << "-------------------------------------------------\4  ";
		}
	
    	static void Dmain(){
    		
    		for(int i = 65; i<98; i++){
					 	for(int j = 12 ; j <15 ; j++){
					 		gotoxy(i,j);
					 		foreColor(7);
					 		cout << char(219);
					 	}
					 } 
			foreColor(241);	gotoxy(78,13);cout<< "MEMBER "<<endl;
			//
				for(int i = 65; i<98; i++){
					 	for(int j = 16 ; j <19 ; j++){
					 		gotoxy(i,j);
					 		foreColor(7);
					 		cout << char(219);
					 	}
					 } 
					foreColor(241); gotoxy(79,17);cout<< "STAFF "<<endl;
				
			for(int i = 65; i<98; i++){
					 	for(int j = 20 ; j <23 ; j++){
					 		gotoxy(i,j);
					 		foreColor(7);
					 		cout << char(219);
					 	}
					 } 
					foreColor(241); gotoxy(77,21);cout<< "TRAINER "<<endl;
			///
			for(int i = 65; i<98; i++){
					 	for(int j = 24 ; j <27 ; j++){
					 		gotoxy(i,j);
					 		foreColor(7);
					 		cout << char(219);
					 	}
					 } 
			foreColor(241);	gotoxy(73,25);cout<< "ASSIGN TO MEMBERSHIP"<<endl;
			//
				 for(int i = 65; i<98; i++){
					 	for(int j = 28 ; j <31 ; j++){
					 		gotoxy(i,j);
					 		foreColor(7);
					 		cout << char(219);
					 	}
					 } 
			foreColor(241);	gotoxy(80,29);cout<< "BACK "<<endl;
    	}

		static void Dmember(){
			for(int i = 65; i<98; i++){
					 	for(int j = 12 ; j <15 ; j++){
					 		gotoxy(i,j);
					 		foreColor(7);
					 		cout << char(219);
					 	}
					 } 
			foreColor(241);	gotoxy(78,13);cout<< "INSERT "<<endl;
			//
				for(int i = 65; i<98; i++){
					 	for(int j = 16 ; j <19 ; j++){
					 		gotoxy(i,j);
					 		foreColor(7);
					 		cout << char(219);
					 	}
					 } 
					foreColor(241); gotoxy(79,17);cout<< "VIEW "<<endl;
				
			for(int i = 65; i<98; i++){
					 	for(int j = 20 ; j <23 ; j++){
					 		gotoxy(i,j);
					 		foreColor(7);
					 		cout << char(219);
					 	}
					 } 
					foreColor(241); gotoxy(78,21);cout<< "SEARCH "<<endl;
			///
			for(int i = 65; i<98; i++){
					 	for(int j = 24 ; j <27 ; j++){
					 		gotoxy(i,j);
					 		foreColor(7);
					 		cout << char(219);
					 	}
					 } 
			foreColor(241);	gotoxy(78,25);cout<< "UPDATE"<<endl;
             for(int i = 65; i<98; i++){
					 	for(int j = 28 ; j <31 ; j++){
					 		gotoxy(i,j);
					 		foreColor(7);
					 		cout << char(219);
					 	}
					 } 
			foreColor(241);	gotoxy(78,29);cout<< "DELETE "<<endl;
			//
				 for(int i = 65; i<98; i++){
					 	for(int j = 32 ; j <35 ; j++){
					 		gotoxy(i,j);
					 		foreColor(7);
					 		cout << char(219);
					 	}
					 } 
			foreColor(241);	gotoxy(79,33);cout<< "BACK "<<endl;
		}
		static void Dmembership(){
			for (int i = 65; i < 98; i++) {
				for (int j = 12; j < 15; j++) {
					gotoxy(i, j);
					foreColor(7);
					cout << char(219);
				}
			}
			foreColor(241); gotoxy(73, 13); cout << "ASSIGN MEMBER SHIP " << endl;

			for (int i = 65; i < 98; i++) {
				for (int j = 15; j < 18; j++) {
					gotoxy(i, j);
					foreColor(7);
					cout << char(219);
				}
			}
			foreColor(241); gotoxy(74, 16); cout << "VIEW MEMBER SHIP" << endl;

			for (int i = 65; i < 98; i++) {
				for (int j = 18; j < 21; j++) {
					gotoxy(i, j);
					foreColor(7);
					cout << char(219);
				}
			}
			foreColor(241); gotoxy(73, 19); cout << "SEARCH MEMBER SHIP" << endl;

			for (int i = 65; i < 98; i++) {
				for (int j = 21; j < 24; j++) {
					gotoxy(i, j);
					foreColor(7);
					cout << char(219);
				}
			}
			foreColor(241); gotoxy(73, 22); cout << "UPDATE MEMBER SHIP" << endl;

			for (int i = 65; i < 98; i++) {
				for (int j = 24; j < 27; j++) {
					gotoxy(i, j);
					foreColor(7);
					cout << char(219);
				}
			}
			foreColor(241); gotoxy(73, 25); cout << "DELETE MEMBER SHIP" << endl;

			for (int i = 65; i < 98; i++) {
				for (int j = 27; j < 30; j++) {
					gotoxy(i, j);
					foreColor(7);
					cout << char(219);
				}
			}
			foreColor(241); gotoxy(78, 28); cout << "INVOICE " << endl;

			for (int i = 65; i < 98; i++) {
				for (int j = 30; j < 33; j++) {
					gotoxy(i, j);
					foreColor(7);
					cout << char(219);
				}
			}
			foreColor(241); gotoxy(79, 31); cout << "BACK " << endl;
		}
		static void welComeDesign(){
			drawBoxDoubleLineWithBG(10,0,138,1,4);          
			drawBoxDoubleLineWithBG(10,9,138,1,4);
			foreColor (2);
			for(int i = 0 ; i<=136 ; i+=2){
				gotoxy(11+i,1); cout<<(char)219;
				gotoxy(11+i,10); cout<<(char)219;
			}	
			foreColor (9);gotoxy(16, 3);cout << "___       __    ______                                 _____            ____________   _________   _________                   \n";
			foreColor (2);gotoxy(16, 4);cout << "__ |     / /_______  /__________________ ________      __  /______      ___    |__  | / /__  __/   __  ____/____  ________ ___ \n";
			foreColor (5);gotoxy(16, 5);cout << "__ | /| / /_  _ \\_  /_  ___/  __ \\_  __ `__ \\  _ \\     _  __/  __ \\     __  /| |_   |/ /__  /      _  / __ __  / / /_  __ `__ \\\n";
			foreColor (4);gotoxy(16, 6);cout << "__ |/ |/ / /  __/  / / /__ / /_/ /  / / / / /  __/     / /_ / /_/ /     _  ___ |  /|  / _  /       / /_/ / _  /_/ /_  / / / / /\n";
			foreColor (2);gotoxy(16, 7);cout << "____/|__/  \\___//_/  \\___/ \\____//_/ /_/ /_/\\___/      \\__/ \\____/      /_/  |_/_/ |_/  /_/        \\____/  _\\__, / /_/ /_/ /_/ \n";
			foreColor (2);gotoxy(16, 8);cout << "                                                                                                           /____/              \n";

			for(int i = 54; i<104; i++){
				for(int j = 19 ; j <30 ; j++){
					gotoxy(i,j);
					foreColor(4);
					cout << char(219);
				}
			} 
			for(int i = 0 ; i < 30 ; i++){
 			HLine(10,13,i,4,219);
			HLine(15,15,i-10,2,219);
			HLine(15,17,i-10,9,219);
			HLine(15,19,i-10,5,219);
			HLine(15,21,i-10,6,219);
			HLine(15,23,i-10,7,219);
			HLine(15,25,i-10,7,219);
			HLine(15,27,i-10,6,219);
			HLine(15,29,i-10,5,219);
			HLine(15,31,i-10,9,219);
			HLine(15,33,i-10,2,219);
			HLine(10,35,i,4,219);
//			delay(10);
			HLine(120,13,i,4,219);
			HLine(125,15,i-10,2,219);
			HLine(125,17,i-10,9,219);
			HLine(125,19,i-10,5,219);
			HLine(125,21,i-10,6,219);
			HLine(125,23,i-10,7,219);
			HLine(125,25,i-10,7,219);
			HLine(125,27,i-10,6,219);
			HLine(125,29,i-10,5,219);
			HLine(125,31,i-10,9,219);
			HLine(125,33,i-10,2,219);
			HLine(120,35,i,4,219);
			
			// 
			HLine(49,17,i+i+2,4,219);
			HLine(49,31,i+i+2,4,219);
			VLine(50,16,i-14,4,219);
			VLine(51,16,i-14,4,219);
			
			VLine(109,16,i-14,4,219);
			VLine(108,16,i-14,4,219);
			
			
		}
		
		}

		static void bgColor(){
			for(int i = 54; i<104; i++){
					for(int j = 19 ; j <30 ; j++){
						gotoxy(i,j);
						foreColor(4);
						cout << char(219);
					}
				} 
				for(int i = 0 ; i < 30 ; i++){
						VLine(54,18,i-18,7,219);
						VLine(70,18,i-18,7,219);
						VLine(88,18,i-18,7,219);
						VLine(105,18,i-18,7,219);
				}
		}

		static void controllOne(){
			for(int i = 54; i<69; i++){
						for(int j = 19 ; j <30 ; j++){
							gotoxy(i,j);
							foreColor(9);
							cout << char(219);
						}
					}
					foreColor(151);
					gotoxy(60, 20); cout<< "L"; 
					gotoxy(60, 22); cout<< "O";
					gotoxy(60, 24); cout<< "G";
					gotoxy(60, 26); cout<< "I";
					gotoxy(60, 28); cout<< "N";
		}
		static void controllTwo(){
			for(int i = 70; i<87; i++){
						for(int j = 19 ; j <30 ; j++){
							gotoxy(i,j);
							foreColor(9);
							cout << char(219);
						}
					} 
					foreColor(151);
					gotoxy(78, 20); cout<< "A"; 
					gotoxy(78, 22); cout<< "B";
					gotoxy(78, 24); cout<< "O";
					gotoxy(78, 26); cout<< "U";
					gotoxy(78, 28); cout<< "T";
		}
		static void controllThree(){
			for(int i = 88; i<104; i++){
						for(int j = 19 ; j <30 ; j++){
							gotoxy(i,j);
							foreColor(9);
							cout << char(219);
						}
					} 
					foreColor(151);
					gotoxy(95, 21); cout<< "E"; 
					gotoxy(95, 23); cout<< "X";
					gotoxy(95, 25); cout<< "I";
					gotoxy(95, 27); cout<< "T";
		}
		static void Cover(){
			DrawRectangle(2,0,166,36,9);
		}
		
		static void designadd(){
					
					for(int i = 80; i<82; i++){
								for(int j = 14 ; j <30 ; j++){
									gotoxy(i,j);
									foreColor(7);
									cout << char(219);
								}
							}
				for(int i = 73; i<82; i++){
								for(int j = 14 ; j <15 ; j++){
									gotoxy(i,j);
									foreColor(7);
									cout << char(219);
									
									gotoxy(i+7,j+16);
									foreColor(7);
									cout << char(219);
								}
							}
		}
		static void log(){
			setcursor(0,10);
			gotoxy(12,2);foreColor(2);cout<< " _                  _          _     _                                              ___      ______                                      _ ";
			gotoxy(12,3);foreColor(5);cout<< "(_)                (_)        (_)   (_)                                            / _ \\    (_____ \\                                    | |";
			gotoxy(12,4);foreColor(6);cout<< " _       ___   ____ _ ____     _     _  ___ _____  ____ ____  _____ ____  _____   ( (_) )    _____) )____  ___  ___ _ _ _  ___   ____ __| |";
			gotoxy(12,5);foreColor(7);cout<< "| |     / _ \\ / _  | |  _ \\   | |   | |/___) ___ |/ ___)  _ \\(____ |    \\| ___ |   ) _ (    |  ____(____ |/___)/___) | | |/ _ \\ / ___) _  |";
			gotoxy(12,6);foreColor(5);cout<< "| |____| |_| ( (_| | | | | |  | |___| |___ | ____| |   | | | / ___ | | | | ____|  ( (/  \\   | |    / ___ |___ |___ | | | | |_| | |  ( (_| |";
			gotoxy(12,7);foreColor(2);cout<< "|_______)___/ \\___ |_|_| |_|   \\_____/(___/|_____)_|   |_| |_\\_____|_|_|_|_____)   \\__/\\_)  |_|    \\_____(___/(___/ \\___/ \\___/|_|   \\____|";
			gotoxy(12,8);foreColor(9);cout<< "             (_____|        ";                                                                                                               
				
					
					////========== Loading 
			DrawRectangle(30, 10, 100, 1,7);
			DrawRectangle(31,34, 100,1 ,3);
			
				for(int i = 0 ; i<=97 ; i++){
				foreColor(17+i);
				gotoxy(31+i,11);cout<<" ";
				foreColor(72+i);
				gotoxy(32+i,35);cout<<" ";
				delay(8);
			}
			
		//========== left 

			gotoxy(10,20);foreColor(4);	cout<< "             )     )  ";         
			gotoxy(12,20);foreColor(4);	cout<< "          ( /(  ( /(  ";         
			gotoxy(12,21);foreColor(4);	cout<< "          )\\()) )\\()) " ;        
			gotoxy(12,22);foreColor(4);	cout<< "  __     ((_)\\ ((_)\\      __ ";  
			gotoxy(12,23);foreColor(3);	cout<< " / /     __((_)__((_)     \\ \\ "; 
			gotoxy(12,24);foreColor(5);	cout<< "| |      \\ \\/ /\\ \\/ /      | | ";
			gotoxy(12,25);foreColor(6);	cout<< "| |       >  <  >  <       | | ";
			gotoxy(12,26);foreColor(7);	cout<< " \\_\\_____/_/\\_\\/_/\\_\\_____/_/ "; 
			gotoxy(12,27);foreColor(9);	cout<< "   |_____|          |_____| ";   

			//========== right
			gotoxy(115,20);foreColor(4);	cout<< "             )     )  ";         
			gotoxy(115,20);foreColor(4);	cout<< "          ( /(  ( /(  ";         
			gotoxy(115,21);foreColor(4);	cout<< "          )\\()) )\\()) " ;        
			gotoxy(115,22);foreColor(4);	cout<< "  __     ((_)\\ ((_)\\      __ ";  
			gotoxy(115,23);foreColor(3);	cout<< " / /     __((_)__((_)     \\ \\ "; 
			gotoxy(115,24);foreColor(5);	cout<< "| |      \\ \\/ /\\ \\/ /      | | ";
			gotoxy(115,25);foreColor(6);	cout<< "| |       >  <  >  <       | | ";
			gotoxy(115,26);foreColor(7);	cout<< " \\_\\_____/_/\\_\\/_/\\_\\_____/_/ "; 
			gotoxy(115,27);foreColor(9);	cout<< "   |_____|          |_____| ";   

		//	DrawRectangle(60,14, 40,17 ,5);
				
			
			DrawRectangle(75,15, 10,1 ,3);	gotoxy(77,16);foreColor(9);cout << " lOGIN  " ;
			DrawRectangle(75,29, 10,1 ,4);	gotoxy(77,30);foreColor(7);cout << "THANKS " ;
			foreColor(5);
		//======== cicle 
				HLine(60, 14,40, 5, 3);
				HLine(60, 32,40, 5, 3);
				VLine(60, 13,19, 5, 3);
				VLine(100,13,18, 5, 3);
		//======== ruler in the box 
				HLine(60, 19,39, 6, 3);
				HLine(60, 23,39, 9, 3); 
				HLine(60, 27,39, 7, 3); 
		//			system("color 5");
				setcursor(1,10);
			
		}
		static void text(){
			setcursor(false, 1);
			foreColor(199);
			gotoxy(60, 20); cout<< "L"; 
			gotoxy(60, 22); cout<< "O";
			gotoxy(60, 24); cout<< "G";
			gotoxy(60, 26); cout<< "I";
			gotoxy(60, 28); cout<< "N";
			foreColor(199);
			gotoxy(78, 20); cout<< "A"; 
			gotoxy(78, 22); cout<< "B";
			gotoxy(78, 24); cout<< "O";
			gotoxy(78, 26); cout<< "U";
			gotoxy(78, 28); cout<< "T";
			
			foreColor(199);
			gotoxy(95, 21); cout<< "E"; 
			gotoxy(95, 23); cout<< "X";
			gotoxy(95, 25); cout<< "I";
			gotoxy(95, 27); cout<< "T";	
		}		
		static void D_invoice(){
			setcursor(0,10);
			for(int i = 0 ; i < 171; i++){
					HLine(0,0,i,4,219);
					HLine(0,37,i,4,219);
		//			delay(10);
				}
			
				for(int i = 1 ; i<24 ; i++){
					VLine(2,6,i,2,219);
					VLine(3,6,i,2,219);
					VLine(6,10,i-6,4,219);
					VLine(7,10,i-6,4,219);
					VLine(10,12,i-10,2,219);
					VLine(11,12,i-10,2,219);
					//
					VLine(170,6,i,2,219);
					VLine(169,6,i ,2,219);
					VLine(166,10,i-6,4,219);
					VLine(165,10,i-6,4,219);
					VLine(162,12,i-10,2,219);
					VLine(161,12,i-10,2,219);
		//			delay(5);
				}
				
			foreColor(4);gotoxy(65, 5); cout << "________                   _____            \n";
			foreColor(2);gotoxy(65, 6); cout << "____  _/_________   __________(_)__________ \n";
			foreColor(9);gotoxy(65, 7); cout << " __  / __  __ \\_ | / /  __ \\_  /_  ___/  _ \\\n";
			foreColor(7);gotoxy(65, 8); cout << "__/ /  _  / / /_ |/ // /_/ /  / / /__ /  __/\n";
			foreColor(5);gotoxy(65, 9); cout << "/___/  /_/ /_/_____/ \\____//_/  \\___/ \\___/ \n";
			foreColor(9);gotoxy(65, 10); cout << "                                            \n";
			
			for(int i = 0; i < 35 ; ++i){
				HLine(43,3,i-20,9,219);
				HLine(116,3,i-20,9,219);
				HLine(43,12,i-20,9,219);
				HLine(116,12,i-20,9,219);
				
				
		//		HLine(48,4,i-10,4,220);
		//		HLine(48,10,i-10,4,220);

//				delay(10);
			}
			for(int i = 0 ; i< 11 ; i++){
				VLine(43,2,i,9,219);
				VLine(42,2,i,9,219);
		//		VLine(49,4,i-4,2,219);
				
		//		VLine(116,4,i-4,2,219);
				VLine(130,2,i,9,219);
				VLine(131,2,i,9,219);
			}
			

				DrawRectangle(69,15,35,1,2);
		//        gotoxy(61, 16);foreColor(215);cout << "SEARCH INVOICE BY ID : ";

		} 

		
		static void boxinvoice(){
				
				
	
				for(int i =0 ; i < 125; ++i){
					HLine(23,19,i,9,219);
					HLine(23,34,i,9,219);
				}
				for(int i = 0 ; i <17 ; i++){
					VLine(22,18,i,9,219);
					VLine(23,18,i,9,219);
					///
					VLine(148,18,i,9,219);
					VLine(149,18,i,9,219);
				}
				
		//		 DrawRectangle(60,15,35,1,2);
				gotoxy(25, 21);foreColor(7);cout << "ANT GYM  ";
				gotoxy(130, 21);foreColor(7);cout << "INVOICE DETAILS  ";
				gotoxy(130, 23);foreColor(7);cout << "DATE : ";		 
				gotoxy(80, 21);foreColor(7);cout << "BILL TO ";
				gotoxy(80, 23);foreColor(7);cout << "NAME : ";
				SYSTEMTIME currentTime;
				GetLocalTime(&currentTime);
				foreColor(7);
			gotoxy(138,23);cout << currentTime.wDay << "/" << currentTime.wMonth << "/"   << currentTime.wYear;
				
				
				for(int i = 0 ; i < 122 ; i+=3){
					HLine(25,24,i,9,223);
					HLine(25,26,i,9,223);
				}
				
				
				//
				foreColor(6);gotoxy(27,25);cout<< left << setw(15)<<"ID"<< setw(20)<<"NAME" << setw(18)<<"GENDER"  << setw(18)<<"ADDRESS"<< setw(18)<<"PHONE"<< setw(18)<<"DURATION"<< "TOTAL"<<endl;                                  
		foreColor(9);
			gotoxy(27,14);cout << "    _      _      _   \n";
			gotoxy(27,15);cout << " __/\\\\  __/\\\\  __/\\\\  \n";
			gotoxy(27,16);cout << "/_  :\\\\/_  :\\\\/_  :\\\\ \n";
			gotoxy(27,17);cout << "\\__ '//\\__ '//\\__ '// \n";
			gotoxy(27,18);cout << "   \\//    \\//    \\//  \n";
			
			
			gotoxy(120, 14);cout << "  _      _      _     \n";
			gotoxy(120, 15);cout << " //\\__  //\\__  //\\__  \n";
			gotoxy(120, 16);cout << "//.  _\\//.  _\\//.  _\\ \n";
			gotoxy(120, 17);cout << "\\\\: __/\\\\: __/\\\\: __/ \n";
			gotoxy(120, 18);cout << " \\\\/    \\\\/    \\\\/    \n";
			setcursor(1,10);

}
		static void member(){

			gotoxy(50,2);foreColor(2);cout<<" __       __  ________  __       __  _______   ________  _______"<<endl;  
			gotoxy(50,3);foreColor(3);cout<<"/  \\     /  |/        |/  \\     /  |/       \\ /        |/       \\ "<<endl;
			gotoxy(50,4);foreColor(4);cout<<"$$  \\   /$$ |$$$$$$$$/ $$  \\   /$$ |$$$$$$$  |$$$$$$$$/ $$$$$$$  |"<<endl;
			gotoxy(50,5);foreColor(5);cout<<"$$$  \\ /$$$ |$$ |__    $$$  \\ /$$$ |$$ |__$$ |$$ |__    $$ |__$$ |"<<endl;
			gotoxy(50,6);foreColor(6);cout<<"$$$$  /$$$$ |$$    |   $$$$  /$$$$ |$$    $$< $$    |   $$    $$< "<<endl;
			gotoxy(50,7);foreColor(1);cout<<"$$ $$ $$/$$ |$$$$$/    $$ $$ $$/$$ |$$$$$$$  |$$$$$/    $$$$$$$  |"<<endl;
			gotoxy(50,8);foreColor(2);cout<<"$$ |$$$/ $$ |$$ |_____ $$ |$$$/ $$ |$$ |__$$ |$$ |_____ $$ |  $$ |"<<endl;
			gotoxy(50,9);foreColor(3);cout<<"$$ | $/  $$ |$$       |$$ | $/  $$ |$$    $$/ $$       |$$ |  $$ |"<<endl;
			gotoxy(50,10);foreColor(5);cout<<"$$/      $$/ $$$$$$$$/ $$/      $$/ $$$$$$$/  $$$$$$$$/ $$/   $$/ "<<endl;
			HLine(38,20,16,2,219);
			HLine(39,21,14,7,219);
			HLine(40,22,12,6,219);

			HLine(38,35,16,2,219);
			HLine(39,34,14,7,219);  
			HLine(40,33,12,6,219); 

			HLine(110,20,16,2,219);
			HLine(111,21,14,7,219);
			HLine(112,22,12,6,219);

			HLine(110,35,16,2,219);
			HLine(111,34,14,7,219); 
			HLine(112,33,12,6,219);   

			HLine(35,16,25,1,219);
			HLine(105,16,25,1,219);  

			VLine(46,24,6,3,219);
			VLine(47,24,6,3,219); 
			VLine(118,24,6,3,219);
			VLine(119,24,6,3,219);	
		}
			
    	static void customConsole(int width, int height);      
        static void staffInfo(){
            foreColor(3); gotoxy(37, 3); cout<<" ___  ___  ___  ___  ___   _  _ _  ___  ___  ___  __ __  ___  ___  _  ___  _ _ ";
            foreColor(4); gotoxy(37, 4); cout<<"/ __>|_ _|| . || __>| __> | || \\ || __>| . || . \\|  \\  \\| . ||_ _|| || . || \\ |";
            foreColor(5); gotoxy(37, 5); cout<<"\\__ \\ | | |   || _> | _>  | ||   || _> | | ||   /|     ||   | | | | || | ||   |";
            foreColor(6); gotoxy(37, 6); cout<<"<___/ |_| |_|_||_|  |_|   |_||_\\_||_|  `___'|_\\_\\|_|_|_||_|_| |_| |_|`___'|_\\_|";
        }
        static void addStaff(){                
            foreColor(3); gotoxy(45, 3); cout<<" _______ _____  _____       _______ _______ _______ _______ _______ ";
            foreColor(4); gotoxy(45, 4); cout<<"|   _   |     \\|     \\     |     __|_     _|   _   |    ___|    ___|";
            foreColor(5); gotoxy(45, 5); cout<<"|       |  --  |  --  |    |__     | |   | |       |    ___|    ___|";
            foreColor(6); gotoxy(45, 6); cout<<"|___|___|_____/|_____/     |_______| |___| |___|___|___|   |___|    ";
        }
		
		static void loginmore(){
			foreColor(4);gotoxy(46,2);cout<<"	/$$        /$$$$$$   /$$$$$$  /$$$$$$ /$$   /$$ "<<endl;
			foreColor(2);gotoxy(46,3);cout<<"	| $$       /$$__  $$ /$$__  $$|_  $$_/| $$$ | $$ "<<endl;
			foreColor(2);gotoxy(46,4);cout<<"	| $$      | $$  \\ $$| $$  \\__/  | $$  | $$$$| $$ "<<endl;
			foreColor(4);gotoxy(46,5);cout<<"	| $$      | $$  | $$| $$ /$$$$  | $$  | $$ $$ $$ "<<endl;
			foreColor(4);gotoxy(46,6);cout<<"	| $$      | $$  | $$| $$|_  $$  | $$  | $$  $$$$ "<<endl;
			foreColor(2);gotoxy(46,7);cout<<"	| $$      | $$  | $$| $$  \\ $$  | $$  | $$\\  $$$ "<<endl;
			foreColor(2);gotoxy(46,8);cout<<"	| $$$$$$$$|  $$$$$$/|  $$$$$$/ /$$$$$$| $$ \\  $$ "<<endl;
			foreColor(4);gotoxy(46,9);cout<<"	|________/ \\______/  \\______/ |______/|__/  \\__/ "<<endl;
			
				DrawRectangle(49,20,50,7,219);
			
			foreColor(2);gotoxy(14,13);cout<<"/$$$$$$$$"<<endl;
			foreColor(1);gotoxy(14,14);cout<<"| $$_____/"<<endl;
			foreColor(3);gotoxy(14,15);cout<<"| $$ "<<endl;     
			foreColor(4);gotoxy(14,16);cout<<"| $$$$$"<<endl;   
			foreColor(5);gotoxy(14,17);cout<<"| $$__/"<<endl;   
			foreColor(6);gotoxy(14,18);cout<<"| $$"<<endl;      
			foreColor(2);gotoxy(14,19);cout<<"| $$"<<endl;      
			foreColor(1);gotoxy(14,20);cout<<"|__/ "<<endl; 
			
			foreColor(2);gotoxy(14,23);cout<<"  /$$$$$$"<<endl;
			foreColor(4);gotoxy(14,24);cout<<"  /$$__  $$"<<endl;
			foreColor(3);gotoxy(14,25);cout<<" | $$  \\ $$"<<endl;
			foreColor(1);gotoxy(14,26);cout<<" | $$  | $$"<<endl;
			foreColor(6);gotoxy(14,27);cout<<" | $$  | $$"<<endl;
			foreColor(5);gotoxy(14,28);cout<<" | $$  | $$"<<endl;
			foreColor(2);gotoxy(14,29);cout<<" |  $$$$$$/"<<endl;
			foreColor(1);gotoxy(14,30);cout<<"  \\______/"<<endl; 
			
			foreColor(3);gotoxy(126,13);cout<<"  /$$$$$$$"<<endl; 
			foreColor(4);gotoxy(126,14);cout<<"| $$__  $$"<<endl; 
			foreColor(3);gotoxy(126,15);cout<<"| $$  \\ $$"<<endl; 
			foreColor(1);gotoxy(126,16);cout<<"| $$$$$$$/"<<endl; 
			foreColor(6);gotoxy(126,17);cout<<"| $$__  $$"<<endl; 
			foreColor(5);gotoxy(126,18);cout<<"| $$  \\ $$"<<endl; 
			foreColor(1);gotoxy(126,19);cout<<"| $$  | $$"<<endl; 
			foreColor(4);gotoxy(126,20);cout<<"|__/  |__/"<<endl; 
			
			foreColor(1);gotoxy(126,23); cout<<"/$$      /$$"<<endl;
			foreColor(2);gotoxy(126,24);cout<<"| $$$    /$$$"<<endl;
			foreColor(3);gotoxy(126,25); cout<<"| $$$$  /$$$$"<<endl;
			foreColor(4);gotoxy(126,26);cout<<"| $$ $$/$$ $$"<<endl;
			foreColor(5);gotoxy(126,27);cout<<"| $$  $$$| $$"<<endl;
			foreColor(6);gotoxy(126,28);cout<<"| $$\\  $ | $$"<<endl;
			foreColor(2);gotoxy(126,29);cout<<"| $$ \\/  | $$"<<endl;
			foreColor(1);gotoxy(126,30);cout<<"|__/     |__/"<<endl;
											
		}
		
		static void title(){
		foreColor(5); gotoxy(33,2); cout << "   _______     ____  __    __  __          _   _          _____ ______ __  __ ______ _   _ _______ " << endl;
		foreColor(6); gotoxy(33,3); cout << "  / ____\\ \\   / /  \\/  |  |  \\/  |   /\\   | \\ | |   /\\   / ____|  ____|  \\/  |  ____| \\ | |__   __|" << endl;
		foreColor(6); gotoxy(33,4); cout << " | |  __ \\ \\_/ /| \\  / |  | \\  / |  /  \\  |  \\| |  /  \\ | |  __| |__  | \\  / | |__  |  \\| |  | |   " << endl;
		foreColor(5); gotoxy(33,5); cout << " | | |_ | \\   / | |\\/| |  | |\\/| | / /\\ \\ | . ` | / /\\ \\| | |_ |  __| | |\\/| |  __| | . ` |  | |   " << endl;
		foreColor(5); gotoxy(33,6); cout << " | |__| |  | |  | |  | |  | |  | |/ ____ \\| |\\  |/ ____ \\ |__| | |____| |  | | |____| |\\  |  | |   " << endl;
		foreColor(6); gotoxy(33,7); cout << "  \\_____|  |_|  |_|  |_|  |_|  |_/_/    \\_\\_| \\_/_/    \\_\\_____|______|_|  |_|______|_| \\_|  |_|   " << endl;

			 
		}

		static void picgym(){
			DrawRectangle(6,0,156,35,219);
			drawBoxDoubleLineWithBG(52,13,4,13,5);
			drawBoxDoubleLineWithBG(108,13,4,13,5);
			drawBoxDoubleLineWithBG(49,16,4,17,5);
			drawBoxDoubleLineWithBG(111,16,4,17,5);
			DrawRectangle(57,10,50,21,219);

			DrawRectangle(51,16,2,1,219);
			DrawRectangle(51,22,2,1,219);
			DrawRectangle(111,16,2,1,219);
			DrawRectangle(111,22,2,1,219);
		
			foreColor(5);gotoxy(15,12);cout<<" _______  _"<<endl;       
			foreColor(2);gotoxy(15,13);cout<<"(  ___  )( (    /|"<<endl; 
			foreColor(3);gotoxy(15,14);cout<<"| (   ) ||  \\  ( |"<<endl; 
			foreColor(1);gotoxy(15,15);cout<<"| (___) ||   \\ | |"<<endl; 
			foreColor(4);gotoxy(15,16);cout<<"|  ___  || (\\ \\) |"<<endl; 
			foreColor(6);gotoxy(15,17);cout<<"| (   ) || | \\   |"<<endl; 
			foreColor(1);gotoxy(15,18);cout<<"| )   ( || )  \\  |"<<endl; 
			foreColor(2);gotoxy(15,19);cout<<"|/     \\||/    )_)"<<endl;
			
			foreColor(1);gotoxy(21,21);cout<<"_________ "<<endl;
			foreColor(2);gotoxy(21,22);cout<<"\\__   __/"<<endl;
			foreColor(3);gotoxy(21,23);cout<<"   ) (   "<<endl;
			foreColor(4);gotoxy(21,24);cout<<"   | |   "<<endl;
			foreColor(5);gotoxy(21,25);cout<<"   | |   "<<endl;
			foreColor(6);gotoxy(21,26);cout<<"   | |   "<<endl;
			foreColor(1);gotoxy(21,27);cout<<"   | |   "<<endl;
			foreColor(2);gotoxy(21,28);cout<<"   )_(   "<<endl;

			foreColor(5);gotoxy(129,12);cout<<" _______ "<<endl;         
			foreColor(4);gotoxy(129,13);cout<<"(  ____ \\|\\     /|"<<endl; 
			foreColor(3);gotoxy(129,14);cout<<"| (    \\/( \\   / )"<<endl; 
			foreColor(2);gotoxy(129,15);cout<<"| |       \\ (_) / "<<endl; 
			foreColor(1);gotoxy(129,16);cout<<"| | ____   \\   /  "<<endl;
			foreColor(6);gotoxy(129,17);cout<<"| | \\_  )   ) (   "<<endl; 
			foreColor(4);gotoxy(129,18);cout<<"| (___) |   | |   "<<endl; 
			foreColor(2);gotoxy(129,19);cout<<"(_______)   \\_/   "<<endl; 
			
			foreColor(1);gotoxy(135,21);cout<<" _______ "<<endl;
			foreColor(2);gotoxy(135,22);cout<<"(       )"<<endl;
			foreColor(3);gotoxy(135,23);cout<<"| () () |"<<endl;
			foreColor(4);gotoxy(135,24);cout<<"| || || |"<<endl;
			foreColor(5);gotoxy(135,25);cout<<"| |(_)| |"<<endl;
			foreColor(2);gotoxy(135,26);cout<<"| |   | |"<<endl;
			foreColor(1);gotoxy(135,27);cout<<"| )   ( |"<<endl;
			foreColor(3);gotoxy(135,28);cout<<"|/     \\|"<<endl;
		}

		static void add_trainer(){
			foreColor(1); gotoxy(28, 2); cout << " (`-')  _ _(`-')    _(`-')       (`-')        (`-')  (`-')  _   _     <-. (`-')_  (`-')  _   (`-')  \n";
			foreColor(2); gotoxy(28, 3); cout << " (OO ).-/( (OO ).->( (OO ).->    ( OO).->  <-.(OO )  (OO ).-/  (_)       \\( OO) ) ( OO).-/<-.(OO )  \n";
			foreColor(3); gotoxy(28, 4); cout << " / ,---.  \\    .'_  \\    .'_     /    '._  ,------,) / ,---.   ,-(`-'),--./ ,--/ (,------.,------,) \n";
			foreColor(2); gotoxy(28, 5); cout << " | \\ /`.\\ '`'-..__) '`'-..__)    |'--...__)|   /`. ' | \\ /`.\\  | ( OO)|   \\ |  |  |  .---'|   /`. ' \n";
			foreColor(1); gotoxy(28, 6); cout << " '-'|_.' ||  |  ' | |  |  ' |    `--.  .--'|  |_.' | '-'|_.' | |  |  )|  . '|  |)(|  '--. |  |_.' | \n";
			foreColor(3); gotoxy(28, 7); cout << "(|  .-.  ||  |  / : |  |  / :       |  |   |  .   .'(|  .-.  |(|  |_/ |  |\\    |  |  .--' |  .   .' \n";
			foreColor(5); gotoxy(28, 8); cout << " |  | |  ||  '-'  / |  '-'  /       |  |   |  |\\  \\  |  | |  | |  |'->|  | \\   |  |  `---.|  |\\  \\  \n";
			foreColor(6); gotoxy(28, 9); cout << " `--' `--'`------'  `------'        `--'   `--' '--' `--' `--' `--'   `--'  `--'  `------'`--' '--' \n";
		}
		
		static void display_trainer(){
			foreColor(1); gotoxy(28, 2); cout << " _____  __    _     _____    __  __  __    _____    __  ___  ___  __            _   __________  ___    __ \n";
			foreColor(2); gotoxy(28, 3); cout << "/__   \\/__\\  /_\\    \\_   \\/\\ \\ \\/__\\/__\\   \\_   \\/\\ \\ \\/ __\\/___\\/__\\  /\\/\\    /_\\ /__   \\_   \\/___\\/\\ \\ \\\n";
			foreColor(3); gotoxy(28, 4); cout << "  / /\\/ \\// //_\\\\    / /\\/  \\/ /_\\ / \\//    / /\\/  \\/ / _\\ //  // \\// /    \\  //_\\\\  / /\\// /\\//  //  \\/ /\n";
			foreColor(4); gotoxy(28, 5); cout << " / / / _  \\/  _  \\/\\/ /_/ /\\  //__/ _  \\ /\\/ /_/ /\\  / /  / \\_// _  \\/ /\\/\\ \\/  _  \\/ //\\/ /_/ \\_// /\\  / \n";
			foreColor(5); gotoxy(28, 6); cout << " \\/  \\/ \\_/\\_/ \\_/\\____/\\_\\ \\/\\__/\\/ \\_/ \\____/\\_\\ \\/\\/   \\___/\\/ \\_/\\/    \\/\\_/ \\_/\\/ \\____/\\___/\\_\\ \\/  \n";
			foreColor(6); gotoxy(28, 7); cout << "                                                                                                          \n";
		}

		static void update_trainer(){
			foreColor(1); gotoxy(45, 3); cout << "  __  _____  ___  ___ __________  _________  ___   _____  _________ \n";
			foreColor(2); gotoxy(45, 4); cout << " / / / / _ \\/ _ \\/ _ /_  __/ __/ /_  __/ _ \\/ _ | /  _/ |/ / __/ _ \\\n";
			foreColor(3); gotoxy(45, 5); cout << "/ /_/ / ___/ // / __ |/ / / _/    / / / , _/ __ |_/ //    / _// , _/\n";
			foreColor(4); gotoxy(45, 6); cout << "\\____/_/  /____/_/ |_/_/ /___/   /_/ /_/|_/_/ |_/___/_/|_/___/_/|_| \n";
			foreColor(5); gotoxy(45, 7); cout << "                                                                    \n";
		}

		static void update_member(){
			foreColor(6); gotoxy(25, 2);	 cout << " __   __  _______  ______   _______  _______  _______    __   __  _______  __   __  _______  _______  ______   \n";
			foreColor(5); gotoxy(25, 3); cout << "|  | |  ||       ||      | |   _   ||       ||       |  |  |_|  ||       ||  |_|  ||  _    ||       ||    _ |  \n";
			foreColor(4); gotoxy(25, 4); cout << "|  | |  ||    _  ||  _    ||  |_|  ||_     _||    ___|  |       ||    ___||       || |_|   ||    ___||   | ||  \n";
			foreColor(3); gotoxy(25, 5); cout << "|  |_|  ||   |_| || | |   ||       |  |   |  |   |___   |       ||   |___ |       ||       ||   |___ |   |_||_ \n";
			foreColor(2); gotoxy(25, 6); cout << "|       ||    ___|| |_|   ||       |  |   |  |    ___|  |       ||    ___||       ||  _   | |    ___||    __  |\n";
			foreColor(1); gotoxy(25, 7); cout << "|       ||   |    |       ||   _   |  |   |  |   |___   | ||_|| ||   |___ | ||_|| || |_|   ||   |___ |   |  | |\n";
			foreColor(9); gotoxy(25, 8); cout << "|_______||___|    |______| |__| |__|  |___|  |_______|  |_|   |_||_______||_|   |_||_______||_______||___|  |_|\n";
		}
		
		static void inputESC(){
				HLine(41, 33,76, 7, 219);
				gotoxy(45,34);foreColor(9);cout<< "<> [ESC] BACK MENU  <> " <<endl; 
				HLine(41, 35,76, 7, 219);
			//
//			HLine(76, 35,39, 5, 219);
//			HLine(76, 33,39, 5, 219);
			
				gotoxy(89,34);foreColor(6);cout<< "<> [ENTER] INSERT MORE <> " <<endl; 
		
		}
		static void add_member(){
			foreColor(1); gotoxy(37, 2); cout << "    _      ____     ____         __  __  U _____ u  __  __     ____  U _____ u   ____    " << endl;
			foreColor(2); gotoxy(37, 3); cout << "U  /\"\\  u |  _\"\\   |  _\"\\      U|' \\/ '|u\\| ___\"|/U|' \\/ '|uU | __\")u\\| ___\"|/U |  _\"\\ u  " << endl;
			foreColor(3); gotoxy(37, 4); cout << " \\/ _ \\/ /| | | | /| | | |     \\| |\\/| |/ |  _|\"  \\| |\\/| |/ \\|  _ \\/ |  _|\"   \\| |_) |/  " << endl;
			foreColor(4); gotoxy(37, 5); cout << " / ___ \\ U| |_| |\\U| |_| |\\     | |  | |  | |___   | |  | |   | |_) | | |___    |  _ <    " << endl;
			foreColor(5); gotoxy(37, 6); cout << "/_/   \\_\\ |____/ u |____/ u     |_|  |_|  |_____|  |_|  |_|   |____/  |_____|   |_| \\_\\   " << endl;
			foreColor(6); gotoxy(37, 7); cout << " \\\\    >>  |||_     |||_       <<,-,,-.   <<   >> <<,-,,-.   _|| \\\\_  <<   >>   //   \\\\_  " << endl;
			foreColor(7); gotoxy(37, 8); cout << "(__)  (__)(__)_)   (__)_)       (./  \\.) (__) (__) (./  \\.) (__) (__)(__) (__) (__)  (__) " << endl;
		}

		static void display_member(){
			foreColor(1); gotoxy(55, 2); cout<<",--.   ,--.,------.,--.   ,--.,-----.  ,------.,------.  ";
			foreColor(2); gotoxy(55, 3); cout<<"|   `.'   ||  .---'|   `.'   ||  |) /_ |  .---'|  .--. ' ";
			foreColor(3); gotoxy(55, 4); cout<<"|  |'.'|  ||  `--, |  |'.'|  ||  .-.  \\|  `--, |  '--'.' ";
			foreColor(4); gotoxy(55, 5); cout<<"|  |   |  ||  `---.|  |   |  ||  '--' /|  `---.|  |\\  \\  ";
			foreColor(5); gotoxy(55, 6); cout<<"`--'   `--'`------'`--'   `--'`------' `------'`--' '--' ";
		}

		static void header_update(){
			foreColor(1); gotoxy(45, 3); cout<<".-. .-..----. .----.   .--.  .---. .----.    .----..---.  .--.  .----..----.";
			foreColor(1); gotoxy(45, 4); cout<<"| { 		} || {}  }| {}  \\ / {} \\{_   _}| {_     { {__ {_   _}/ {} \\ | {_  | {_  ";
			foreColor(1); gotoxy(45, 5); cout<<"| {_} || .--' |     //  /\\  \\ | |  | {__    .-._} } | | /  /\\  \\| |   | |   ";
			foreColor(1); gotoxy(45, 6); cout<<"`-----'`-'    `----' `-'  `-' `-'  `----'   `----'  `-' `-'  `-'`-'   `-'   ";
		}
		
		static void staff(){

			gotoxy(60,1);foreColor(2);cout << "                                _.._     _.._  \n";
			gotoxy(60,2);foreColor(3);cout << "              .|              .' .._|  .' .._| \n";
			gotoxy(60,3);foreColor(4);cout << "            .' |_     __      | '      | '     \n";
			gotoxy(60,4);foreColor(5);cout << "       _  .'     | .:--.'.  __| |__  __| |__   \n";
			gotoxy(60,5);foreColor(6);cout << "     .' |'--.  .-'/ |   \\ ||__   __||__   __|  \n";
			gotoxy(60,6);foreColor(1);cout << "    .   | / |  |  `\" __ | |   | |      | |     \n";
			gotoxy(60,7);foreColor(2);cout << "  .'.'| |// |  |   .'.''| |   | |      | |     \n";
			gotoxy(60,8);foreColor(3);cout << ".' .'-'  /  |  '.'/ /   | |_  | |      | |     \n";
			gotoxy(60,9);foreColor(4);cout << ".'   \\_.'   |   / \\ \\._,\\ '/  | |      | |     \n";
			gotoxy(60,10);foreColor(5);cout << "            `'-'   `--'  `\"   |_|      |_|     \n";

			HLine(38,20,16,2,219);
			HLine(39,21,14,7,219);
			HLine(40,22,12,6,219);

			HLine(38,35,16,2,219);
			HLine(39,34,14,7,219);  
			HLine(40,33,12,6,219); 

			HLine(110,20,16,2,219);
			HLine(111,21,14,7,219);
			HLine(112,22,12,6,219);

			HLine(110,35,16,2,219);
			HLine(111,34,14,7,219); 
			HLine(112,33,12,6,219);   

			HLine(35,16,25,1,219);
			HLine(105,16,25,1,219);  

			VLine(46,24,6,3,219);
			VLine(47,24,6,3,219); 
			VLine(118,24,6,3,219);
			VLine(119,24,6,3,219);	

		}

		static void trainer(){

			gotoxy(50,2);foreColor(2);cout << "_________ _______  _______ _________ _        _______  _______ " << endl;
			gotoxy(50,3);foreColor(3);cout << "\\__   __/(  ____ )(  ___  )\\__   __/( (    /|(  ____ \\(  ____ )" << endl;
			gotoxy(50,4);foreColor(4);cout << "   ) (   | (    )|| (   ) |   ) (   |  \\  ( || (    \\/| (    )|" << endl;
			gotoxy(50,5);foreColor(5);cout << "   | |   | (____)|| (___) |   | |   |   \\ | || (__    | (____)|" << endl;
			gotoxy(50,6);foreColor(6);cout << "   | |   |     __)|  ___  |   | |   | (\\ \\) ||  __)   |     __)" << endl;
			gotoxy(50,7);foreColor(1);cout << "   | |   | (\\ (   | (   ) |   | |   | | \\   || (      | (\\ (   " << endl;
			gotoxy(50,8);foreColor(2);cout << "   | |   | ) \\ \\__| )   ( |___) (___| )  \\  || (____/\\| ) \\ \\__" << endl;
			gotoxy(50,9);foreColor(3);cout << "   )_(   |/   \\__/|/     \\|\\_______/|/    )_)(_______/|/   \\__/" << endl;

			HLine(38,20,16,2,219);
			HLine(39,21,14,7,219);
			HLine(40,22,12,6,219);

			HLine(38,35,16,2,219);
			HLine(39,34,14,7,219);  
			HLine(40,33,12,6,219); 

			HLine(110,20,16,2,219);
			HLine(111,21,14,7,219);
			HLine(112,22,12,6,219);

			HLine(110,35,16,2,219);
			HLine(111,34,14,7,219); 
			HLine(112,33,12,6,219);   

			HLine(35,16,25,1,219);
			HLine(105,16,25,1,219);  

			VLine(46,24,6,3,219);
			VLine(47,24,6,3,219); 
			VLine(118,24,6,3,219);
			VLine(119,24,6,3,219);	

		}

};


      
	
 	void Design::customConsole(int width, int height) {
		    // Get the console window handle
		    HWND hWnd = GetConsoleWindow();
		    
		    // Disable the maximize and resize options
		    SetWindowLong(hWnd, GWL_STYLE, GetWindowLong(hWnd, GWL_STYLE) & ~WS_MAXIMIZEBOX & ~WS_SIZEBOX);
		    
		    // Set the console title
		    SetConsoleTitleA("MEAN PHEAKDEY'S MOVIES THEATER MANAGEMENT SYSTEM");
		
		    // Set the console screen buffer size
		    CONSOLE_SCREEN_BUFFER_INFO csbi;
		    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
		    COORD newSize;
		    newSize.X = width;  // Width of the console
		    newSize.Y = height;   // Height of the console
		    SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE), newSize);
		
		    // Set the console window size to match the buffer size
		    SMALL_RECT rect;
		    rect.Top = 0;
		    rect.Left = 0;
		    rect.Right = newSize.X - 1;
		    rect.Bottom = newSize.Y - 1;
		    SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), TRUE, &rect);
		}
		



#endif