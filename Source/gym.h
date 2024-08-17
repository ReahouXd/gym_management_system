#ifndef __SOURCE_H__
#define __SOURCE_H__
#include "antheaderPlusPlus.h"
#include"antheaderInput.h"
// #include"MenuControll.h"
#include"design.h"
using namespace std;

int y = 12;
int MorYSt;

class Staff{
	protected :
		int idS = 999;
		char gender [10];
		char name [25] , address [25] , phone[25] , position [25];
		float age, salary ; 
    
    public:
		void setID(int idS){
			this -> idS = idS;
		}
		int getID(){
			return idS;
		}
		void Input(){
				for(int i = 20; i<24; i++){
		                for(int j = 10 ; j <35 ; j++){
		                    gotoxy(i-2,j);
		                    foreColor(6);
		                    cout << char(219);
		                    
		                    gotoxy(i+120,j);
		                    foreColor(6);
		                    cout << char(219);
		                
		                }
		            }  
			
				for(int i = 18; i<40; i++){
		                for(int j = 10 ; j <12 ; j++){
		                    gotoxy(i,j);
		                    foreColor(6);
		                    cout << char(219);
		                    
		                    gotoxy(i,j+23);
		                    foreColor(6);
		                    cout << char(219);
		                    
		                    
		                     gotoxy(i+100,j);
		                    foreColor(6);
		                    cout << char(219);
		                    
		                    gotoxy(i+100,j+23);
		                    foreColor(6);
		                    cout << char(219);
		     	 }
			  }
			
			
			//
					for(int i = 25; i<75; i++){
		                for(int j = 13 ; j <32 ; j++){
		                    gotoxy(i,j);
		                    foreColor(9);
		                    cout << char(219);
		                    
		                    gotoxy(i+62,j);
		                    foreColor(9);
		                    cout << char(219);
		                }
		            }  
		            
		            for(int i = 26; i<76; i++){
		                for(int j = 15 ; j <18 ; j++){
		                    gotoxy(i,j);
		                    foreColor(7);
		                    cout << char(219);
		                    
		                    
		                    gotoxy(i,j+4);
		                    foreColor(7);
		                    cout << char(219);
		                    
		                    gotoxy(i,j+8);
		                    foreColor(7);
		                    cout << char(219);
		                    
		                     gotoxy(i,j+12);
		                    foreColor(7);
		                    cout << char(219);
//		                    
		                    
		                    ////
		                    
		                    gotoxy(i+60,j);
		                    foreColor(7);
		                    cout << char(219);
		                    
		                     gotoxy(i+60,j+4);
		                    foreColor(7);
		                    cout << char(219);
		                    
		                     gotoxy(i+60,j+8);
		                    foreColor(7);
		                    cout << char(219);
		                    
		                     gotoxy(i+60,j+12);
		                    foreColor(7);
		                    cout << char(219);
		        }
		}
		
		//

        foreColor(249);
			gotoxy(30, 16); cout<< "ID       : "; 
		    gotoxy(30, 20); cout<< "NAME     : ";
		    gotoxy(30, 24); cout<< "GENDER   : ";
			gotoxy(30, 28); cout<< "AGE      : ";
		    gotoxy(92, 16); cout<< "POSITION : ";
		    gotoxy(92, 20); cout<< "SALARY   :";
			gotoxy(92, 24); cout<< "PHONE    : ";
		    gotoxy(92, 28); cout<< "ADDRESS  : ";
            fflush(stdin); cin.clear();      
         
            foreColor(249);
            gotoxy(42, 16); cout<<idS; fflush(stdin);cin.clear();
			gotoxy(42, 20);
			while(true)
			{
			inputLetter(name);
			if(!strcmp(name, "\0"))
			{
				continue;
			}
			else
			{
				break;
			}
			}
			fflush(stdin); cin.clear();	
			gotoxy(42, 24);
			while(true)
			{
				inputLetter(gender);
				if(!strcmp(gender, "\0"))
				{
					continue;
				}
				else
				{
					break;
				}
			}
			fflush(stdin); cin.clear();

			while(1) {
				gotoxy(42, 28); 
				cout << "     ";  
				gotoxy(42, 28);

				gotoxy(42, 28); age = inputFloat();

				if(age < 15 || age > 60) {
					MessageBox(NULL, "Age must be between 15 and 60", "Input Error", MB_OK | MB_ICONINFORMATION);
				} else {
					break; 
				}

				fflush(stdin); 
				cin.clear(); 

				gotoxy(42, 28); 
				cout << "     "; 
			}


			gotoxy(105, 16);
			while(true)
			{
				inputLetter(position);
				if(!strcmp(position, "\0"))
				{
					continue;
				}
				else
				{
					break;
				}
			}
			fflush(stdin); cin.clear();
			gotoxy(105, 20);
			salary = inputFloat();

			gotoxy(105, 24);
			while(true)
			{
				input4Tel(phone);
				if(!strcmp(phone, "\0"))
				{
					continue;
				}
				else
				{
					break;
				}
			}
			fflush(stdin); cin.clear();
			gotoxy(105, 28); 
			while(true)
			{
				inputLetter(address);
				if(!strcmp(address, "\0"))
				{
					continue;
				}
				else
				{
					break;
				}
			}

		}
		
