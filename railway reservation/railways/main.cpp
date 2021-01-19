#include<iostream>
#include<conio.h>
#include<fstream>
#include<process.h>
#include<string>
#include<cstring>
#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
void searchmode();
void textcolor(int a)
{
    int b=a;
}
void admin();

void user();


class Train

{

public:

	int trno;
	int seat;
	char tr_name[20];
	char start[10];
	char enda[10];
	char pan;



void ent_tr()
{

	system("CLS");
    system("CLS");
	textcolor(14);
	cout<<"\n\t";
	printf("Enter train no. : ");
	cin>>trno;

	cout<<"\n\t";
	printf("Enter train name : ");
	gets(tr_name);

	cout<<"\n\t";
	printf("Enter starting point of the train : ");
	gets(start);

	cout<<"\n\t";
	printf("Enter ending point of the train : ");
	gets(enda);

	cout<<"\n\t";
	printf("Enter no. of seats : ");
	cin>>seat;

	cout<<"\n\t";
	printf("Pantry(Y/N) : ");
	cin>>pan;


}


void display()

{
	textcolor(12);
	cout<<"\n\t";
	printf("Train no. : ");
	cout<<trno;

	cout<<"\n\t";
	printf("Train name : ");
	cout<<tr_name;

	cout<<"\n\t";
	printf("Starting point of the train :");
	cout<<start;

	cout<<"\n\t";
	printf("Ending point of the train :");
	cout<<enda;

	cout<<"\n\t";
	printf("Total no. of seats:");
	cout<<seat;

	cout<<"\n\t";
	printf("Pantry(Y/N) :");
	cout<<pan;


}


void displayb()

{

	textcolor(12);
	cout<<"\n\t";
	printf("Train no. : ");
	cout<<trno;

	cout<<"\n\t";
	printf("Train name : ");
	cout<<tr_name;

	cout<<"\n\t";
	printf("Starting point of the train :");
	cout<<start;

	cout<<"\n\t";
	printf("Ending point of the train :");
	cout<<enda;

	cout<<"\n\t";
	printf("Pantry(Y/N) :");
	cout<<pan;


}



void modify()

{

	system("CLS");

	textcolor(14);
	cout<<"\n\t";
	printf("Train no. : ");
	cout<<trno;

	cout<<"\n\t";
	printf("Train name : ");
	cout<<tr_name;

	cout<<"\n\t";
	printf("Starting point of the train :");
	cout<<start;

	cout<<"\n\t";
	printf("Ending point of the train :");
	cout<<end;

	textcolor(13);
	cout<<"\n\t";
	printf("Enter new details");


	char train[20],st[20],en[20];
	int tno;

	textcolor(14);
	cout<<"\n\t";
	printf("Enter new train no.(Enter -1 to retain old one) : ");
	cin>>tno;

	cout<<"\n\t";
	printf("Enter train name (Enter '.' to retain old one) : ");
	gets(train);

	cout<<"\n\t";
	printf("Enter starting point of the train(Enter '.' to retain old one) :");
	gets(st);

	cout<<"\n\t";
	printf("Enter ending point of the train (Enter '.' to retain old one) ");
	gets(en);



	if(strcmp(train,".")!=0)
	{
		strcpy(tr_name,train);
	}

	if(strcmp(st,".")!=0)
	{
		strcpy(start,st);
	}

	if(strcmp(en,".")!=0)
	{
		strcpy(enda,en);
	}

	if(tno!=-1)
	{
		trno=tno;
	}


}


int train_no()

{
	return trno;
}


};



class book

{

       public:

       char passname[20];
       int age,seats;
       int pnr;
       int seatb;



book()
{
	pnr=500;
}



void pnrf()
{

	 textcolor(10);
	 pnr++;
	 cout<<"\n\t";
	 printf("PNR ");
	 cout<<pnr;
	 cout<<"\n";

}


void passread()

{

	textcolor(13);
	cout<<"\n\n\n\t";
	printf("Enter details");

	cout<<"\n\n\t";

	textcolor(14);
	printf("Enter no. of seats :");
	cin>>seatb;


	for(int i=0;i<seatb;i++)
	{
		pnrf();

		textcolor(10);
		cout<<"\n\t";
		printf("Passengers name : ");
		gets(passname);

		cout<<"\n\t";
		printf("Passenger age : ");
		cin>>age;

	}

}


void passdisplay()

{

	textcolor(9);
	cout<<"\n\n\t";
	printf("Details of passengers ");

	for(int i=0;i<seatb;i++)
	{

		textcolor(14);
		cout<<"\n\t";
		printf("Passengers name : ");
		cout<<passname;

		cout<<"\n\t";
		printf("Passenger age : ");
		cout<<age;

	}

}


int bpnr()
{

	return pnr;

}

};



