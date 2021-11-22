#include <iostream> 
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <conio.h>
#include <windows.h>

using namespace std;

#include "struct45ac.cpp"
#include "functii45ac.cpp"

int main()
{
	
	// pas 1 
	readFILEconf();
		
    	system(collor);
		
	// pas 2  
    NU=readFILE(FILEuser,USER);
    NS=readFILE(FILEstud,STUD);
    NST=readFILE(FILEstat,STAT);
     
    if(contorERROR>0) exit(0);
	
	// pas 3 
	UID=login();	
		
 while(1)
 {
 	
  system("cls");
	
	switch(USER[UID].tip)
	{
		case 0: SYSTEM = userMENIU();  break;
		case 1: SYSTEM = adminMENIU(); break;
	}
		
	switch(SYSTEM)
	{
		 
		case 111: system("cls"); insertstud(); writeFILE(FILEstud,STUD,NS);writeFILE(FILEstat,STAT,NST); system("pause"); break;

		case 666: system("cls"); showstat(); system("pause"); break;
		
		case 1111: system("cls"); insertuser(); writeFILE(FILEuser,USER,NU);writeFILE(FILEstat,STAT,NST); system("pause"); break;
		case 2222: system("cls"); showuser(); system("pause"); break; 
		case 3333: system("cls"); finduser(); system("pause"); break;
		
		case 11111: system("cls"); findstudN(); system("pause"); break;
		case 22222: system("cls"); findstudP(); system("pause"); break;
		case 33333: system("cls"); findstudIDNP(); system("pause"); break;
		case 44444: system("cls"); findstudG(); system("pause"); break;
		
		case 22220: system("cls"); RAPORTstat(); break;
		
		case 11119: system("cls"); RAPORTA(); break;
		case 22229: system("cls"); RAPORTG(); break;
		case 33339: system("cls"); RAPORTallstud(); break;
		
		case 11118: system("cls"); edituserN(); writeFILE(FILEuser,USER,NU); system("pause"); break;
		case 22228: system("cls"); edituserP(); writeFILE(FILEuser,USER,NU); system("pause"); break;
		case 33338: system("cls"); edituserT(); writeFILE(FILEuser,USER,NU); system("pause"); break;
		case 44448: system("cls"); edituserS(); writeFILE(FILEuser,USER,NU); system("pause"); break;
		
		case 11117: system("cls"); editstudN(); writeFILE(FILEstud,STUD,NS); writeFILE(FILEstat,STAT,NST); system("pause"); break;
		case 22227: system("cls"); editstudP(); writeFILE(FILEstud,STUD,NS); writeFILE(FILEstat,STAT,NST); system("pause"); break;
		case 33337: system("cls"); editstudA(); writeFILE(FILEstud,STUD,NS); writeFILE(FILEstat,STAT,NST); system("pause"); break;
		case 44447: system("cls"); editstudG(); writeFILE(FILEstud,STUD,NS); writeFILE(FILEstat,STAT,NST); system("pause"); break;
		case 55557: system("cls"); editstudS(); writeFILE(FILEstud,STUD,NS); writeFILE(FILEstat,STAT,NST); system("pause"); break;
		
		case 11116: system("cls"); SHOWstud(1); break;
		case 22226: system("cls"); SHOWstud(0); break;
		case 33336: system("cls"); SHOWstud(2); break;

 		case 999: writeFILE(FILEstat,STAT,NST); exit(0); 
	}
	 	
 }	
	
   
	return 0;
}