		void Display(int y){	 
			// drawBoxSingleLine(15, y, 130, 1, 5); 
			for(int i = 15; i<155; i++){
                for(int j = y ; j <y+3 ; j++){
                    gotoxy(i,j);
                    foreColor(10);
                    cout << char(219);
                }
            }
			
			foreColor(167); gotoxy(19, y + 1); cout<<left<<setw(10)<<idS<<setw(20)<<name<<setw(15)<<gender<<setw(10)<<age<<setw(25)<<position<<setw(15)<<salary<<setw(20)<<phone<<setw(15)<<address<<endl<<endl;
		}
		
		void Header(int y){
			// DrawRectangle(15, y - 1, 130, 1, 2);
			for(int i = 15; i<155; i++){
                for(int j = y-1 ; j <y+2 ; j++){
                    gotoxy(i,j);
                    foreColor(9);
                    cout << char(219);
                }
            }
			foreColor(151);
			gotoxy(19, y); cout<<left<<setw(10)<<"ID"<<setw(20)<<"Name"<<setw(15)<<"Gender"<<setw(10)<<"age"<<setw(25)<<"Position"<<setw(15)<<"Salary($)"<<setw(20)<<"Phone Number"<<setw(15)<<"Address";
		}
		
		double getSalary(){
			return salary; 
		}
	
    
};

