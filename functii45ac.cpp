
template <typename T>
int readFILE(char *fn,T str[])
{
	fp = fopen(fn, "r+b");
    
    if( fp == NULL ) {  cout<<" Eroare:: Fisierul "<<fn<<" nu exista "<<endl;  contorERROR++;  }
    
    int xxx = fread( str, sizeof(str[0]), 1000, fp); 
	      
    fclose(fp);
  
   return xxx;
}

template <typename T>
int writeFILE(char *fn,T str[], int NR)
{
	fp = fopen(fn, "w+b");
    
    if( fp == NULL ) {  cout<<" Eroare:: Fisierul "<<fn<<" nu exista "<<endl;  contorERROR++;  }
    else {  cout<<"\n All changes was saved in "<<fn<<" file "<<endl; }
    
    fwrite( str, sizeof(str[0]), NR, fp); 
	      
    fclose(fp);
}

void readFILEconf()
{
	fp = fopen("conf45ac.ini", "r+");
    
    if( fp == NULL ) {  cout<<" Eroare:: Fisierul conf45ac.ini nu exista "<<endl; system("pause"); exit(0);  }
    
    char c[2];
      fscanf(fp,"%s%s%s%s",&FILEuser,&FILEstud, &FILEstat, &c); 
	     
	strcpy(collor,"color ");     
	strcat(collor,c);
		  
    fclose(fp);
 
}

int login()
{
	char UN[100];
	char UP[100];
    int ID;

 while(1)	
 { 
 	int j=0;
	system("cls");
	
	cout<<" \n\n\t Enter username:";
	cin>>UN;

	cout<<" \n\t Enter userpassword:";
	while(1)
	{
	UP[j] =_getch();
	
		if(int(UP[j])==8)
		{
			if(j>0)
			{
				cout<<"\b \b";
				j--;
			}
		}
		else if(int(UP[j])==13)
		{
		UP[j]=0;
		bool OK=0;
			
		  for(int i=0; i<NU; i++)
	 	 {
	  	  if( strcmp(USER[i].userpass, UP)==0 && strcmp(USER[i].username, UN)==0 )
	  		{
	  		  ID=i; OK=1; break;
			}
		 }	
			    if(!OK)	
				{
			 	system("cls");
   				cout<<"\n\n\t !!!Incorect username or userpassword!!!"<<endl;
   				cout<<"\t\t\t Try again"<<endl;
   				system("pause");   
   				system("cls");
   				cout<<" \n\n\t Enter username:";
				cin>>UN;
				cout<<" \n\t Enter userpassword:";
    			j=0;
			 }
	 
	  	
		if(OK){ STAT[ID].userID=ID; STAT[ID].nracces++; system("cls"); /*cout<<"\n\n\t\t WELOCME "<<endl; Sleep(2000);*/	break;	}
			
	  }
	else{	cout<<"*";j++;}
	
	}
	break;
}

   return ID;	
}

int adminMENIU18()
 {
 	system("cls");
 	NIVEL=18;
 	
 	cout<<" \n\n\t *** MENIU 1->2 Show***"<<endl;
 	cout<<" \t  1. Active students"<<endl;
 	cout<<" \t  2. Inactive students"<<endl;
 	cout<<" \t  3. All students "<<endl;
  	cout<<" \tESC. Back "<<endl;
 	
 	switch(_getch())
 	{
 	   case 49: return 11116;	
	   case 50: return 22226;	
	   case 51: return 33336;
	   case 27: NIVEL=1;
	}
 }

int adminMENIU17()
 {
 	system("cls");
 	NIVEL=17;
 	
 	cout<<" \n\n\t *** MENIU 2->3 Edit***"<<endl;
 	cout<<" \t  1. Edit name"<<endl;
 	cout<<" \t  2. Edit surname"<<endl;
 	cout<<" \t  3. Edit age "<<endl;
 	cout<<" \t  4. Edit group "<<endl;
 	cout<<" \t  5. Edit status "<<endl;
  	cout<<" \tESC. Back "<<endl;
 	
 	switch(_getch())
 	{
 	   case 49: return 11117;	
	   case 50: return 22227;	
	   case 51: return 33337;
	   case 52: return 44447;
	   case 53: return 55557;
	   
	   case 27: NIVEL=1;
	}
 }