Train T;
book B ;


	int ch,ad,book;
	fstream file;
	fstream fil;
	char ans='y';
	int trrno,pnrr;
	char found='f';



int main()
{

	do
	{

		system("CLS");
		textcolor(12);

		cout<<"\n\n\n";
		printf("********************************************************************************");
		cout<<"\n\t\t\t";

		textcolor(14);
		printf("Railway reservation system");

		textcolor(12);
		cout<<"\n\n";
		printf("********************************************************************************");


		textcolor(10);

		cout<<"\n\n\t\t";
		printf("1.Admin Mode");

		cout<<"\n\n\t\t";
		printf("2.User Mode");

		cout<<"\n\n\t\t";
		printf("3.Search Mode");

		cout<<"\n\n\t\t";
		printf("4.Exit");

		cin>>ch;


		switch(ch)
		{

			case 1: system("CLS");
				admin();
				break;

			case 2: system("CLS");
				user();
				break;
            case 3:{system("CLS");
                searchmode();
            }break;
			case 4: exit(0);
				break;

		}
		}  while(ch<4);


	getch();

return 0;
}


void admin()
{

	do
	{

	     system("CLS");
	     textcolor(10);
	     cout<<"\n\n";
	     printf("********************************************************************************");
	     cout<<"\n\t\t\t";

	     textcolor(14);
	     printf("Administrator mode");

	     textcolor(10);
	     cout<<"\n";
	     printf("********************************************************************************");

	     textcolor(12);
	     cout<<"\n\n\n\t\t";
	     printf("1.Enter new train details");

	     cout<<"\n\t\t";
	     printf("2.Display train details of a particular train ");

	     cout<<"\n\t\t";
	     printf("3.Modify train details ");

	     cout<<"\n\t\t";
	     printf("4.Delete train details");

	     cout<<"\n\t\t";
	     printf("5.Sign out");

	     cin>>ad;


	     switch(ad)
	     {

		    case 1 :{ system("CLS");

			     file.open("admin.dat",ios::binary | ios::app);

			     while(ans=='y')
			     {

				T.ent_tr();
				file.write((char*)&T,sizeof(T));

				textcolor(14);
				cout<<"\n\t";
				printf("Record added to file ");
				cout<<"\n\n\t";
				printf("Want to enter more records?(y/n)");
				cout<<"\n\t";
				cin>>ans;

				system("CLS");

			     }

			     file.close();}
			     break;

		     case 2 : {system("CLS");

			      file.open("admin.dat",ios::binary | ios::in);

			     textcolor(10);
			     cout<<"\n\t";
			     printf("Enter the train no. of the train whose record is to be displayed ");
			     cin>>trrno;

			     found='f';

			     while(!file.eof())
			     {

				file.read((char*)&T,sizeof(T));
				if(T.train_no()==trrno)

				{
					T.display();
					found='t';
					break;
				}

			     }

			     if(found=='f')
			     {
					textcolor(12);
					cout<<"\n";
					printf("Train no. not found ");
			     }

			     file.close();
			     getch();}
			     break;

		     case 3: {system("CLS");

			     file.open("admin.dat",ios::binary | ios::out | ios::in);

			     long pos;

			     textcolor(10);
			     cout<<"\n\t";
			     printf("Enter the train no. of the train whose record is to be modified ");
			     cin>>trrno;

			     found='f';

			     while(!file.eof())
			     {
				    pos=file.tellg();
				    file.read((char*)&T,sizeof(T));
				    if(T.train_no()==trrno)
				    {

						T.modify();
						file.seekg(pos);
						file.write((char*)&T,sizeof(T));
						found='t';
						break;
				    }
			      }

			      if(found=='f')
			      {
					textcolor(12);
					cout<<"\n\t";
					printf("Record not found ! ");
			      }

			      file.close();
			      getch();}
			      break;


		     case 4 :   {system("CLS");

				char confirm='n';

			      file.open("admin.dat",ios::binary | ios::in);
			      ofstream ofile("temp.dat",ios::binary | ios::out);

			      textcolor(10);
			      cout<<"\n\t";
			      printf("Enter the train no. of the train whose record is to be deleted ");
			      cin>>trrno;

			      found='f';

			      while(!file.eof())
			      {
					file.read((char*)&T,sizeof(T));
					if (file.eof())
					break;
					if(T.train_no()==trrno)
					{

						T.display();
						found='t';

						textcolor(14);
						cout<<"\n\t";
						printf("Are you sure, you want to delete this record ?(y/n) ");
						cin>>confirm;

						if(confirm=='n')

						ofile.write((char*)&T,sizeof(T));

					 }
					 else

					 ofile.write((char*)&T,sizeof(T));

			      }

			      if(found=='f')
			      {
					textcolor(12);
					cout<<"\n\t";
					printf("Record not found");
			      }

			      getch();
			      file.close();
			      ofile.close();

			      remove("admin.dat");
			      rename("temp.dat","admin.dat");}

			      break;

		     case 5: return;
			     break;

		     }
		     }while(ad<6);
}