class Trainer: public Staff {
	protected :
		char specialty [25];
		int idT = 3000;
	public :
		void InsertTrainer(){
		
			for(int i = 20; i<24; i++){
		                for(int j = 10 ; j <35 ; j++){
		                    gotoxy(i-2,j);
		                    foreColor(6);
		                    cout << char(219);
		                    
		                    gotoxy(i+120,j);
		                    foreColor(6);
		                    cout << char(219);
		                
		                }
		            }  
			
				for(int i = 18; i<40; i++){
		                for(int j = 10 ; j <12 ; j++){
		                    gotoxy(i,j);
		                    foreColor(6);
		                    cout << char(219);
		                    
		                    gotoxy(i,j+23);
		                    foreColor(6);
		                    cout << char(219);
		                    
		                    
		                     gotoxy(i+100,j);
		                    foreColor(6);
		                    cout << char(219);
		                    
		                    gotoxy(i+100,j+23);
		                    foreColor(6);
		                    cout << char(219);
		     	 }
			  }
			
			
			//
					for(int i = 25; i<75; i++){
		                for(int j = 13 ; j <32 ; j++){
		                    gotoxy(i,j);
		                    foreColor(9);
		                    cout << char(219);
		                    
		                    gotoxy(i+62,j);
		                    foreColor(9);
		                    cout << char(219);
		                }
		            }  
		            
		            for(int i = 26; i<76; i++){
		                for(int j = 15 ; j <18 ; j++){
		                    gotoxy(i,j);
		                    foreColor(7);
		                    cout << char(219);
		                    
		                    
		                    gotoxy(i,j+4);
		                    foreColor(7);
		                    cout << char(219);
		                    
		                    gotoxy(i,j+8);
		                    foreColor(7);
		                    cout << char(219);
		                    
		                     gotoxy(i,j+12);
		                    foreColor(7);
		                    cout << char(219);
//		                    
		                    
		                    ////
		                    
		                    gotoxy(i+60,j);
		                    foreColor(7);
		                    cout << char(219);
		                    
		                     gotoxy(i+60,j+4);
		                    foreColor(7);
		                    cout << char(219);
		                    
		                     gotoxy(i+60,j+8);
		                    foreColor(7);
		                    cout << char(219);
		                    
		                     gotoxy(i+60,j+12);
		                    foreColor(7);
		                    cout << char(219);
		        }
		}
			
			foreColor(249);
			gotoxy(30, 16); cout<< "ID        : "; 
		    gotoxy(30, 20); cout<< "NAME      : ";
		    gotoxy(30, 24); cout<< "GENDER    : ";
		    gotoxy(30, 28); cout<< "AGE       : ";
		    gotoxy(92, 16); cout<< "SPECIALTY : ";
		    gotoxy(92, 20); cout<< "SALARY    : ";
			gotoxy(92, 24); cout<< "PHONE     : ";
		    gotoxy(92, 28); cout<< "ADDRESS   : ";
            fflush(stdin); cin.clear();                
			foreColor(249);
            gotoxy(42, 16); cout<<idT; fflush(stdin);cin.clear();
			gotoxy(42, 20);
//            
			while(true)
			{
			inputLetter(name);
			if(!strcmp(name, "\0"))
			{
				continue;
			}
			else
			{
				break;
			}
			}
			fflush(stdin); cin.clear();	
			gotoxy(42, 24);
			while(true)
			{
				inputLetter(gender);
				if(!strcmp(gender, "\0"))
				{
					continue;
				}
				else
				{
					break;
				}
			}
			fflush(stdin); cin.clear();
			// gotoxy(42, 28);
			// age = inputFloat();

			while(1) {
				gotoxy(42, 28); 
				cout << "     ";  
				gotoxy(42, 28);

				gotoxy(42, 28); age = inputFloat();

				if(age < 15 || age > 60) {
					MessageBox(NULL, "Age must be between 15 and 60", "Input Error", MB_OK | MB_ICONINFORMATION);
				} else {
					break; 
				}

				fflush(stdin); 
				cin.clear(); 

				gotoxy(42, 28); 
				cout << "     "; 
			}
			fflush(stdin); cin.clear();

			gotoxy(105, 16);
			while(true)
			{
				inputLetter(specialty);
				if(!strcmp(specialty, "\0"))
				{
					continue;
				}
				else
				{
					break;
				}
			}
			fflush(stdin); cin.clear();

			gotoxy(105, 20);
			salary = inputFloat();
			fflush(stdin); cin.clear();

			gotoxy(105, 24);
			while(true)
			{
				input4Tel(phone);
				if(!strcmp(phone, "\0"))
				{
					continue;
				}
				else
				{
					break;
				}
			}
			fflush(stdin); cin.clear();
			gotoxy(105, 28); 
			while(true)
			{
				inputLetter(address);
				if(!strcmp(address, "\0"))
				{
					continue;
				}
				else
				{
					break;
				}
			}  
		}
	
		void Display(int y){	 
			// drawBoxSingleLine(15, y, 135, 1, 5); 
			for(int i = 15; i<150; i++){
                for(int j = y ; j <y+3 ; j++){
                    gotoxy(i,j);
                    foreColor(10);
                    cout << char(219);
                }
            }
			
			foreColor(167);
			gotoxy(19, y + 1); cout<<left<<setw(10)<<idT<<setw(20)<<name<<setw(15)<<gender<<setw(20)<<age<<setw(20)<<specialty<<setw(15)<<salary<<setw(15)<<phone<<setw(15)<<address<<endl<<endl;
		}
		