int adminMENIU16()
 {
 	system("cls");
 	NIVEL=16;
 	
 	cout<<" \n\n\t *** MENIU 2->3 Edit***"<<endl;
 	cout<<" \t  1. Edit username"<<endl;
 	cout<<" \t  2. Edit password"<<endl;
 	cout<<" \t  3. Edit tip "<<endl;
 	cout<<" \t  4. Edit status "<<endl;
  	cout<<" \tESC. Back "<<endl;
 	
 	switch(_getch())
 	{
 	   case 49: return 11118;	
	   case 50: return 22228;	
	   case 51: return 33338;
	   case 52: return 44448;
	   
	   case 27: NIVEL=12;
	}
 }

int adminMENIU15()
 {
 	system("cls");
 	NIVEL=15;
 	
 	cout<<" \n\n\t *** MENIU 2->3 Raport***"<<endl;
 	cout<<" \t  1. Student's list by age "<<endl;
 	cout<<" \t  2. Student's list by group"<<endl;
 	cout<<" \t  3. All student's list "<<endl;
  	cout<<" \tESC. Back "<<endl;
 	
 	switch(_getch())
 	{
 	   case 49: return 11119;	
	   case 50: return 22229;	
	   case 51: return 33339;
	   
	   case 27: NIVEL=14;
	}
 }
 
int adminMENIU14()
 {
 	system("cls");
 	NIVEL=14;
 	
 	cout<<" \n\n\t *** MENIU 1->2 Raport***"<<endl;
 	cout<<" \t  1. Students raport "<<endl;
 	cout<<" \t  2. Statistic raport "<<endl;
  	cout<<" \tESC. Back "<<endl;
 	
 	switch(_getch())
 	{
 	   case 49: NIVEL=15; break;	
	   case 50: return 22220;	
	   
	   case 27: NIVEL=1;
	}
 }


int adminMENIU13()
 {
 	system("cls");
 	NIVEL=13;
 	
 	cout<<" \n\n\t *** MENIU 1->2 Find***"<<endl;
 	cout<<" \t  1. Find by name"<<endl;
 	cout<<" \t  2. Find by surname"<<endl;
 	cout<<" \t  3. Find by IDNP"<<endl;
 	cout<<" \t  4. Find by group"<<endl;
  	cout<<" \tESC. Back "<<endl;
 	
 	switch(_getch())
 	{
 	   case 49: return 11111;	
	   case 50: return 22222;	
	   case 51: return 33333;
	   case 52: return 44444;	
	   
	   case 27: NIVEL=1;
	}
 }

int adminMENIU12()
 {
 	system("cls");
 	NIVEL=12;
 	
 	cout<<" \n\n\t *** MENIU 1->2***"<<endl;
 	cout<<" \t  1. Insert user"<<endl;
 	cout<<" \t  2. Show user"<<endl;
 	cout<<" \t  3. Find user"<<endl;
 	cout<<" \t  4. Edit user"<<endl;
  	cout<<" \tESC. Back "<<endl;
 	
 	switch(_getch())
 	{
 	   case 49: return 1111;	
	   case 50: return 2222;	
	   case 51: return 3333;
	   case 52: NIVEL=16; break;	
	   
	   case 27: NIVEL=1;
	}
	 
 }
 
 int adminMENIU1()
 {
 	system("cls");
 	NIVEL=1;
 	
 	cout<<" \n\n\t *** MENIU BAZA***"<<endl;
 	cout<<" \t  1. Management user"<<endl;
 	cout<<" \t  2. Insert Student"<<endl;
 	cout<<" \t  3. Show Student"<<endl;
 	cout<<" \t  4. Find Student"<<endl;
 	cout<<" \t  5. Edit Student"<<endl;
	cout<<" \t  6. Raport Student"<<endl;
	cout<<" \t  7. Statistics"<<endl;
 	cout<<" \tESC. Exit"<<endl;
 	
 	switch(_getch())
 	{
 	   case 49: NIVEL=12; break;
	   case 50: return 111;	
	   case 51: NIVEL=18; break;	
	   case 52: NIVEL=13; break;
	   case 53: NIVEL=17; break;
	   case 54: NIVEL=14; break;
	   case 55: return 666;
	   case 27: return 999;
	}
	
   return 0;	 
 }


int adminMENIU()
{

	
	switch(NIVEL)
	{
		case 1: return adminMENIU1();
		case 12: return adminMENIU12();
		case 13: return adminMENIU13();
		case 14: return adminMENIU14();
		case 15: return adminMENIU15();
		case 16: return adminMENIU16();
		case 17: return adminMENIU17();
		case 18: return adminMENIU18();
	}
	
	
   return 0;	
}

