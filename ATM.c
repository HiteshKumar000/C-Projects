#include<stdio.h>
#include<windows.h>
#include<string.h>
void start();
void logo();
void frame();
void main_menu();
void frame_fix();
void view_user();
void admin_menu();
void view_trans();
void delete_user();
void delete_data();
int gotoxy();
void create_account();
void exit_atm();
void view_details();
void logn_check();
void sub_menu();
void main_menu_fix();
void change_pin();
void cash_deposit();
void cash_withdraw();
void sys_time();
void other_services();
void fund_transfer();
void fast_cash();
struct data{
	char fname[30];
	char lname[30];
	char pname[30];
	char dob[20];
	char email[50];
	char tel[15];
	char city[20];
	char pincode[10];
	float amount;
	int pin;
	char accno[20];
	int prev;
	int adl;
};
COORD coord={0,0};
int gotoxy(int x,int y)
{
	coord.X=x;
coord.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
return 0;
}
main()
{
	system("mode 120,30");
	start();
	main_menu();
	return 0;
}
void start()
{
	int i;
	system("COLOR FC");
	frame();
	Sleep(100);
	logo();
	gotoxy(46,15);
	char s[50]={"IIT Banking and ATM services"};
	for(i=0;i<50;i++)
	{
		putchar(s[i]);
		Sleep(20);
	}
	gotoxy(94,26);
printf("Programmers :-");
gotoxy(97,27);
printf("Hitesh Kumar");
gotoxy(97,28);
printf("1702660");
gotoxy(57,19);
printf("Loading..");
for(i=3;i<115;i++)
	{
		gotoxy(i,21);
		printf("%c",177);
		if(i==40||i==80)
		Sleep(300);
		else
		Sleep(10);
	}	
}
void logo()
{
	int i,j,a=5;
	for(i=1;i<=9;i++)
	{
		gotoxy(50,a);
		a++;
		for(j=1;j<=6;j++)
		{
			if(i==1||i==2||i==8||i==9)
			printf("*");
			else
			if(j==3||j==4)
			printf("*");
			else
			printf(" ");
		}
		printf(" ");
		for(j=1;j<=6;j++)
		{
		if(i==1||i==2||i==8||i==9)
		printf("*");
		else
		if(j==3||j==4)
		printf("*");
		else
		printf(" ");	
		}
		printf(" ");
		for(j=1;j<=6;j++)
		{
		if(i==1||i==2)
		printf("*");
		else
		if(j==3||j==4)
		printf("*");
		else
		printf(" ");	
		}
		printf("\n");
		Sleep(50);
	}
}
void frame()
{
	int i,j;
	
	for(i=3,j=115;i<=120,j>=3;i++,j--)
	{
		gotoxy(i,2);
		printf("_");
		Sleep(1);
		gotoxy(i,3);
		printf("*");
		gotoxy(j,24);
		printf("_");
		gotoxy(j,25);
		printf("*");
		
	}
	gotoxy(90,1);
	sys_time();
}
void main_menu()
{
	int i,c;
	system("cls");
	system("COLOR 2F");
	frame();
	for(i=0;i<=45;i++)
	{
		gotoxy(i,1);
		printf(" ");
		printf("MAJOR PROJECT");
		Sleep(5);
	}
	logo();
	gotoxy(53,15);
	char s[]="Welcome...!!";
	for(i=0;i<11;i++)
	{
		putchar(s[i]);
		Sleep(5);
	}
	gotoxy(46,17);
	char t[]="NEW to ATM....Create Account";
	for(i=0;i<28;i++)
	{
		putchar(t[i]);
		Sleep(5);
	}
	gotoxy(38,19);
	char u[]="Already have an account   Press[P] to proceed";
	for(i=0;i<=strlen(u);i++)
	{
		putchar(u[i]);
		Sleep(5);
	}
	gotoxy(18,23);
	char v[]="[C]:CREATE ACCOUNT    [P]:PROCEED TO ACCOUNT   [E]:EXIT   [A]:ADMIN LOGIN";
	for(i=0;i<strlen(v);i++)
	{
		putchar(v[i]);
		Sleep(5);
	}
	gotoxy(58,21);
	printf(" ");
	c=getch();
	if(c=='C'||c=='c')
	create_account();
	else if(c=='p'||c=='P')
	logn_check();
	else if(c=='A'||c=='a')
	admin();
	else if(c=='e'||c=='E')
	exit_atm();
	else{
		system("cls");
		frame_fix();
		gotoxy(55,14);
		printf("INVALID INPUT");
		Sleep(2000);
		main_menu_fix();
	}
}
void frame_fix()
{
	int i,j;
	gotoxy(45,1);
	printf("IIT Banking and ATM services");
	
for(i=3,j=115;i<=120,j>=3;i++,j--)
	{
		gotoxy(i,2);
		printf("_");
		gotoxy(i,3);
		printf("*");
		gotoxy(j,24);
		printf("_");
		gotoxy(j,25);
		printf("*");
	}
	gotoxy(90,1);
	sys_time();
}
void create_account()
{
	int i;
	int tpin;
	char tacno[20]="12345678";
	FILE *fp,*fpl;
	
	struct data d,dl;
	system("cls");
	system("COLOR F1");
	frame_fix();
	gotoxy(50,4);
	char a[]="-:APPLICATION FORM:-";
	for(i=0;i<=strlen(a);i++)
	{
		putchar(a[i]);
		Sleep(20);
	}
	gotoxy(5,6);
	printf("First Name      :-\t");
	scanf("%s",d.fname);
	gotoxy(5,9);
	printf("Sur Name      :-\t");
	scanf("%s",d.lname);
	gotoxy(5,12);
	printf("Father/Guardian Name      :-\t");
	scanf("%s",d.pname);
	gotoxy(33,15);
	printf("(DD/MM/YY) :-\t");
	gotoxy(5,15);
	printf("Date of Birth      :-\t");
	scanf("%s",d.dob);
	gotoxy(5,18);
	printf("E-Mail      :-\t");
	scanf("%s",d.email);
	gotoxy(5,21);
	printf("Contact No.      :-\t");
	scanf("%s",d.tel);
	for(i=5;i<=25;i++)
	{
		gotoxy(60,i);
		printf("|");
		Sleep(20);
	}
	gotoxy(65,7);
	printf("City     :-\t");
	scanf("%s",d.city);
	gotoxy(65,10);
	printf("Pincode   :-\t");
	scanf("%s",d.pincode);
	gotoxy(65,13);
	printf("Initial Amount  :-\tRS");
	scanf("%f",&d.amount);
	gotoxy(65,16);
	printf("Create Pin :-\t");
	scanf("%d",&tpin);
	int temp=tpin;
	gotoxy(65,19);
	printf("Confirm Pin    :-\t");
	scanf("%d",&tpin);
	gotoxy(55,27);
	printf("SUBMIT ");
	getch();
	if(tpin!=temp)
	{	system("cls");
		gotoxy(48,14);
		printf("WRONG PIN IS ENTERED");
		Sleep(2000);
		main_menu_fix();
	}
	else
	{
		system("cls");
	system("COLOR F1");
	frame_fix();
	gotoxy(50,4);
	char a[]="-:CHECK YOUR DETAILS:-";
	for(i=0;i<=strlen(a);i++)
	{
		putchar(a[i]);
		Sleep(20);
	}
	gotoxy(5,6);
	printf("First Name      :-\t");
	printf("%s",d.fname);
	gotoxy(5,9);
	printf("Sur Name      :-\t");
	printf("%s",d.lname);
	gotoxy(5,12);
	printf("Father/Guardian Name      :-\t");
	printf("%s",d.pname);
	gotoxy(33,15);
	printf("(DD/MM/YY) :-\t");
	gotoxy(5,15);
	printf("Date of Birth      :-\t");
	printf("%s",d.dob);
	gotoxy(5,18);
	printf("E-Mail      :-\t");
	printf("%s",d.email);
	gotoxy(5,21);
	printf("Contact No.      :-\t");
	printf("%s",d.tel);
	for(i=5;i<=25;i++)
	{
		gotoxy(60,i);
		printf("|");
	}
	gotoxy(65,7);
	printf("City     :-\t");
	printf("%s",d.city);
	gotoxy(65,10);
	printf("Pincode   :-\t");
	printf("%s",d.pincode);
	gotoxy(65,13);
	printf("Initial Amount Deposited:-\tRS");
	printf("%f",d.amount);
	gotoxy(65,16);
	printf("Pin :-\t");
	d.pin=tpin;
	printf("%d",d.pin);	
	
	}
	gotoxy(55,27);
	printf("CONFIRM ");
	getch();
	system("cls");
	frame_fix();
	gotoxy(48,14);
	printf("LOADING...");
	gotoxy(48,15);;
	printf("CREATING YOUR ACCOUNT ");
	Sleep(5000);
	fp=fopen("accounts.txt","a");
	fprintf(fp,"%s %d %f %s %s ",tacno,d.pin,d.amount,d.fname,d.lname);
	fclose(fp);
	system("cls");
	frame_fix();
	gotoxy(48,14);
	printf("YOUR ACCOUNT IS CREATED SUCCESSFULLY");
	Sleep(5000);
	main_menu_fix();
}
void main_menu_fix()
{
	int i,c;
	system("cls");
	system("COLOR 2F");
	frame();
	for(i=0;i<=45;i++)
	{
		gotoxy(i,1);
		printf(" ");
		printf("MAJOR PROJECT");
		Sleep(5);
	}
	logo();
	gotoxy(53,15);
	char s[]="Welcome...!!";
	for(i=0;i<11;i++)
	{
		putchar(s[i]);
		Sleep(5);
	}
	gotoxy(46,17);
	char t[]="NEW to ATM....Create Account";
	for(i=0;i<28;i++)
	{
		putchar(t[i]);
		Sleep(5);
	}
	gotoxy(38,19);
	char u[]="Already have an account   Press[P] to proceed";
	for(i=0;i<=strlen(u);i++)
	{
		putchar(u[i]);
		Sleep(5);
	}
	gotoxy(18,23);
	char v[]="[C]:CREATE ACCOUNT    [P]:PROCEED TO ACCOUNT   [E]:EXIT   [A]:ADMIN LOGIN";
	for(i=0;i<strlen(v);i++)
	{
		putchar(v[i]);
		Sleep(5);
	}
	gotoxy(58,21);
	printf(" ");
	c=getch();
	if(c=='C'||c=='c')
	create_account();
	else if(c=='p'||c=='P')
	logn_check();
	else if(c=='A'||c=='a')
	admin();
	else if(c=='e'||c=='E')
	exit_atm();
	else{
		system("cls");
		frame_fix();
		gotoxy(55,14);
		printf("INVALID INPUT");
		Sleep(2000);
		main_menu_fix();
	
	}
}
void logn_check()
{	
	system("cls");
	char acno[20];
	int pin;
	FILE *a;
	struct data d;
	system("COLOR 3F");
	frame_fix();
	gotoxy(43,5);
	a=fopen("accounts.txt","rw");
	int i;
	int j,x=8;
	for(i=1;i<=13;i++)
	{
		gotoxy(33,x);
		for(j=1;j<=25;j++)
		{
			if(i==1||i==13)
				printf("[]");
			else if(j==25||j==1)
				printf("[]");
			else
				printf("  ");
		}
		printf("\n");
		x++;
	}
	gotoxy(46,11);
	char b[]="ENTER YOUR LOGIN DETAILS";
	for(i=0;i<=strlen(b);i++)
	{
		putchar(b[i]);
		Sleep(20);
	}
	gotoxy(44,13);
	printf("ENTER YOUR ACCOUNT NUMBER..");
	gotoxy(53,15);
	scanf("%s",acno);
	gotoxy(45,18);
	printf("PRESS ANY KEY TO CONTINUE...");
	char c;
	c=getch();
	fscanf(a,"%s %d %f %s %s\n",d.accno,&d.pin,&d.amount,d.fname,d.lname);
	if(strcmp(acno,d.accno)!=0)
	{
			system("cls");
			frame_fix();
			gotoxy(48,14);
			printf("INVALID LOGIN CREDENTIALS");
			Sleep(2000);
			main_menu_fix();
	}
	system("cls");
	frame_fix();
	x=8;
	for(i=1;i<=13;i++)
	{
		gotoxy(33,x);
		for(j=1;j<=25;j++)
		{
			if(i==1||i==13)
				printf("[]");
			else if(j==25||j==1)
				printf("[]");
			else
				printf("  ");
		}
		printf("\n");
		x++;
	}
	gotoxy(46,11);
	for(i=0;i<=strlen(b);i++)
	{
		putchar(b[i]);
		Sleep(20);
	}
	gotoxy(44,13);
	printf("ENTER YOUR PIN..");
	gotoxy(53,15);
	scanf("%d",&pin);
	if(pin!=d.pin)
	{
			system("cls");
			frame_fix();
			gotoxy(48,14);
			printf("INVALID LOGIN CREDENTIALS");
			Sleep(2000);
			main_menu_fix();
	}
	else
	{
		for(i=3;i<115;i++)
		{
		gotoxy(i,21);
		printf("%c",177);
		if(i==40||i==80)
		Sleep(300);
		else
		Sleep(10);
		}		
		sub_menu();
	}
	fclose(a);
}
void sys_time()
{
	time_t t;
	time(&t);
	char *loc=ctime(&t);
	printf("%s",loc);
}
void sub_menu()
{	int op;
	system("cls");
	while(1)
		{
			
			int i;
			system("cls");
			system("COLOR 3F");
			frame();
			gotoxy(3,6);
			printf("[1] CASH DEPOSIT");
			gotoxy(3,10);
			printf("[2] FUND TRANSFER");
			gotoxy(3,14);
			printf("[3] PIN CHANGE");
			gotoxy(85,6);
			printf("[4] FAST CASH");
			gotoxy(85,10);
			printf("[5] CASH WITHDRAWL");
			gotoxy(85,14);
			printf("[6] BALANCE ENQUIRY");
			gotoxy(48,4);
			char *s="SELECT YOUR TRANSACTION";
			for(i=0;i<24;i++)
			{
				printf("%c",s[i]);
				Sleep(100);
			}
				
			scanf("%d",&op);
			switch(op)
			{
				case 1:
					{
						cash_deposit();
						break;
					}
				case 2:
					{
						fund_transfer();
						break;
					}
				case 3:
					{
						change_pin();
						break;
					}
				case 4:
					{
						fast_cash();
						break;
					}
				case 5:
					{
						cash_withdraw();
						break;
					}
				case 6:
					{
						balance_enquiry();
						break;
					}
				default:
					{
						gotoxy(48,14);
						printf("INVALID INPUT");
						Sleep(1000);
						main_menu_fix();
					}	
					
			}
		}
}
void cash_deposit()
{	struct data d;
	system("cls");
	float am;
	frame();
	system("COLOR 3F");
	FILE *fp;
	fp=fopen("accounts.txt","r");
	fscanf(fp,"%s %d %f %s %s",d.accno,&d.pin,&d.amount,d.fname,d.lname);
	fclose(fp);
	gotoxy(48,14);
	printf("-:CASH DEPOSIT:-");
	gotoxy(40,15);
	printf("Enter The amount to depoit:  ");
	scanf("%f",&am);
	system("cls");
	frame();
	gotoxy(48,14);
	printf("CASH DEPOSITED");
	gotoxy(40,15);
	printf("Previous Amount:	%f",d.amount);
	gotoxy(40,18);
	printf("Amount deposited:	%f",am);
	d.amount +=am;
	gotoxy(40,21);
	printf("New balance: 	    %f",d.amount);
	getch();
	fp=fopen("accounts.txt","w");
	fprintf(fp,"%s %d %f %s %s\n",d.accno,d.pin,d.amount,d.fname,d.lname);
	fclose(fp);	
}
void change_pin()
{
	struct data d;
	system("cls");
	int am;
	frame();
	system("COLOR 3F");
	FILE *fp;
	fp=fopen("accounts.txt","r");
	fscanf(fp,"%s %d %f %s %s",d.accno,&d.pin,&d.amount,d.fname,d.lname);
	fclose(fp);
	gotoxy(48,14);
	printf("-:CHANGE PIN:-");
	gotoxy(40,15);
	printf("Enter the old pin:  ");
	scanf("%d",&am);
	if(am==d.pin)
	{
	system("cls");
	frame();
	gotoxy(48,14);
	printf("-:CHANGE PIN:-");
	gotoxy(40,15);
	printf("Enter the new pin:	  ");
	scanf("%d",&d.pin);
	gotoxy(40,18);
	printf("Confirm the new pin:  ");
	scanf("%d",&d.pin);
	gotoxy(40,21);
	printf("PIN CHANGED SUCCESSFULL");
	getch();
	fp=fopen("accounts.txt","w");
	fprintf(fp,"%s %d %f %s %s\n",d.accno,d.pin,d.amount,d.fname,d.lname);
	fclose(fp);	
	}
	else
	{
	system("cls");
	gotoxy(48,14);
	printf("INVALID CREDENTIALS");
	Sleep(2000);
	}

}
void fund_transfer()
{
	struct data d;
	system("cls");
	float am;
	frame();
	system("COLOR 3F");
	FILE *fp;
	fp=fopen("accounts.txt","r");
	fscanf(fp,"%s %d %f %s %s",d.accno,&d.pin,&d.amount,d.fname,d.lname);
	fclose(fp);
	gotoxy(48,14);
	printf("-:FUND TRANSFER:-");
	gotoxy(40,15);
	printf("Enter The account where to deposit:  ");
	scanf("%d",&am);
	gotoxy(40,16);
	printf("Enter The amount to deposit:  		 ");
	scanf("%f",&am);
	system("cls");
	frame();
	gotoxy(48,14);
	printf("FUND TRANSFERRED");
	d.amount -=am;
	getch();
	fp=fopen("accounts.txt","w");
	fprintf(fp,"%s %d %f %s %s\n",d.accno,d.pin,d.amount,d.fname,d.lname);
	fclose(fp);	
}
int balance_enquiry()
{
	struct data d;
	system("cls");
	frame();
	system("COLOR 3F");
	FILE *fp;
	fp=fopen("accounts.txt","r");
	fscanf(fp,"%s %d %f %s %s",d.accno,&d.pin,&d.amount,d.fname,d.lname);
	fclose(fp);
	gotoxy(48,14);
	printf("-:BALANCE ENQUIRY:-");
	gotoxy(40,15);
	printf("Available Balance:    %f",d.amount);
	getch();
}
void cash_withdraw()
{
	struct data d;
	system("cls");
	float am;
	frame();
	system("COLOR 3F");
	FILE *fp;
	fp=fopen("accounts.txt","r");
	fscanf(fp,"%s %d %f %s %s",d.accno,&d.pin,&d.amount,d.fname,d.lname);
	fclose(fp);
	gotoxy(48,14);
	printf("-:CASH Withdraw:-");
	gotoxy(40,15);
	printf("Enter The amount to withdraw:  ");
	scanf("%f",&am);
	system("cls");
	frame();
	gotoxy(48,14);
	printf("CASH Withdrawl");
	gotoxy(40,15);
	printf("Previous Amount:	%f",d.amount);
	gotoxy(40,18);
	printf("Amount Withdrawl:	%f",am);
	d.amount -=am;
	gotoxy(40,21);
	printf("New balance: 	    %f",d.amount);
	getch();
	fp=fopen("accounts.txt","w");
	fprintf(fp,"%s %d %f %s %s\n",d.accno,d.pin,d.amount,d.fname,d.lname);
	fclose(fp);	
	
}
void fast_cash()
{			struct data d;
			system("cls");
			system("COLOR 3F");
			int am;
			frame();
			system("COLOR 3F");
			FILE *fp;
			fp=fopen("accounts.txt","r");
			fscanf(fp,"%s %d %f %s %s",d.accno,&d.pin,&d.amount,d.fname,d.lname);
			fclose(fp);	
			gotoxy(3,6);
			printf("[1] 50");
			gotoxy(3,10);
			printf("[2] 100");
			gotoxy(3,14);
			printf("[3] 200");
			gotoxy(3,18);
			printf("[4] 500");
			gotoxy(85,6);
			printf("[5] 1000");
			gotoxy(85,10);
			printf("[6] 2000");
			gotoxy(85,14);
			printf("[7] 5000");
			gotoxy(85,18);
			printf("[8] 100000");
			gotoxy(48,4);
			printf("SELECT YOUR OPTION");
			scanf("%d",&am);
			float temp=d.amount;
			switch(am)
			{
				case 1:if(d.amount>=50)
						{
							d.amount -=50;
						}break;
				case 2:if(d.amount>=100)
						{
							d.amount -=100;
						}break;
				case 3:if(d.amount>=200)
						{
							d.amount -=200;
						}break;
				case 4:if(d.amount>=500)
						{
							d.amount -=500;
						}break;
				case 5:if(d.amount>=1000)
						{
							d.amount -=1000;
						}break;
				case 6:if(d.amount>=2000)
						{
							d.amount -=2000;
						}break;
				case 7:if(d.amount>=5000)
						{
							d.amount -=5000;
						}break;
				case 8:if(d.amount>=10000)
						{
							d.amount -=10000;
						}break;
				
			}
		system("cls");
		frame();
		gotoxy(48,14);
		printf("CASH Withdrawl");
		gotoxy(40,15);
		printf("Previous Amount:	%f",temp);
		gotoxy(40,18);
		printf("New balance: 	    %f",d.amount);
		getch();
		fp=fopen("accounts.txt","w");
		fprintf(fp,"%s %d %f %s %s\n",d.accno,d.pin,d.amount,d.fname,d.lname);
		fclose(fp);			
}
void admin()
{
	system("cls");
	char name[6],pass[6];
	int c;
	system("COLOR 2F");
	frame_fix();
	gotoxy(43,5);
	int i;
	int j,x=8;
	for(i=1;i<=13;i++)
	{
		gotoxy(33,x);
		for(j=1;j<=25;j++)
		{
			if(i==1||i==13)
				printf("[]");
			else if(j==25||j==1)
				printf("[]");
			else
				printf("  ");
		}
		printf("\n");
		x++;
	}
	gotoxy(46,11);
	char b[]="ENTER YOUR LOGIN DETAILS";
	for(i=0;i<=strlen(b);i++)
	{
		putchar(b[i]);
		Sleep(20);
	}
	gotoxy(44,13);
	printf("ENTER USER NAME..");
	scanf("%s",name);
	gotoxy(44,15);
	printf("ENTER PASSWORD..");
	scanf("%s",pass);
	gotoxy(46,18);
	printf("PRESS ANY KEY TO CONTINUE...");
	char d;
	d=getch();
	if(strcmp(name,"admin")!=0 && strcmp(pass,"admin")!=0)
	{
		system("cls");
		gotoxy(48,14);
		printf("INVALID LOGIN CREDENTIALS");
		Sleep(2000);
		main_menu();
	}	
	system("cls");
	frame_fix();
	gotoxy(44,13);
	printf("[1] VIEW USERS");
	gotoxy(44,15);
	printf("[2] DELETE USERS");
	c=getch();
	if(c=='1')
	{
		view_user();
	}
	else if(c=='2')
	{
		delete_user();
	}
	else
	{
		system("cls");
		gotoxy(48,14);
		printf("INVALID LOGIN CREDENTIALS");
		Sleep(2000);
		main_menu();
	}
}
void view_user()
{	int i=0;
	struct data d;
	system("cls");
	system("COLOR 2F");
	FILE *a;
	frame_fix();
	a=fopen("accounts.txt","rw");
	gotoxy(46,11);
	char b[]="THE USERS ARE...";
	for(i=0;i<=strlen(b);i++)
	{
		putchar(b[i]);
		Sleep(20);
	}
	i=0;
	while(fscanf(a,"%s %d %f %s %s",d.accno,&d.pin,&d.amount,d.fname,d.lname)!=EOF)
	{
	gotoxy(44,13+i);
	printf("%d %s %s",i+1,d.fname,d.lname);
	i++;
	}
	fclose(a);
	
}
void delete_user()
{	struct data d;
	int i;
	system("cls");
	system("COLOR 2F");
	FILE *a;
	frame_fix();
	a=fopen("accounts.txt","rw");
	gotoxy(46,11);
	char b[]="SELECT THE USER TO DELETE...";
	for(i=0;i<=strlen(b);i++)
	{
		putchar(b[i]);
		Sleep(20);
	}
	i=0;
	while(fscanf(a,"%s %d %f %s %s",d.accno,&d.pin,&d.amount,d.fname,d.lname)!=EOF)
	{
	gotoxy(44,13+i);
	printf("%d %s %s \n",i+1,d.fname,d.lname);
	i++;
	}
	fclose(a);
	a=fopen("accounts.txt","rw");
	i=0;
	int c;
	scanf("%d",&c);
	while(fscanf(a,"%s %d %f %s %s",d.accno,&d.pin,&d.amount,d.fname,d.lname)!=EOF)
	{	
		if(i==c-1)
		{
		fprintf(a,"%s %d %f %s %s",d.accno,d.pin,d.amount," "," ");
		break;
		}
		i++;
	}
	fclose(a);	
}
void exit_atm()
{
	exit;
}