		void Header(int y){
			// DrawRectangle(15, y - 1, 135, 1, 2);
			for(int i = 15; i<150; i++){
                for(int j = y-1 ; j <y+2 ; j++){
                    gotoxy(i,j);
                    foreColor(9);
                    cout << char(219);
                }
            }
			foreColor(151);
			gotoxy(19, y); cout<<left<<setw(10)<<"ID"<<setw(20)<<"Name"<<setw(15)<<"Gender"<<setw(20)<<"Age"<<setw(20)<<"Specialty"<<setw(15)<<"Salary($)"<<setw(15)<<"Phone Number"<<setw(15)<<"Address";
		}
		
		void setid(int idT){
			this->idT = idT;
		}
		int getid(){
			return this->idT ;
		}
};


class Member : public Staff{
	protected:
		char date [25];
		int idM = 2000;
		int month , year ;
		int assign;
		int MorY; //1 for month, 2 for year
	public:
		
		void setMorY(int m){
			MorY = m;
		}
		
		int getMorY(){
			return MorY;
		}

		void InsetMember(){
			
      
      for(int i = 20; i<24; i++){
                    for(int j = 10 ; j <35 ; j++){
                        gotoxy(i-2,j);
                        foreColor(6);
                        cout << char(219);
                        
                        gotoxy(i+120,j);
                        foreColor(6);
                        cout << char(219);
                    
                    }
                }  
      
        for(int i = 18; i<40; i++){
                    for(int j = 10 ; j <12 ; j++){
                        gotoxy(i,j);
                        foreColor(6);
                        cout << char(219);
                        
                        gotoxy(i,j+23);
                        foreColor(6);
                        cout << char(219);
                        
                        
                         gotoxy(i+100,j);
                        foreColor(6);
                        cout << char(219);
                        
                        gotoxy(i+100,j+23);
                        foreColor(6);
                        cout << char(219);
            }
        }
      
      
      //
          for(int i = 25; i<75; i++){
                    for(int j = 13 ; j <32 ; j++){
                        gotoxy(i,j);
                        foreColor(9);
                        cout << char(219);
                        
                        gotoxy(i+62,j);
                        foreColor(9);
                        cout << char(219);
                    }
                }  
                
                for(int i = 26; i<76; i++){
                    for(int j = 16 ; j <19 ; j++){
                        gotoxy(i,j);
                        foreColor(7);
                        cout << char(219);
                        
                        
                        gotoxy(i,j+5);
                        foreColor(7);
                        cout << char(219);
                        
                        gotoxy(i,j+10);
                        foreColor(7);
                        cout << char(219);
                        
                       /// 
                         gotoxy(i+60,j);
                        foreColor(7);
                        cout << char(219);
                        
                        
                        gotoxy(i+60,j+5);
                        foreColor(7);
                        cout << char(219);
                        
                        gotoxy(i+60,j+10);
                        foreColor(7);
                        cout << char(219);
                                      
                        
                    }
                }
                
        foreColor(249);
      	gotoxy(30, 17); cout<< "ID      : "; 
        gotoxy(30, 22); cout<< "NAME    : ";
        gotoxy(30, 27); cout<< "GENDER  : ";
        gotoxy(92, 17); cout<< "DATE    : ";
      	gotoxy(92, 22); cout<< "PHONE   : ";
        gotoxy(92, 27); cout<< "ADDRESS : ";
        fflush(stdin); cin.clear();      
         
           
        
            foreColor(249);
            gotoxy(42, 17); cout<<idM; fflush(stdin);cin.clear();
            gotoxy(42, 22);
          while(true)
          {
            inputLetter(name);
          if(!strcmp(name, "\0"))
          {
            continue;
          }
          else
          {
            break;
          }
          }
          fflush(stdin); cin.clear();  
          gotoxy(42, 27);
          while(true)
          {
            inputLetter(gender);
            if(!strcmp(gender, "\0"))
            {
              continue;
            }
            else
            {
              break;
            }
          }
          fflush(stdin); cin.clear();
                
          while(true)
              {
                gotoxy(105, 17); cout<<"           "; 
                gotoxy(105, 17); inputNumber(date);
            
            if(!strcmp(date, "\0"))
            {
              continue;
            }
            
            if(strlen(date)==10)
            {
              string day = string(1, date[0]) + string(1, date[1]); 
                  string month = string(1, date[3]) + string(1, date[4]); 
                  string year = string(1, date[6]) + string(1, date[7]) + string(1, date[8]) + string(1, date[9]); 
                  
                  if((stoi(day) >= 1 && stoi(day) <= 31) && (stoi(month) >= 1 && stoi(month) <= 12) && (stoi(year) >= 1900 && stoi(year) <= 2024) && (date[2] == '-' && date[5] == '-')) 
              {
                // SYSTEMTIME currentTime;
                  // GetLocalTime(&currentTime);
                  
                  // age = currentTime.wYear - stoi(year); 
                // if(stoi(month) > currentTime.wMonth) age--; 
                
                break; 
              }
            }
            // gotoxy(85, 20); cout<<"                           "; 
                // gotoxy(85, 20); foreColor(4); cout<<"Wrong Format";
            MessageBox(
                    NULL,
                    "Wrong Format.\n\nPlease Follow (dd-mm-yyyy).",  
                    "Add Member - Error",  
                    MB_OK | MB_ICONERROR      
                );
              }
        //       gotoxy(105, 20); cout<<"                           ";
        //   fflush(stdin); cin.clear();
    
                // foreColor(167);
          gotoxy(105, 22);
          while(true)
          {
            input4Tel(phone);
            if(!strcmp(phone, "\0"))
            {
              continue;
            }
            else
            {
              break;
            }
          }
          fflush(stdin); cin.clear();
          gotoxy(105, 27); 
          while(true)
          {
            inputLetter(address);
            if(!strcmp(address, "\0"))
            {
              continue;
            }
            else
            {
              break;
            }
          }
        }
//		
		void Display(int y){	 
			// drawBoxSingleLine(15, y, 138, 1, 5); 
			for(int i = 25; i<141; i++){
                for(int j = y ; j <y+3 ; j++){
                    gotoxy(i,j);
                    foreColor(10);
                    cout << char(219);
                }
            }
			foreColor(167); gotoxy(30, y + 1); cout<<left<<setw(15)<<idM<<setw(20)<<name<<setw(15)<<gender<<setw(20)<<date<<setw(20)<<phone<<setw(20)<<address<<endl<<endl;
		}
		