int userMENIU19()
 {
 	system("cls");
 	NIVEL=19;
 	
 	cout<<" \n\n\t *** MENIU 1->2 Raport***"<<endl;
 	cout<<" \t  1. Student's list by age "<<endl;
 	cout<<" \t  2. Student's list by group"<<endl;
 	cout<<" \t  3. All student's list "<<endl;
  	cout<<" \tESC. Back "<<endl;
 	
 	switch(_getch())
 	{
 	   case 49: return 11119;	
	   case 50: return 22229;	
	   case 51: return 33339;
	   
	   case 27: NIVEL=1;
	}
 }
 
int userMENIU1()
{
	NIVEL=1;
	cout<<" \n\n\t *** MENIU USER***"<<endl;
	cout<<" \t  1. Show Student"<<endl;
 	cout<<" \t  2. Find Student"<<endl;
 	cout<<" \t  3. Edit Student"<<endl;
	cout<<" \t  4. Raport Student"<<endl;
 	cout<<" \tESC. Exit"<<endl;
 	
 	switch(_getch())
 	{
 		case 49: NIVEL=18; break;
 		case 50: NIVEL=13; break;
 		case 51: NIVEL=17; break;
 		case 52: NIVEL=19; break;
 		case 27: return 999;
	 }
   return 0;	
}

int userMENIU()
{

	
	switch(NIVEL)
	{
		case 1: return userMENIU1();
		case 13: return adminMENIU13();
		case 17: return adminMENIU17();
		case 18: return adminMENIU18();
		case 19: return userMENIU19();
	}
	
	
   return 0;	
}

void insertuser()
{
	do
	{
		cout<<"User-"<<NU+1<<endl;
		cout<<"Enter username::"; cin>>USER[NU].username;
		cout<<"Enter password::"; cin>>USER[NU].userpass;
		for(int i=0; i<NU; i++)
		{
			if(strcmp(USER[NU].userpass,USER[i].userpass)==0)
			{
				 cout<<"\n\t\tTHIS PASSWORD ALREADY EXIST, CHOOSE ANOTHER ONE\n"<<endl;
				 cout<<"Enter password::"; cin>>USER[NU].userpass;
			}
		}
		cout<<"Enter tip::"; cin>>USER[NU].tip;
		cout<<"Enter status::"; cin>>USER[NU].stare;
		USER[NU].id=NU;
		cout<<"ID::"<<USER[NU].id<<endl;
		cout<<"\n Any key to enter next User / Or ESC for exit "<<endl;
		STAT[NU].userID=NU;
		STAT[UID].nruserins++;
		NST = ++NU;
		
	}while(_getch()!=27);
}
	
void showuser()
{
   	cout<<setw(6)<<" Nr. "<<setw(10)<<" username "<<setw(10)<<" password "<<setw(6)<<" tip "<<setw(6)<<" status "<<setw(5)<<" ID "<<endl;
  	cout<<"************************************************"<<endl;
  	for(int i=0; i < NU; i++)
    	 {
     	 cout<<setw(3)<<i+1<<setw(10)<<USER[i].username<<setw(10)<<USER[i].userpass<<setw(6)<<USER[i].tip<<setw(7)<<USER[i].stare<<setw(7)<<USER[i].id<<endl;
     	 cout<<"------------------------------------------------"<<endl;
	 	} 
	}

void insertstud()
{
	do
	{
		cout<<"Student nr.- "<<NS+1<<endl;
		cout<<"Enter name::"; cin>>STUD[NS].nume;
		cout<<"Enter surname::"; cin>>STUD[NS].prenume;
		cout<<"Enter age::"; cin>>STUD[NS].ani;
		cout<<"Enter idnp::"; cin>>STUD[NS].IDNP;
		for(int i=0; i<NS; i++)
		{
			if(strcmp(STUD[NS].IDNP,STUD[i].IDNP)==0)
			{
				 cout<<"\n\t\tTHIS IDNP ALREADY EXIST, TRY TO INSERT AGAIN\n"<<endl;
				 cout<<"Enter idnp::"; cin>>STUD[NS].IDNP;
			}
		}
		cout<<"Enter group::"; cin>>STUD[NS].grupa;
		cout<<"User ID::"<<USER[UID].id<<endl;
		STUD[NS].userID=USER[UID].id;
		
		cout<<"\n Any key to enter next User / Or ESC for exit "<<endl;
		STAT[UID].nrstudins++;
		NS++;
		
	}while(_getch()!=27);
}
	
