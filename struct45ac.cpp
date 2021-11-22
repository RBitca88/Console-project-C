  
    struct user
    {
    	char username[100];
    	char userpass[100];
    	
    	bool tip; // 0 - user, 1 - admin
    	int stare=1; 
    	int id;
    };
 
  	struct stud
	{
		char nume[150];
		char prenume[150];
		int ani;
		char IDNP[20];
		char grupa[150];
		int userID;
		int stare=1;		
	};
	
	struct stats
	{
		int userID;
		int nracces=0;
		int nruserins=0;
		int nrstudins=0;
		int nrstudedit=0;
		int nrstuddez=0;
	};
	
	user USER[1000];
	int NU=0;
	
	stud STUD[1000];
	int NS=0;
	
	stats STAT[1000];
	int NST=0;
	
	int UID;
	
	FILE *fp;
	
	char FILEuser[200];   // users.step
	char FILEstud[200];   // studs.step
	char FILEstat[200];   // stats.step
	char collor[10];
	
	int contorERROR=0;
	
	int SYSTEM;
	
	int NIVEL=1;
	
	