		void Header(int y){
			// DrawRectangle(20, y - 1, 138, 1, 2);
			for(int i = 25; i<141; i++){
                for(int j = y-1 ; j <y+2 ; j++){
                    gotoxy(i,j);
                    foreColor(9);
                    cout << char(219);
                }
            }
			foreColor(151);
			gotoxy(30, y); cout<<left<<setw(15)<<"ID"<<setw(20)<<"Name"<<setw(15)<<"Gender"<<setw(20)<<"Date"<<setw(20)<<"Phone Number"<<setw(20)<<"Address";
		}
	
		void setId(int idM){
			this->idM = idM;
		}
		int getId(){
			return idM;
		}
	
////////////////////////////////////   ASSIGN MEMBER TO MEMBERSHIP  		
		void FileMenuAssignMember(){

			do{
				// b:
				foreColor(7);
				cls();
				Design::Cover();
				Design::RealAssign();

				// int y = 17;
				foreColor(7);
				int b = 1;
				char Barrow;	
				do{
				setcursor(true, 1);
				Design::boxassign();
				if (b==1){
					for (int i = 28; i <=51; i++) {
						for (int j =22; j <25; j++) {
							gotoxy(i, j);
							foreColor(6);
							cout << char(219);
						}
					} 
					foreColor(228);gotoxy(32,23);cout<<" M O N T H L Y "<<endl; 
				}
				if(b==2){
					for (int i = 28; i <=51; i++) {
						for (int j =22; j <25; j++) {
							gotoxy(i+88, j);
							foreColor(6);
							cout << char(219);
						}
					} 
					foreColor(228);gotoxy(121,23);cout<<" Y E A R L Y  "<<endl;     
				
				}
		
					Barrow = getch();
					switch (Barrow) {
						case 77: // Right
						case 80: // Down
							b++;
							if (b > 2) {
								b = 1;
							}
							break;
						case 75: // Left
						case 72: // Up
							b--;
							if (b< 1) {
								b = 2;
							}
							break;
					}
			} while (Barrow != 13);

				switch(b){
					a:
					case 1:
						{
						
							for (int i = 28; i <=51; i++) {
								for (int j =29; j <32; j++) {
									gotoxy(i, j);
									foreColor(9);
									cout << char(219);
								}
							}
							foreColor(151); 		
							gotoxy(44, 30); cout<<"     ";
							foreColor(151);
							gotoxy(30, 30);
							cout<< "INPUT MONTH : ";
							foreColor(151);
							gotoxy(44, 30);  month = inputNumber();fflush(stdin);cin.clear();
							
							if(month > 12){
							MessageBox(
								    NULL,
								    "Invalid input. The month cannot be greater than 12.\n\nPlease enter a valid month between 1 and 12.",  
								    "Month Input Error", 
								    MB_OK | MB_ICONERROR  
								);
								foreColor(151);
								gotoxy(44, 30); cout<<"     ";
								goto a;
								break;
								}
							else{
								foreColor(9);
									MorYSt = 1;
							}
							foreColor(4);
							gotoxy(45, 35);
							cout<<"<<< Press Key ESC to Continue and Press any Key to Update Again(Month or Year) >>>"<<endl;
							break;
						}
						break;
						c:
						case 2:
							{
								for (int i = 28; i <=51; i++) {
									for (int j =29; j <32; j++) {
										gotoxy(i+88, j);
										foreColor(9);
										cout << char(219);
									}
								} 
								// cls();
								foreColor(151);
								gotoxy(131, 30); cout<<"     ";
								foreColor(151); 
								gotoxy(118, 30);
								cout<< "INPUT YEAR : ";
								foreColor(151);
								gotoxy(131, 30); year = inputNumber();fflush(stdin);cin.clear();
								if(year > 10){
								MessageBox(
								    NULL,
								    "Invalid input. The year cannot be greater than 10 or less than 1.\n\nPlease enter a valid year.",  
								    "Year Input Error", 
								    MB_OK | MB_ICONERROR  
								);	
								foreColor(151);	gotoxy(131, 30); cout<<"     ";
									goto c;
									break;
									// system("cls");
								}
								else{
									foreColor(9);
//									cls();
									MorYSt = 2;
//									HeaderAssign2(y);
//									Dyearly(y+2);
								}
							foreColor(4);
							gotoxy(45, 35);
							cout<<"<<< Press Key ESC to Continue and Press any Key to Update Again(Month or Year) >>>"<<endl;
							break;
							}
						break;
				}
			}while(getch() != 27);
		}