void showstud()
{
	
			int in=0, pas=2, ur=pas, x=NS;
			while(1)
			{
			system("cls");
			cout<<setw(6)<<" Nr. "<<setw(12)<<" name "<<setw(12)<<" surname "<<setw(8)<<" age "<<setw(15)<<"   idnp   "<<setw(15)<<" group "<<setw(15)<<" userID "<<setw(5)<<" status "<<endl;
  			cout<<"*********************************************************************************************"<<endl;
  	
  			for( int i = in; i < ur; i++)
	    	 {
     			 cout<<setw(3)<<i+1<<setw(13)<<STUD[i].nume<<setw(12)<<STUD[i].prenume<<setw(8)<<STUD[i].ani<<setw(19)<<STUD[i].IDNP<<setw(15)<<STUD[i].grupa<<setw(10)<<STUD[i].userID<<setw(8)<<STUD[i].stare<<endl;
     			 cout<<"---------------------------------------------------------------------------------------------"<<endl;
	 			}
	 		 cout<<"----------NEXT->[+]----------- PAGINA "<<(in/pas)+1<<" din "<<(NS/pas)+1<<" .ESC for EXIT ----------PREVIOUS->[-]----------"<<endl;
     		 cout<<"---------------------------------------------------------------------------------------------"<<endl;
     		 cout<<"\n\n\t\t!!! CHOOSE A STUDENT'S NUMBER FROM THE BELOW LIST, AND PRESS ESC!!!\n\n"<<endl;
     	 
   			 int key=_getch();
     	      	 	
     		 if(key==43){ in+=pas; ur+=pas; x-=pas; if(ur>=NS){ in=NS-x; ur=NS; x+=pas;} }
			 if(key==45) {if(ur==NS){in-=pas; ur-=(x-pas);} else{ in-=pas; ur-=pas;} if(in<0){ in=0; ur=pas; x=NS;	} }
        	 if(key==27) break;
	
			}
	}
	
void SHOWstud(int z)
{
	stud STUDENT[1000];
	int c = 0;
	if(z==0)
	{
		for(int i = 0, j = 0; i < NS; i++)
		{
			if(STUD[i].stare == 0)
			{
				STUDENT[j++] = STUD[i];
				c++;
			}
		}
	}
	else if(z==1)
	{
		for(int i = 0, j = 0; i < NS; i++)
		{
			if(STUD[i].stare == 1)
			{
				STUDENT[j++] = STUD[i];
				c++;
			}
		}
	}
	 else if(z==2)
	 {
		for(int i = 0; i < NS; i++)
		{
			STUDENT[i] = STUD[i];
		}
		c = NS;
	}
	
	int in=0, pas=2, ur=pas, x=c;
	while(1)
	{
		if(c==0)
		{
			cout<<"\n\n\t\t NO INACTVE STUDENTS"<<endl; system("pause"); break;
		}
		else if(c>0 && STUD[NS].stare==0)
		{
			cout<<"\n\n\t\t NO ACTVE STUDENTS"<<endl; system("pause"); break;
		}
		 
		system("cls");
		cout<<setw(6)<<" Nr. "<<setw(12)<<" name "<<setw(12)<<" surname "<<setw(8)<<" age "<<setw(15)<<"   idnp   "<<setw(15)<<" group "<<setw(15)<<" userID "<<setw(5)<<" status "<<endl;
  		cout<<"*********************************************************************************************"<<endl;
  	
  		for( int i = in; i < ur; i++) 
		  {
		  	if(c==1) ur=1;
    	cout<<setw(3)<<i+1<<setw(13)<<STUDENT[i].nume<<setw(12)<<STUDENT[i].prenume<<setw(8)<<STUDENT[i].ani<<setw(19)<<STUDENT[i].IDNP<<setw(15)<<STUDENT[i].grupa<<setw(10)<<STUDENT[i].userID<<setw(8)<<STUDENT[i].stare<<endl;
     	cout<<"---------------------------------------------------------------------------------------------"<<endl;
		}
	 	
	 	 cout<<"----------NEXT->[+]----------- PAGINA "<<(in/pas)+1<<" din "<<(c/pas)+1<<" .ESC for EXIT ----------PREVIOUS->[-]----------"<<endl;
     	 cout<<"---------------------------------------------------------------------------------------------"<<endl;
     	 
   		 int key=_getch();
     	      	 	
     	 if(key==43){ in+=pas; ur+=pas; x-=pas; if(ur>=c){ in=c-x; ur=c; x+=pas;} }
		 if(key==45) {if(ur==c){in-=pas; ur-=(x-pas);} else{ in-=pas; ur-=pas;} if(in<0){ in=0; ur=pas; x=c;	} }
         if(key==27) break;

	}
 }
 
 
