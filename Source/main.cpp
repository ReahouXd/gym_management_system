#include"MenuControll.h"
#include"design.h"
#include "assignMember.h"

int main(){

    Design::customConsole(170, 38);
    SetConsoleTitle("GYM MANAGEMENT SYSTEM ");
   MenuControl::welCome();
    // MenuControl::Main();
    
    
	getch();
    return 0;
} 