		void HeaderAssign(int y){
			for(int i = 20; i<150; i++){
                for(int j = y-1 ; j <y+2 ; j++){
                    gotoxy(i,j);
                    foreColor(9);
                    cout << char(219);
                }
            }
			foreColor(151);
			gotoxy(25, y); cout<<left<<setw(15)<<"ID"<<setw(20)<<"Name"<<setw(15)<<"Gender"<<setw(20)<<"Date"<<setw(20)<<"Phone Number"<<setw(15)<<"Payment($)"<<setw(19)<<"Address";
		}
		
		void HeaderAssign2(int y){
			for(int i = 20; i<150; i++){
                for(int j = y-1 ; j <y+2 ; j++){
                    gotoxy(i,j);
                    foreColor(9);
                    cout << char(219);
                }
            }
			foreColor(151);
			gotoxy(25, y); cout<<left<<setw(15)<<"ID"<<setw(20)<<"Name"<<setw(15)<<"Gender"<<setw(20)<<"Duration"<<setw(15)<<"Payment($)"<<setw(20)<<"Phone Number"<<setw(19)<<"Address";
		}
		
		
			void DisplayInvoice(){
			foreColor(7);gotoxy(88, 23); cout<< name ;
			foreColor(2);gotoxy(27,28);cout<< left << setw(15)<<idM<< setw(20)<<name << setw(18)<<gender  << setw(18)<<address<< setw(18)<<phone<< setw(18)<<setw(3) << month << "Month"  << setw(12) << "" << month * 20<<endl;                                  
	
		}
		void DisplayInvoice2(){
			foreColor(7);gotoxy(88, 23); cout<< name ;
				foreColor(2);gotoxy(27,28);cout<< left << setw(15)<<idM<< setw(20)<<name << setw(18)<<gender  << setw(18)<<address<< setw(18)<<phone<< setw(18)<<setw(3) << year << "YEAR"  << setw(12) << "" << year * 200<<endl;                                  
	
		}
		