void finduser()
{
	int x;
	cout<<"Enter id:: ";
	cin>>x;
	if( x <= NU )
	{
		cout<<setw(6)<<" Nr. "<<setw(10)<<" username "<<setw(10)<<" password "<<setw(6)<<" tip "<<setw(6)<<" status "<<setw(5)<<" ID "<<endl;
		cout<<"************************************************"<<endl;
		cout<<setw(3)<<x+1<<setw(10)<<USER[x].username<<setw(10)<<USER[x].userpass<<setw(6)<<USER[x].tip<<setw(7)<<USER[x].stare<<setw(7)<<USER[x].id<<endl;
		cout<<"------------------------------------------------"<<endl;
	}
	 else cout<<"\n\t\t---The user does'nt exist---"<<endl;
}
/*
void finduser()
{
	int x; bool y=true;
	cout<<"Enter ID:: ";
	cin>>x;
	
   	cout<<setw(6)<<" Nr. "<<setw(10)<<" username "<<setw(10)<<" password "<<setw(6)<<" tip "<<setw(6)<<" status "<<setw(5)<<" ID "<<endl;
	cout<<"************************************************"<<endl;
		for(int i=0; i<NU; i++)
		{
			if(USER[NU].id==x);
			{
				y=false;
     		cout<<setw(3)<<i+1<<setw(10)<<USER[i].username<<setw(10)<<USER[i].userpass<<setw(6)<<USER[i].tip<<setw(7)<<USER[i].stare<<setw(7)<<USER[i].id<<endl;
			cout<<"------------------------------------------------"<<endl; 
			}
		}
		if(y) cout<<"\n\t\t---The user does'nt exist---"<<endl;
}
*/
void findstudN()
{
	char x[50]; bool y=true;
	cout<<"Enter Name:: ";
	cin>>x;
	
   	cout<<setw(6)<<" Nr. "<<setw(12)<<" name "<<setw(12)<<" surname "<<setw(8)<<" age "<<setw(15)<<"   idnp   "<<setw(15)<<" group "<<setw(15)<<" userID "<<setw(5)<<" status "<<endl;
  	cout<<"*********************************************************************************************"<<endl;
		for(int i=0; i<NS; i++)
		{
			if(strcmp(STUD[i].nume,x)==0)
			{
				y=false;
     		 cout<<setw(3)<<i+1<<setw(13)<<STUD[i].nume<<setw(12)<<STUD[i].prenume<<setw(8)<<STUD[i].ani<<setw(19)<<STUD[i].IDNP<<setw(15)<<STUD[i].grupa<<setw(10)<<STUD[i].userID<<setw(8)<<STUD[i].stare<<endl;
     		 cout<<"---------------------------------------------------------------------------------------------"<<endl;
			}
		}
		if(y) cout<<"\n\t\t---The user does'nt exist---"<<endl;
}

void findstudP()
{
	char x[50]; bool y=true;
	cout<<"Enter Surname:: ";
	cin>>x;
	
   	cout<<setw(6)<<" Nr. "<<setw(12)<<" name "<<setw(12)<<" surname "<<setw(8)<<" age "<<setw(15)<<"   idnp   "<<setw(15)<<" group "<<setw(15)<<" userID "<<setw(5)<<" status "<<endl;
  	cout<<"*********************************************************************************************"<<endl;
		for(int i=0; i<NS; i++)
		{
			if(strcmp(STUD[i].prenume,x)==0)
			{
			 y=false;
     		 cout<<setw(3)<<i+1<<setw(13)<<STUD[i].nume<<setw(12)<<STUD[i].prenume<<setw(8)<<STUD[i].ani<<setw(19)<<STUD[i].IDNP<<setw(15)<<STUD[i].grupa<<setw(10)<<STUD[i].userID<<setw(8)<<STUD[i].stare<<endl;
     		 cout<<"---------------------------------------------------------------------------------------------"<<endl;
			}
		}
		if(y) cout<<"\n\t\t---The user does'nt exist---"<<endl;
}