void user()
{

	do
	{

		  system("CLS");

		  textcolor(12);
		  cout<<"\n\n";
		  printf("********************************************************************************");

		  textcolor(10);
		  cout<<"\n\t\t\t\t";
		  printf("User mode");

		  textcolor(12);
		  cout<<"\n";
		  printf("********************************************************************************");

		  textcolor(14);
		  cout<<"\n\n\n\t\t";
		  printf("1.Book ticket");

		  cout<<"\n\t\t";
		  printf("2.View ticket");

		  cout<<"\n\t\t";
		  printf("3.Delete ticket");

		  cout<<"\n\t\t";
		  printf("4.Sign out");

		  cin>>book;


		  switch(book)
		  {

			case 1: system("CLS");

				file.open("admin.dat",ios::binary | ios::in);
				fil.open("ticket.dat",ios::binary |ios::app );

				textcolor(10);
				cout<<"\n\t";
				printf("Enter the train no. of the train where you want to book ticket ");
				cin>>trrno;

				found='f';

				while(!file.eof())
				{
					  file.read((char*)&T,sizeof(T));
					  if(T.train_no()==trrno)
					  {
						     textcolor(14);
						     cout<<"\n\t";
						     printf("Details of the train : ");
						     T.displayb();

						     B.passread();
						     fil.write((char*)&B,sizeof(B));
						     found='t';
						     break;
					  }

				}

				if(found=='f')
				{
					textcolor(12);
					cout<<"\n\t";
					printf("Train no. not found ");
				 }

				file.close();
				fil.close();
				getch();

				break;

			case 2 :system("CLS");

				fil.open("ticket.dat",ios::binary | ios ::in );

				textcolor(10);
				cout<<"\n\t";
				printf("Enter the pnr of the ticket whose record is to be displayed ");
				cin>>pnrr;



				while(!fil.eof())
				{
					fil.read((char*)&B,sizeof(B));
					if(B.bpnr()==pnrr)
					{

						B.passdisplay();
						found='t';
						break;
					}
				}


				if(found=='f')

					textcolor(12);
					cout<<"\n\t";
					printf("Ticket not found ");

				getch();
				fil.close();

				break;

		       case 3:  {system("CLS");

				char confirm='n';

			       file.open("ticket.dat",ios::binary | ios::app);
			       ofstream ofile("temp1.dat",ios::binary | ios::app);

			       textcolor(10);
			       cout<<"\n\t";
			       printf("Enter the pnr of the ticket which has to be deleted ");
			       cin>>pnrr;

			       found='f';

			       while(!fil.eof())
			       {
					fil.read((char*)&B,sizeof(B));
					if(B.bpnr()==pnrr)
					{

						B.passdisplay();
						found='t';

						textcolor(14);
						cout<<"\n\t";
						printf("Are you sure, you want to delete this record ?(y/n) ");
						cin>>confirm;

						if(confirm=='n')

						ofile.write((char*)&B,sizeof(B));

					}

					else

					ofile.write((char*)&B,sizeof(B));
			      }

			     if(found=='f')
			     {
						textcolor(12);
						cout<<"\n\t";
						printf("Record not found");
			     }

			     getch();
			     fil.close();
			     ofile.close();

			     remove("ticket.dat");
			     rename("temp1.dat","ticket.dat");}

			     break;

		     case 4: return;
			     break;

		    }

		    }while(book<5);


}