		void Dmonthly(int y){
			for(int i = 20; i<150; i++){
                for(int j = y ; j <y+3 ; j++){
                    gotoxy(i,j);
                    foreColor(10);
                    cout << char(219);
                }
            }
			foreColor(167); 
			gotoxy(25, y + 1); 
    		cout << left << setw(15) << idM<< setw(20) << name << setw(15) << gender<< setw(3) << month << "Month"  << setw(12) << ""<< setw(15) << month * 20<< setw(20) << phone<< setw(16) << address << endl << endl;

	
		}
		/// Display membership for year
		void Dyearly(int y){	 
			for(int i = 20; i<150; i++){
                for(int j = y ; j <y+3 ; j++){
                    gotoxy(i,j);
                    foreColor(10);
                    cout << char(219);
                }
            }
			foreColor(167); 
			gotoxy(25, y + 1); 
    		cout << left << setw(15) << idM<< setw(20) << name<< setw(15) << gender<< setw(3) << year << "Year"  << setw(13) << "" << setw(15) <<year * 100 << setw(20) << phone<< setw(16) << address << endl << endl;
		}
		void DisplayMembershipInfo() {
			// cls();
			// foreColor(7);
			// cout << "MEMBERSHIP ID      : " << idM << endl;
			// cout << "MEMBERSHIP NAME    : " << name << endl;
			// cout << "MEMBERSHIP GENDER  : " << gender << endl;
			// cout << "MEMBERSHIP ADDRESS : " << address << endl;
			// cout << "MEMBERSHIP PHONE   : " << phone << endl;
			foreColor(2);
			gotoxy(55, 13);cout << "MEMBERSHIP ID      : " <<idM<< endl;
			gotoxy(55, 15);cout << "MEMBERSHIP NAME    : " <<name<<endl;
			gotoxy(55, 17);cout << "MEMBERSHIP GENDER  : " <<gender<<endl;
			gotoxy(55, 19);cout << "MEMBERSHIP ADDRESS : " <<address<< endl;
			gotoxy(55, 21);cout << "MEMBERSHIP PHONE   : "  <<phone<< endl;
		}

void UpdateshipMonth() {
    bool validInput = false;
	Design::Cover();
	Design::update_membership();
    while (!validInput) {

        DisplayMembershipInfo();
		foreColor(2);
		// gotoxy(45, 18);
        // cout << "_ ENTER MONTHLY     : ";
		gotoxy(55, 23);cout << "ENTER MONTH        : " ;
        gotoxy(76, 23);month = inputNumber();

        if (month > 12 || month < 1) {
			MessageBox(
				    NULL,
				    "Invalid input. The month cannot be greater than 12.\n\nPlease enter a valid month between 1 and 12.",  
				    "Month Input Error", 
				    MB_OK | MB_ICONERROR  
				);

			gotoxy(76, 23); cout<<"         ";
        } else {
            validInput = true;
        }
    }
}

void UpdateshipYearly() {
    bool validInput = false;

    while (!validInput) {
        DisplayMembershipInfo();
		foreColor(2);
        // cout << "_ ENTER YEARLY      : ";
		gotoxy(76, 23);cout << "ENTER YEAR         : " ;
        year = inputNumber();

        if (year > 10 || year < 1) {
			MessageBox(
			    NULL,
			    "Invalid input. The year cannot be greater than 10 or less than 1.\n\nPlease enter a valid year.",  
			    "Year Input Error", 
			    MB_OK | MB_ICONERROR  
			);

			gotoxy(76, 23); cout<<"         ";
        } else {
            validInput = true;
        }
    }
}
		
};

#endif