void findstudIDNP()
{
	char x[50]; bool y=true;
	cout<<"Enter IDNP:: ";
	cin>>x;
	
   	cout<<setw(6)<<" Nr. "<<setw(12)<<" name "<<setw(12)<<" surname "<<setw(8)<<" age "<<setw(15)<<"   idnp   "<<setw(15)<<" group "<<setw(15)<<" userID "<<setw(5)<<" status "<<endl;
  	cout<<"*********************************************************************************************"<<endl;
		for(int i=0; i<NS; i++)
		{
			if(strcmp(STUD[i].IDNP,x)==0)
			{
		     y=false;
     		 cout<<setw(3)<<i+1<<setw(13)<<STUD[i].nume<<setw(12)<<STUD[i].prenume<<setw(8)<<STUD[i].ani<<setw(19)<<STUD[i].IDNP<<setw(15)<<STUD[i].grupa<<setw(10)<<STUD[i].userID<<setw(8)<<STUD[i].stare<<endl;
     		 cout<<"---------------------------------------------------------------------------------------------"<<endl;
			}
		}
		if(y) cout<<"\n\t\t---The user does'nt exist---"<<endl;
}

void findstudG()
{
	char x[50]; bool y=true;
	cout<<"Enter Group:: ";
	cin>>x;
	
   	cout<<setw(6)<<" Nr. "<<setw(12)<<" name "<<setw(12)<<" surname "<<setw(8)<<" age "<<setw(15)<<"   idnp   "<<setw(15)<<" group "<<setw(15)<<" userID "<<setw(5)<<" status "<<endl;
  	cout<<"*********************************************************************************************"<<endl;
		for(int i=0; i<NS; i++)
		{
			if(strcmp(STUD[i].grupa,x)==0)
			{
				y=false;
     		 cout<<setw(3)<<i+1<<setw(13)<<STUD[i].nume<<setw(12)<<STUD[i].prenume<<setw(8)<<STUD[i].ani<<setw(19)<<STUD[i].IDNP<<setw(15)<<STUD[i].grupa<<setw(10)<<STUD[i].userID<<setw(8)<<STUD[i].stare<<endl;
     		 cout<<"---------------------------------------------------------------------------------------------"<<endl;
			}
		}
		if(y) cout<<"\n\t\t---The user does'nt exist---"<<endl;
}

void edituserN()
{
	showuser();
	int x;
	cout<<"\n Enter ID user wich you want to edit::";
	cin>>x;
	
		cout<<" Current username::"<<USER[x].username<<endl;
		cout<<" New username::"; cin>>USER[x].username;
}

void edituserP()
{
	showuser();
	int x;
	cout<<"\n Enter ID user wich you want to edit::";
	cin>>x;
	
		cout<<" Current password::"<<USER[x].userpass<<endl;
		cout<<" New password::"; cin>>USER[x].userpass;
}

void edituserT()
{
	showuser();
	int x;
	cout<<"\n Enter ID user wich you want to edit::";
	cin>>x;
	
		cout<<" Current tip::"<<USER[x].tip<<endl;
		cout<<" New tip::"; cin>>USER[x].tip;
}

void edituserS()
{
	showuser();
	int x;
	cout<<"\n Enter ID user wich you want to edit::";
	cin>>x;
	
		cout<<" Current status::"<<USER[x].stare<<endl;
		cout<<" New status::"; cin>>USER[x].stare;
}

void editstudN()
{
	showstud();
	int x;
	cout<<"\n Enter student NR. wich you want to edit::";
	cin>>x; x--;
	
		cout<<" Current name::"<<STUD[x].nume<<endl;
		cout<<" New name::"; cin>>STUD[x].nume;
		STAT[UID].nrstudedit++;
}

void editstudP()
{
	showstud();
	int x;
	cout<<"\n Enter student NR. wich you want to edit::";
	cin>>x; x--;
	
		cout<<" Current surname::"<<STUD[x].prenume<<endl;
		cout<<" New surname::"; cin>>STUD[x].prenume;
		STAT[UID].nrstudedit++;
}

void editstudA()
{
	showstud();
	int x;
	cout<<"\n Enter student NR. wich you want to edit::";
	cin>>x; x--;
	
		cout<<" Current age::"<<STUD[x].ani<<endl;
		cout<<" New age::"; cin>>STUD[x].ani;
		STAT[UID].nrstudedit++;
}

void editstudG()
{
	showstud();
	int x;
	cout<<"\n Enter student NR. wich you want to edit::";
	cin>>x; x--;
	
		cout<<" Current group::"<<STUD[x].grupa<<endl;
		cout<<" New group::"; cin>>STUD[x].grupa;
		STAT[UID].nrstudedit++;
}

void editstudS()
{
	showstud();
	int x;
	cout<<"\n Enter student NR. wich you want to edit::";
	cin>>x; x--;
	
		cout<<" Current status::"<<STUD[x].stare<<endl;
		cout<<" New status::"; cin>>STUD[x].stare;
		STAT[UID].nrstuddez++;
}

void showstat()
{
	cout<<setw(6)<<" userID "<<setw(6)<<" access "<<setw(6)<<" users inserted "<<setw(6)<<" students inserted "<<setw(6)<<"   students edited "<<setw(6)<<" students disabled "<<endl;
  	cout<<"******************************************************************************************"<<endl;
  	
  	for(int i=0; i<NU; i++)
  	{
  		cout<<setw(6)<<STAT[i].userID<<setw(6)<<STAT[i].nracces<<setw(16)<<STAT[i].nruserins<<setw(16)<<STAT[i].nrstudins<<setw(16)<<STAT[i].nrstudedit<<setw(16)<<STAT[i].nrstuddez<<endl;
  		cout<<"-----------------------------------------------------------------------------------------"<<endl;
	  }
}

void RAPORTA()
{
	int x,y;
	char nf[50];
	cout<<"\n\t enter student's age who you want to see::";
	cin>>y;
	cout<<"\n\t to select active students press 1"<<endl;
	cout<<"\t to select inactive students press 2"<<endl;
	cout<<"\t to select all students press 3"<<endl;
	cout<<"\n\n\t\t ENTER HERE::";
	cin>>x;
	cout<<"\n\t\t ENTER FILE NAME::";
	cin>>nf;
	strcat(nf,".doc");
	
		fp=fopen(nf,"w+");
	    if( fp == NULL ) {  cout<<" Eroare:: Fisierul "<<" nu exista "<<endl;  }
      	
      	fprintf(fp,"                      RAPORT BY AGE                        \n");
        fprintf(fp,"***********************************************************\n");
   		fprintf(fp," %6s %12s %15s %12s %8s\n"," ID. "," group "," name ","surname"," age ");
   		fprintf(fp,"***********************************************************\n");
   		
   		if( x==1)
   		{
   			for(int i=0; i < NS; i++)
    		 {
    		 	if(STUD[i].stare==1 && STUD[i].ani==y)
    		 	{
    		 		fprintf(fp,"%6d %12s %15s %12s %6d\n",i,STUD[i].grupa,STUD[i].nume,STUD[i].prenume,STUD[i].ani);	
	  				fprintf(fp,"-----------------------------------------------------------\n");
				 }
			 }
		}
		else if( x==2)
    	{
    		for(int i=0; i < NS; i++)
    		{
    			if(STUD[i].stare==0 && STUD[i].ani==y)
    			{
    				fprintf(fp,"%6d %12s %15s %12s %6d\n",i,STUD[i].grupa,STUD[i].nume,STUD[i].prenume,STUD[i].ani);	
	  	 			fprintf(fp,"-----------------------------------------------------------\n");
				}
			 }
		 }
		 else
		 {
		 	for(int i=0; i<NS; i++)
		 	{
		 		if(STUD[i].ani==y)
		 		{
		 		fprintf(fp,"%6d %12s %15s %12s %6d\n",i,STUD[i].grupa,STUD[i].nume,STUD[i].prenume,STUD[i].ani);	
	  			fprintf(fp,"-----------------------------------------------------------\n");
				 }
			}
		 }
			
    fclose(fp);
	system(nf);
}   

void RAPORTG()
{
	int x;
	char y[100], nf[50];
	cout<<"\n\t enter student's group who you want to see::";
	cin>>y;
	cout<<"\n\t to select active students press 1"<<endl;
	cout<<"\t to select inactive students press 2"<<endl;
	cout<<"\t to select all students press 3"<<endl;
	cout<<"\n\n\t\t ENTER HERE::";
	cin>>x;
	cout<<"\n\t\t ENTER FILE NAME::";
	cin>>nf;
	strcat(nf,".doc");

		fp=fopen(nf,"w+");
	    if( fp == NULL ) {  cout<<" Eroare:: Fisierul "<<" nu exista "<<endl;  }
      	
      	fprintf(fp,"                         RAPORT BY GROUP                       \n");
        fprintf(fp,"**********************************************************************\n");
   		fprintf(fp," %6s %12s %15s %12s %14s\n"," ID. "," group "," name ","surname"," IDNP ");
   		fprintf(fp,"**********************************************************************\n");
   		
   		if( x==1)
   		{
   			for(int i=0; i < NS; i++)
    		 {
    		 	if(STUD[i].stare==1 && strcmp(STUD[i].grupa,y)==0)
    		 	{
    		 		fprintf(fp,"%6d %12s %15s %12s %18s\n",i,STUD[i].grupa,STUD[i].nume,STUD[i].prenume,STUD[i].IDNP);	
	  				fprintf(fp,"----------------------------------------------------------------------\n");
				 }
			 }
		}
		else if( x==2)
    	{
    		for(int i=0; i < NS; i++)
    		{
    			if(STUD[i].stare==0 && strcmp(STUD[i].grupa,y)==0)
    			{
    				fprintf(fp,"%6d %12s %15s %12s %18s\n",i,STUD[i].grupa,STUD[i].nume,STUD[i].prenume,STUD[i].IDNP);	
	  	 			fprintf(fp,"----------------------------------------------------------------------\n");
				}
			 }
		 }
		 else
		 {
		 	for(int i=0; i<NS; i++)
		 	{
		 		if(strcmp(STUD[i].grupa,y)==0)
		 		{
		 		fprintf(fp,"%6d %12s %15s %12s %18s\n",i,STUD[i].grupa,STUD[i].nume,STUD[i].prenume,STUD[i].IDNP);	
	  			fprintf(fp,"----------------------------------------------------------------------\n");
				 }
			}
		 }
			
    fclose(fp);
	system(nf);
} 

void RAPORTallstud()
{
	char nf[50];
	int x;
	cout<<"\n\t to select active students press 1"<<endl;
	cout<<"\t to select inactive students press 2"<<endl;
	cout<<"\t to select all students press 3"<<endl;
	cout<<"\n\n\t\t ENTER HERE::";
	cin>>x;
	cout<<"\n\t\t ENTER FILE NAME::";
	cin>>nf;
	strcat(nf,".doc");

		fp=fopen(nf,"w+");
	    if( fp == NULL ) {  cout<<" Eroare:: Fisierul "<<" nu exista "<<endl;  }
      	
      	fprintf(fp,"                    RAPORT ALL STUDENTS                    \n");
        fprintf(fp,"*********************************************************************\n");
   		fprintf(fp," %6s %12s %15s %12s %12s\n"," ID. "," group "," name ","surname"," IDNP ");
   		fprintf(fp,"*********************************************************************\n");
   		
   		if( x==1)
   		{
   			for(int i=0; i < NS; i++)
    		 {
    		 	if(STUD[i].stare==1 )
    		 	{
    		 		fprintf(fp,"%6d %12s %15s %12s %17s\n",i,STUD[i].grupa,STUD[i].nume,STUD[i].prenume,STUD[i].IDNP);	
	  				fprintf(fp,"---------------------------------------------------------------------\n");
				 }
			 }
		}
		else if( x==2)
    	{
    		for(int i=0; i < NS; i++)
    		{
    			if(STUD[i].stare==0 )
    			{
    				fprintf(fp,"%6d %12s %15s %12s %17s\n",i,STUD[i].grupa,STUD[i].nume,STUD[i].prenume,STUD[i].IDNP);	
	  	 			fprintf(fp,"---------------------------------------------------------------------\n");
				}
			 }
		 }
		 else
		 {
		 	for(int i=0; i<NS; i++)
		 	{
		 		fprintf(fp,"%6d %12s %15s %12s %17s\n",i,STUD[i].grupa,STUD[i].nume,STUD[i].prenume,STUD[i].IDNP);	
	  			fprintf(fp,"---------------------------------------------------------------------\n");
			}
		 }
			
    fclose(fp);
	system(nf);
}

void RAPORTstat()
{
	char nf[50];
	cout<<"\n\t\t GIVE A NAME FOR THE REPORT FILE ::";
	cin>>nf;
	strcat(nf,".doc");
	  	fp=fopen(nf,"w+");
	    if( fp == NULL ) {  cout<<" Eroare:: Fisierul "<<" nu exista "<<endl;  }
      	
      	fprintf(fp,"                                      RAPORT STATISTICS                                       \n");
        fprintf(fp,"**********************************************************************************************\n");
   		fprintf(fp," %7s %7s %15s %15s %15s %15s\n"," userID. "," acces "," user inserted ","student inserted"," student edited ","students disabled");
   		fprintf(fp,"**********************************************************************************************\n");
   		
   		for(int i=0; i<NU; i++)
		 	{
		 		fprintf(fp,"%6d %9d %13d %16d %16d %16d\n",STAT[i].userID,STAT[i].nracces,STAT[i].nruserins,STAT[i].nrstudins,STAT[i].nrstudedit,STAT[i].nrstuddez );	
	  			fprintf(fp,"----------------------------------------------------------------------------------------------\n");
			}
   		
   		fclose(fp);
   		system(nf);
	  
}





















