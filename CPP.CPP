
//                      project  road and track



#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>
#include<fstream.h>
	     // all function declared


void create(void);
void log(void);
void lamborghini(void);
void astonmartin(void);
void ferrari(void);
void ford(void);
void chevy(void);
void bmw(void);
void aventador(void);
void estoq(void);
void hurracan(void);
void secondpage(void);
void dbs(void);
void rapide(void);
void vanquish(void);
void m5(void);
void m6(void);
void i8(void);
void corvette(void);
void boss(void);
void gt(void);
void sh(void);
void f12(void);
void enzo(void);
void la(void);
void camaro(void);
void impala(void);

			 //  class declared


class user
{
char name[20];
char address[20];
char login[20];
int password;

public:
void getdata()
{
cout<<"NAME = ";
gets(name);cout<<endl;
cout<<"ADDRESS = ";                        // to hold the details of user
gets(address);cout<<endl;
cout<<"EMAIL ID = ";
gets(login);cout<<endl;
cout<<"PASSWORD = ";
cin>>password; cout<<endl;

}

void putdata()
{
cout<<"name = ";
puts(name);cout<<endl;
cout<<"address = ";
puts(address);cout<<endl;
cout<<"login id = ";
puts(login);cout<<endl;
}
int getpass()
{
 return password;
}
};
user u;








		      /* main function starts*/


main()
{
  clrscr();
  int i,j,n,c;
  char ch,a;
	       /* border design code*/

  cout<<"\n";
  for(i=0;i<=37;i++)
  {
   delay(10);
   cout<<" #";
  }
  cout<<endl;
  for(i=1;i<=20;i++)
  {
   delay(10);
   cout<<" #                                                                         #"<<endl;
  }
  for(i=0;i<=37;i++)
  {
   delay(10);
   cout<<" #";
  }
  cout<<endl;

		  /* printing the first page of showroom*/


  gotoxy(8,5);
  cout<<"===== =====    =    ===    / /  ===== =====    =    ===== =   =";//<<endl;
  gotoxy(8,6);
  cout<<"=  =  =   =   = =   =  =   / /    =   =  =    = =   =     = =  ";//<<endl;
  gotoxy(8,7);
  cout<<"= =   =   =  =====  =   =  / /    =   = =    =====  =     ==   ";//<<endl;
  gotoxy(8,8);
  cout<<"=  =  =   = =     = =  =   / /    =   =  =  =     = =     = =  ";//<<endl;
  gotoxy(8,9);
  cout<<"=   = ===== =     = ===    / /    =   =   = =     = ===== =   =";//<<endl;
  gotoxy(8,12);
  cout<<"          WELCOME TO THE WORLD OF HIGH-END AUTOTECHS. "<<endl;
  gotoxy(15,13);
  cout<<"WE HAVE WIDE VARIETY OF CHOICES IN THE AUTO-WORLD "<<endl;
  gotoxy(16,15);
  cout<<"enter e to exit to the program and p to proceed"<<endl;
  gotoxy(33,16);
  cout<<" - - - - - -  "<<endl;
  gotoxy(33,17);
  cout<<"|           |"<<endl;
  gotoxy(33,18);
  cout<<" - - - - - -  "<<endl;
  gotoxy(39,17);
  cin>>ch;

		  /* switch to exit/proceed to second page*/

  switch(ch)
  {
   case 'e': exit(0);
   break;
   case 'p':
   {
    gotoxy(25,19);
    cout<<"Please wait...Loading files...";
    for(j=0;j<8;j++)
    {
     gotoxy(38,21);
     cout<<"|";
     delay(100);
     gotoxy(38,21);
     cout<<" ";
     gotoxy(39,20);
     cout<<"-";
     delay(100);
     gotoxy(39,20);
     cout<<" ";                 // shows loading icon
     gotoxy(40,21);
     cout<<"|";
     delay(100);
     gotoxy(40,21);
     cout<<" ";
     gotoxy(39,22);
     cout<<"-";
     delay(100);
     gotoxy(39,22);
     cout<<" ";
    }
    /*for(j=0;j<=2;j++)
    {
     for(i=1;i<=8;i++)
     {
      gotoxy(32+i,19);
      delay(100);
      cout<<"||";
     }
     for(i=1;i<=9;i++)
     {gotoxy(32+i,19);
     delay(100);
     cout<<" ";
     }
    }*/
    secondpage();

   }

  }
  getch();
}

		   /* ending of main function*/



void secondpage()                     //code for the whole secondpage
{
 int i,n;
 clrscr();
		 // border design code

 cout<<"\n";
 for(i=0;i<=37;i++)
 {
   cout<<" #";
 }
 cout<<endl;
 for(i=1;i<=20;i++)
 {
  cout<<" #                                                                         #"<<endl;
 }
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;

		      // declaring name of car company

 gotoxy(60,4);
 cout<<"EXIT - 99";
 gotoxy(8,12);
 cout<<"* * * * * * * * *                        * * * * * * * * *"<<endl;
 gotoxy(8,13);
 cout<<"*               *                        *               * "<<endl;
 gotoxy(8,14);
 cout<<"* * * * * * * * *                        * * * * * * * * *"<<endl;
 gotoxy(8,16);
 cout<<"* * * * * * * * *                        * * * * * * * * *"<<endl;
 gotoxy(8,17);
 cout<<"*               *                        *               * "<<endl;
 gotoxy(8,18);
 cout<<"* * * * * * * * *                        * * * * * * * * *"<<endl;
 gotoxy(8,20);
 cout<<"* * * * * * * * *                        * * * * * * * * *"<<endl;
 gotoxy(8,21);
 cout<<"*               *                        *               * "<<endl;
 gotoxy(8,22);
 cout<<"* * * * * * * * *                        * * * * * * * * *"<<endl;
 gotoxy(9,13);
 cout<<" 1.LAMBORGHINI"<<endl;
 gotoxy(9,17);
 cout<<" 2.ASTON MARTIN"<<endl;
 gotoxy(12,21);
 cout<<" 3.BMW"<<endl;
 gotoxy(52,13);
 cout<<"4.CHEVROLET"<<endl;
 gotoxy(54,17);
 cout<<"5.FORD"<<endl;
 gotoxy(54,21);
 cout<<"6.FERRARI"<<endl;
 gotoxy(20,6);
 cout<<"Enter the serial no of your choice"<<endl;
 gotoxy(30,7);
 cout<<" - - - - - -  "<<endl;
 gotoxy(30,8);
 cout<<"|           |"<<endl;
 gotoxy(30,9);
 cout<<" - - - - - -  "<<endl;
 gotoxy(35,8);
 cin>>n;

	     // comparing for the choice of car manfactuer

 if(n==99)
 {
 exit(0);
 }
 else if(n==1)
 {
  lamborghini();
 }
 else if(n==2)
 {
  astonmartin();
 }
 else if(n==3)
 {
  bmw();
 }
 else if(n==4)
 {
  chevy();
 }
 else if(n==5)
 {
  ford();
 }
 else if(n==6)
 {
  ferrari();
 }
}                        // end of the second page function




		      // lamborghini function


void lamborghini()
{
 int i,c;
 clrscr();
			     //border design code

 cout<<"\n";
 for(i=0;i<=37;i++)
 {
   cout<<" #";
 }
 cout<<endl;
 for(i=1;i<=20;i++)
 {
  cout<<" #                                                                         #"<<endl;
 }
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
		      // options to exit/go back secondpage

 gotoxy(5,3);
 cout<<"BACK - 10";
 gotoxy(60,3);
 cout<<"EXIT - 99";
 gotoxy(5,22);
 cout<<"CREATE AN ACCOUNT - 44";
 gotoxy(60,22);
 cout<<"LOGIN - 55";

 gotoxy(8,5);
 cout<<"@     @    @@  @@ @@  @@@@@ @@   @@@@@ @  @ @@@@@ @@   @ @@@@@"<<endl;
 gotoxy(8,6);
 cout<<"@    @ @   @ @@ @ @ @ @   @ @ @  @     @  @   @   @ @  @   @  "<<endl;
 gotoxy(8,7);
 cout<<"@   @@@@@  @    @ @@  @   @ @@   @   @ @@@@   @   @  @ @   @  "<<endl;
 gotoxy(8,8);
 cout<<"@@@ @   @  @    @ @ @ @@@@@ @ @  @@@@@ @  @ @@@@@ @   @@ @@@@@"<<endl;
 gotoxy(8,9);
 cout<<"                  @@        @  @       @  @                   "<<endl;
 gotoxy(8,16);
 cout<<"* * * * * * * * * *   * * * * * * * * * *   * * * * * * * * * *"<<endl;
 gotoxy(8,17);
 cout<<"*                 *   *                 *   *                 * "<<endl;
 gotoxy(8,18);
 cout<<"* * * * * * * * * *   * * * * * * * * * *   * * * * * * * * * *"<<endl;
 gotoxy(9,17);
 cout<<" 1.Aventador"<<endl;
 gotoxy(32,17);
 cout<<"2.Huracan"<<endl;
 gotoxy(54,17);
 cout<<"3.Estoque"<<endl;
 gotoxy(16,11);
 cout<<"Enter the serial number of your choice"<<endl;
 gotoxy(30,12);
 cout<<" - - - - - -  "<<endl;
 gotoxy(30,13);
 cout<<"|           |"<<endl;
 gotoxy(30,14);
 cout<<" - - - - - -  "<<endl;
 gotoxy(36,13);
 cin>>c;

		   // comparing for the choice of lamborghini car

 if(c==99)
 { exit(0);
 }
 else if(c==1)
 {
  aventador();
 }
 else if(c==2)
 {
  hurracan();
 }
 else if(c==3)
 {
  estoq();
 }
 else if(c==10)
 {
  secondpage();
 }
 else if(c==44)
 {
  create();

 }
 else if(c==55)
 {
  log();
 }

}

	      // aventador function


void aventador()
{
 clrscr();
 int i,c;
 cout<<"\n";
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
 for(i=1;i<=20;i++)
 {
   cout<<" #                                                                         #"<<endl;
 }
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
 gotoxy(28,2);
 cout<<"LAMBORGHINI AVENTADOR"<<endl;
 gotoxy(22,3);
 cout<<"Manufacturer:-      Lamborghini"<<endl;
 gotoxy(22,4);
 cout<<"Assembly:-          Italy"<<endl;
 gotoxy(22,5);
 cout<<"Class:-             Sports class"<<endl;
 gotoxy(22,6);
 cout<<"Engine:-            6.5L V12"<<endl;
 gotoxy(22,7);
 cout<<"Transmission:-      7-speed semi automatic "<<endl;
 gotoxy(22,8);
 cout<<"Max Power:-         690bhp"<<endl;
 gotoxy(22,9);
 cout<<"Max Torque:-        689 NM"<<endl;
 gotoxy(22,10);
 cout<<"Top Speed:-         350 km/h"<<endl;
 gotoxy(22,11);
 cout<<"0-100 km/h:-        in just 2.9 s"<<endl;
 gotoxy(5,3);
 cout<<"BACK - 10";
 gotoxy(60,3);
 cout<<"EXIT - 99";
 gotoxy(5,22);
 cout<<"CREATE AN ACCOUNT - 44";
 gotoxy(60,22);
 cout<<"LOGIN - 55";
 gotoxy(30,12);
 cout<<" - - - - - -  "<<endl;
 gotoxy(30,13);
 cout<<"|           |"<<endl;
 gotoxy(30,14);
 cout<<" - - - - - -  "<<endl;
 gotoxy(36,13);
 cin>>c;
 if(c==10)
 {
  lamborghini();                // back to lamborghini function
 }
 else if(c==99)
 {
  exit(0);
 }
 else if(c==44)
 {
  create();

 }
 else if(c==55)
 {
  log();
 }
}


		 // hurracan function

void hurracan()
{
 clrscr();
 int i,c;

		   // border design code

 cout<<"\n";
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
 for(i=1;i<=20;i++)
 {
  cout<<" #                                                                         #"<<endl;
 }
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;

		     // car details

 gotoxy(28,2);
 cout<<"LAMBORGHINI HURACAN"<<endl;
 gotoxy(22,3);
 cout<<"Manufacturer:-      Lamborghini"<<endl;
 gotoxy(22,4);
 cout<<"Assembly:-          Italy"<<endl;
 gotoxy(22,5);
 cout<<"Class:-             Sports class(S)"<<endl;
 gotoxy(22,6);
 cout<<"Engine:-            5.2L V10"<<endl;
 gotoxy(22,7);
 cout<<"Transmission:-      7-speed dual clutch automated"<<endl;
 gotoxy(22,8);
 cout<<"Max Power:-         602bhp"<<endl;
 gotoxy(22,9);
 cout<<"Max Torque:-        560 NM"<<endl;
 gotoxy(22,10);
 cout<<"Top Speed:-         325 km/h"<<endl;
 gotoxy(22,11);
 cout<<"0-100 km/h:-        in just 2.5 s"<<endl;
 gotoxy(5,3);
 cout<<"BACK - 10";
 gotoxy(60,3);
 cout<<"EXIT - 99";
 gotoxy(5,22);
 cout<<"CREATE AN ACCOUNT - 44";
 gotoxy(60,22);
 cout<<"LOGIN - 55";
 gotoxy(30,12);
 cout<<" - - - - - -  "<<endl;
 gotoxy(30,13);
 cout<<"|           |"<<endl;
 gotoxy(30,14);
 cout<<" - - - - - -  "<<endl;
 gotoxy(36,13);
 cin>>c;
 if(c==10)
 {
  lamborghini();
 }
 else if(c==99)
 {
  exit(0);
 }
 else if(c==44)
 {
  create();

 }
 else if(c==55)
 {
  log();
 }
}



	   // estoque function

void estoq()
{
 clrscr();
 int i,c;

			  // border design code

 cout<<"\n";
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
 for(i=1;i<=20;i++)
 {
  cout<<" #                                                                         #"<<endl;
 }
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;

			    // car details

 gotoxy(28,2);
 cout<<"LAMBORGHINI ESTOQUE"<<endl;
 gotoxy(22,3);
 cout<<"Manufacturer:-      Lamborghini"<<endl;
 gotoxy(22,4);
 cout<<"Assembly:-          Italy"<<endl;
 gotoxy(22,5);
 cout<<"Class:-             Full size luxary car"<<endl;
 gotoxy(22,6);
 cout<<"Engine:-            5.2L V10"<<endl;
 gotoxy(22,7);
 cout<<"Transmission:-      7-speed Twin-clutch gearbox "<<endl;
 gotoxy(22,8);
 cout<<"Max Power:-         602bhp"<<endl;
 gotoxy(22,9);
 cout<<"Max Torque:-        560 NM"<<endl;
 gotoxy(22,10);
 cout<<"Top Speed:-         325 km/h"<<endl;
 gotoxy(22,11);
 cout<<"0-100 km/h:-        in just 2.5 s"<<endl;
 gotoxy(5,3);
 cout<<"BACK - 10";
 gotoxy(60,3);
 cout<<"EXIT - 99";
 gotoxy(5,22);
 cout<<"CREATE AN ACCOUNT - 44";
 gotoxy(60,22);
 cout<<"LOGIN - 55";
 gotoxy(30,12);
 cout<<" - - - - - -  "<<endl;
 gotoxy(30,13);
 cout<<"|           |"<<endl;
 gotoxy(30,14);
 cout<<" - - - - - -  "<<endl;
 gotoxy(36,13);
 cin>>c;
 if(c==10)
 {
  lamborghini();
 }
 else if(c==99)
 {
  exit(0);
 }
 else if(c==44)
 {
  create();

 }
 else if(c==55)
 {
  log();
 }

}

		// aston martin function



void astonmartin()
{
  clrscr();
  int i,c;
  cout<<"\n";
  for(i=0;i<=37;i++)
  {
   cout<<" #";
  }                               // border design code
  cout<<endl;
  for(i=1;i<=20;i++)
  {
   cout<<" #                                                                         #"<<endl;
  }
  for(i=0;i<=37;i++)
  {
   cout<<" #";
  }
  cout<<endl;


  gotoxy(5,3);
 cout<<"BACK - 10";
 gotoxy(60,3);
 cout<<"EXIT - 99";
  gotoxy(5,22);
 cout<<"CREATE AN ACCOUNT - 44";
 gotoxy(60,22);
 cout<<"LOGIN - 55";
  gotoxy(4,5);
  cout<<"   @    @@@@ @@@@@ @@@@@ @@   @   @@  @@   @   @@   @@@@@ @@@@@ @@   @ "<<endl;
  gotoxy(4,6);
  cout<<"  @ @   @      @   @   @ @ @  @   @ @@ @  @ @  @ @    @     @   @ @  @ "<<endl;
  gotoxy(4,7);
  cout<<" @@@@@  @@@@   @   @   @ @  @ @   @    @ @@@@@ @@     @     @   @  @ @ "<<endl;
  gotoxy(4,8);
  cout<<" @   @     @   @   @@@@@ @   @@   @    @ @   @ @ @    @   @@@@@ @   @@ "<<endl;
  gotoxy(4,9);
  cout<<"	   @@@@                                   @  @         "<<endl;
  gotoxy(8,16);
  cout<<"* * * * * * * * * *   * * * * * * * * * *   * * * * * * * * * *"<<endl;
  gotoxy(8,17);
  cout<<"*                 *   *                 *   *                 * "<<endl;
  gotoxy(8,18);
  cout<<"* * * * * * * * * *   * * * * * * * * * *   * * * * * * * * * *"<<endl;
  gotoxy(9,17);
  cout<<"  1.DBS V12"<<endl;
  gotoxy(32,17);
  cout<<"   2.Rapide"<<endl;
  gotoxy(54,17);
  cout<<"  3.Vanquish"<<endl;
  gotoxy(18,11);
  cout<<"Enter the serial number of your choice"<<endl;
  gotoxy(30,12);
  cout<<" - - - - - -  "<<endl;
  gotoxy(30,13);
  cout<<"|           |"<<endl;
  gotoxy(30,14);
  cout<<" -  - - - - -  "<<endl;
  gotoxy(36,13);
  cin>>c;

			    // choosing an aston martin car



  if(c==99)
  {
   exit(0);
  }
  else if(c==10)
  {
     secondpage();
  }
  else if(c==1)
  {
   dbs();
  }
  else if(c==2)
  {
   rapide();
  }
  else if (c==3)
  {
   vanquish();
  }
  else if(c==44)
 {
  create();

 }
 else if(c==55)
 {
  log();
 }

}



void dbs()
{
  clrscr();
  int i,c;


  cout<<"\n";
  for(i=0;i<=37;i++)          // border design code
  {
   cout<<" #";
  }
  cout<<endl;
  for(i=1;i<=20;i++)
  {
   cout<<" #                                                                         #"<<endl;
  }
  for(i=0;i<=37;i++)
  {
   cout<<" #";
  }
  cout<<endl;

		// car details


  gotoxy(28,2);
  cout<<"ASTON MARTIN DBS V12"<<endl;
  gotoxy(22,3);
  cout<<"Manufacturer:-      Aston martin"<<endl;
  gotoxy(22,4);
  cout<<"Assembly:-          England"<<endl;
  gotoxy(22,5);
  cout<<"Class:-             Grand tourer(S)"<<endl;
  gotoxy(22,6);
  cout<<"Engine:-            5.395L V12"<<endl;
  gotoxy(22,7);
  cout<<"Transmission:-      6- speed automatic "<<endl;
  gotoxy(22,8);
  cout<<"Max Power:-         510bhp"<<endl;
  gotoxy(22,9);
  cout<<"Max Torque:-        569 NM"<<endl;
  gotoxy(22,10);
  cout<<"Top Speed:-         307 km/h"<<endl;
  gotoxy(22,11);
  cout<<"0-100 km/h:-        in just 4.3 s"<<endl;
  gotoxy(5,3);
  cout<<"BACK - 10";
  gotoxy(60,3);
  cout<<"EXIT - 99";
  gotoxy(5,22);
 cout<<"CREATE AN ACCOUNT - 44";
 gotoxy(60,22);
 cout<<"LOGIN - 55";
 gotoxy(30,12);
 cout<<" - - - - - -  "<<endl;
 gotoxy(30,13);
 cout<<"|           |"<<endl;
 gotoxy(30,14);
 cout<<" - - - - - -  "<<endl;
 gotoxy(36,13);
 cin>>c;
 if(c==10)
 {
  astonmartin();
 }
 else if(c==99)
 {
  exit(0);
 }
 else if(c==44)
 {
  create();

 }
 else if(c==55)
 {
  log();
 }
}

			  // rapide function

void rapide()
{
 clrscr();
 int i,c;


 cout<<"\n";
 for(i=0;i<=37;i++)            // border design code

 {
  cout<<" #";
 }
 cout<<endl;
 for(i=1;i<=20;i++)
 {
  cout<<" #                                                                         #"<<endl;
 }

 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;

		    // car details

 gotoxy(28,2);
 cout<<"ASTON MARTIN RAPIDE"<<endl;
 gotoxy(22,3);
 cout<<"Manufacturer:-      Aston martin"<<endl;
 gotoxy(22,4);
 cout<<"Assembly:-          England"<<endl;
 gotoxy(22,5);
 cout<<"Class:-             Full size luxary car"<<endl;
 gotoxy(22,6);
 cout<<"Engine:-            5.9L V12"<<endl;
 gotoxy(22,7);
 cout<<"Transmission:-      8- speed automatic "<<endl;
 gotoxy(22,8);
 cout<<"Max Power:-         552bhp"<<endl;
 gotoxy(22,9);
 cout<<"Max Torque:-        569 NM"<<endl;
 gotoxy(22,10);
 cout<<"Top Speed:-         601 km/h"<<endl;
 gotoxy(22,11);
 cout<<"0-100 km/h:-        in just 4.4 s"<<endl;
 gotoxy(5,3);
 cout<<"BACK - 10";
 gotoxy(60,3);
 cout<<"EXIT - 99";
 gotoxy(5,22);
 cout<<"CREATE AN ACCOUNT - 44";
 gotoxy(60,22);
 cout<<"LOGIN - 55";
 gotoxy(30,12);
 cout<<" - - - - - -  "<<endl;
 gotoxy(30,13);
 cout<<"|           |"<<endl;
 gotoxy(30,14);
 cout<<" - - - - - -  "<<endl;
 gotoxy(36,13);
 cin>>c;
 if(c==10)
 {
  astonmartin();
 }
 else if(c==99)
 {
  exit(0);
 }
 else if(c==44)
 {
  create();

 }
 else if(c==55)
 {
  log();
 }
}


		       //	vanquish function


void vanquish()
{
 clrscr();
 int i,c;


 cout<<"\n";
 for(i=0;i<=37;i++)
 {                             // border design code
  cout<<" #";
 }
 cout<<endl;
 for(i=1;i<=20;i++)
 {
  cout<<" #                                                                         #"<<endl;
 }
 for(i=0;i<=37;i++)                         //  car details
 {
  cout<<" #";
 }
 cout<<endl;
 gotoxy(28,2);
 cout<<"ASTON MARTIN VANQUISH"<<endl;
 gotoxy(22,3);
 cout<<"Manufacturer:-      Aston martin"<<endl;
 gotoxy(22,4);
 cout<<"Assembly:-          England"<<endl;
 gotoxy(22,5);
 cout<<"Class:-             Grand tourer(S)"<<endl;
 gotoxy(22,6);
 cout<<"Engine:-            5.9L V12"<<endl;
 gotoxy(22,7);
 cout<<"Transmission:-      8-speed touchtronic3 automatic "<<endl;
 gotoxy(22,8);
 cout<<"Max Power:-         565bhp"<<endl;
 gotoxy(22,9);
 cout<<"Max Torque:-        620 NM"<<endl;
 gotoxy(22,10);
 cout<<"Top Speed:-         324 km/h"<<endl;
 gotoxy(22,11);
 cout<<"0-100 km/h:-        in just 3.8 s"<<endl;
 gotoxy(5,3);
 cout<<"BACK - 10";
 gotoxy(60,3);
 cout<<"EXIT - 99";
 gotoxy(5,22);
 cout<<"CREATE AN ACCOUNT - 44";
 gotoxy(60,22);
 cout<<"LOGIN - 55";
 gotoxy(30,12);
 cout<<" - - - - - -  "<<endl;
 gotoxy(30,13);
 cout<<"|           |"<<endl;
 gotoxy(30,14);
 cout<<" - - - - - -  "<<endl;
 gotoxy(36,13);
 cin>>c;
 if(c==10)
 {
  astonmartin();
 }
 else if(c==99)
 {
  exit(0);
 }
 else if(c==44)
 {
  create();

 }
 else if(c==55)
 {
  log();
 }
}


			       // bmw function


void bmw()
{
 clrscr();
 int i,c;

	       // border design code

 cout<<"\n";
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
 for(i=1;i<=20;i++)
 {
  cout<<" #                                                                         #"<<endl;
 }
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
 gotoxy(5,3);
 cout<<"BACK - 10";
 gotoxy(60,3);
 cout<<"EXIT - 99";
 gotoxy(5,22);
 cout<<"CREATE AN ACCOUNT - 44";
 gotoxy(60,22);
 cout<<"LOGIN - 55";
 gotoxy(18,5);
 cout<<"       @@   @@  @@  @      @ "<<endl;
 gotoxy(18,6);
 cout<<"       @ @  @ @@ @  @      @  "<<endl;
 gotoxy(18,7);
 cout<<"       @@   @    @   @ @@ @   "<<endl;
 gotoxy(18,8);
 cout<<"       @ @  @    @    @  @    "<<endl;
 gotoxy(18,9);
 cout<<"       @@                     "<<endl;
 gotoxy(8,16);
 cout<<"* * * * * * * * * *   * * * * * * * * * *   * * * * * * * * * *"<<endl;
 gotoxy(8,17);
 cout<<"*                 *   *                 *   *                 * "<<endl;
 gotoxy(8,18);
 cout<<"* * * * * * * * * *   * * * * * * * * * *   * * * * * * * * * *"<<endl;
 gotoxy(9,17);
 cout<<"   1.F10 M5"<<endl;
 gotoxy(32,17);
 cout<<"     2.M6"<<endl;
 gotoxy(54,17);
 cout<<"     3.I8"<<endl;
 gotoxy(16,11);
 cout<<"Enter the serial number of your choice"<<endl;
 gotoxy(30,12);
 cout<<" - - - - - -  "<<endl;
 gotoxy(30,13);
 cout<<"|           |"<<endl;
 gotoxy(30,14);
 cout<<" - - - - - -  "<<endl;
 gotoxy(36,13);
 cin>>c;
 if(c==99)
 {
 exit(0);
 }
 else if(c==10)
 {
   secondpage();
 }
 else if(c==1)
 {                            // choosing car from bmw
  m5();
 }
 else if(c==2)
 {
  m6();
 }
 else if(c==3)
 {
  i8();
 }
 else if(c==44)
 {
  create();

 }
 else if(c==55)
 {
  log();
 }
}


			       // m5 function


void m5()
{
 clrscr();
 int i,c;



 cout<<"\n";
 for(i=0;i<=37;i++)             // border design code
 {
  cout<<" #";
 }
 cout<<endl;
 for(i=1;i<=20;i++)
 {
  cout<<" #                                                                         #"<<endl;
 }
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
		       // car details

 gotoxy(28,2);
 cout<<"BMW F10 M5"<<endl;
 gotoxy(22,3);
 cout<<"Manufacturer:-      BMW"<<endl;
 gotoxy(22,4);
 cout<<"Assembly:-          Germany"<<endl;
 gotoxy(22,5);
 cout<<"Class:-             Sports sedan"<<endl;
 gotoxy(22,6);
 cout<<"Engine:-            4.4L V8 twin turbo petrol "<<endl;
 gotoxy(22,7);
 cout<<"Transmission:-      7-speed dual clutch transmission "<<endl;
 gotoxy(22,8);
 cout<<"Max Power:-         560bhp"<<endl;
 gotoxy(22,9);
 cout<<"Max Torque:-        680 NM"<<endl;
 gotoxy(22,10);
 cout<<"Top Speed:-         300 km/h"<<endl;
 gotoxy(22,11);
 cout<<"0-100 km/h:-        in just 4.2 s"<<endl;
 gotoxy(5,3);
 cout<<"BACK - 10";
 gotoxy(60,3);
 cout<<"EXIT - 99";
 gotoxy(5,22);
 cout<<"CREATE AN ACCOUNT - 44";
 gotoxy(60,22);
 cout<<"LOGIN - 55";
  gotoxy(30,12);
 cout<<" - - - - - -  "<<endl;
 gotoxy(30,13);
 cout<<"|           |"<<endl;
 gotoxy(30,14);
 cout<<" - - - - - -  "<<endl;
 gotoxy(36,13);
 cin>>c;
 if(c==10)
 {
  bmw();
 }
 else if(c==99)
 {
  exit(0);
 }
 else if(c==44)
 {
  create();

 }
 else if(c==55)
 {
  log();
 }
}
				    // m6 function



void m6()
{
 clrscr();
 int i,c;


 cout<<"\n";
 for(i=0;i<=37;i++)
 {                       // border design code
  cout<<" #";
 }
 cout<<endl;
 for(i=1;i<=20;i++)
 {
  cout<<" #                                                                         #"<<endl;
 }
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
		       // car details


 gotoxy(28,2);
 cout<<"BMW M6"<<endl;
 gotoxy(22,3);
 cout<<"Manufacturer:-      BMW"<<endl;
 gotoxy(22,4);
 cout<<"Assembly:-          Germany"<<endl;
 gotoxy(22,5);
 cout<<"Class:-             2-Door coupe"<<endl;
 gotoxy(22,6);
 cout<<"Engine:-            4.4L V8  "<<endl;
 gotoxy(22,7);
 cout<<"Transmission:-      7-speed M-DCt "<<endl;
 gotoxy(22,8);
 cout<<"Max Power:-         560bhp"<<endl;
 gotoxy(22,9);
 cout<<"Max Torque:-        680 NM"<<endl;
 gotoxy(22,10);
 cout<<"Top Speed:-         305 km/h"<<endl;
 gotoxy(22,11);
 cout<<"0-100 km/h:-        in just 4.2 s"<<endl;
 gotoxy(5,3);
 cout<<"BACK - 10";
 gotoxy(60,3);
 cout<<"EXIT - 99";
 gotoxy(5,22);
 cout<<"CREATE AN ACCOUNT - 44";
 gotoxy(60,22);
 cout<<"LOGIN - 55";
 gotoxy(30,12);
 cout<<" - - - - - -  "<<endl;
 gotoxy(30,13);
 cout<<"|           |"<<endl;
 gotoxy(30,14);
 cout<<" - - - - - -  "<<endl;
 gotoxy(36,13);
 cin>>c;
 if(c==10)
 {
  bmw();
 }
 else if(c==99)
 {
  exit(0);
 }
 else if(c==44)
 {
  create();

 }
 else if(c==55)
 {
  log();
 }

}


		    // i8 function

void i8()
{
 clrscr();
 int i,c;


 cout<<"\n";
 for(i=0;i<=37;i++)             // borfder design code
 {
  cout<<" #";
 }
 cout<<endl;
 for(i=1;i<=20;i++)
 {
  cout<<" #                                                                         #"<<endl;
 }
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
		      // car details

 gotoxy(28,2);
 cout<<"BMW I8"<<endl;
 gotoxy(22,3);
 cout<<"Manufacturer:-      BMW"<<endl;
 gotoxy(22,4);
 cout<<"Assembly:-          Germany"<<endl;
 gotoxy(22,5);
 cout<<"Class:-             Sports car"<<endl;
 gotoxy(22,6);
 cout<<"Engine:-            1.5L turbo charged inline  "<<endl;
 gotoxy(22,7);
 cout<<"Transmission:-      f21-360 "<<endl;
 gotoxy(22,8);
 cout<<"Electric Motor:-    98kw"<<endl;
 gotoxy(22,9);
 cout<<"BAttery:-           7.1kwh"<<endl;
 gotoxy(22,10);
 cout<<"Electric range:-    500km in comfort mode/ 600km in eco pro mode"<<endl;
 gotoxy(22,11);
 cout<<"Top Speed:-         250 km/h"<<endl;
 gotoxy(22,12);
 cout<<"0-100 km/h:-        in just 4.4 s"<<endl;
 gotoxy(5,3);
 cout<<"BACK - 10";
 gotoxy(60,3);
 cout<<"EXIT - 99";
 gotoxy(5,22);
 cout<<"CREATE AN ACCOUNT - 44";
 gotoxy(60,22);
 cout<<"LOGIN - 55";
 gotoxy(30,12);
 cout<<" - - - - - -  "<<endl;
 gotoxy(30,13);
 cout<<"|           |"<<endl;
 gotoxy(30,14);
 cout<<" - - - - - -  "<<endl;
 gotoxy(36,13);
 cin>>c;
 if(c==10)
 {
  bmw();
 }
 else if(c==99)
 {
  exit(0);
 }
 else if(c==44)
 {
  create();

 }
 else if(c==55)
 {
  log();
 }


}



		       // chevy function

void chevy()
{
  clrscr();
  int i,c;

			   // border design code

  cout<<"\n";
  for(i=0;i<=37;i++)
  {
   cout<<" #";
  }
  cout<<endl;
  for(i=1;i<=20;i++)
  {
   cout<<" #                                                                         #"<<endl;
  }
  for(i=0;i<=37;i++)
  {
   cout<<" #";
  }
  cout<<endl;
  gotoxy(5,3);
  cout<<"BACK - 10";
  gotoxy(60,3);
  cout<<"EXIT - 99";
  gotoxy(5,22);
 cout<<"CREATE AN ACCOUNT - 44";
 gotoxy(60,22);
 cout<<"LOGIN - 55";
  gotoxy(10,5);
  cout<<"      @@@@ @  @  @@@@  @   @  @@    @@@@@  @   @@@@ @@@@@ "<<endl;
  gotoxy(10,6);
  cout<<"      @    @  @  @     @   @  @ @   @   @  @   @      @   "<<endl;
  gotoxy(10,7);
  cout<<"      @    @@@@  @@     @ @   @@    @   @  @   @@     @   "<<endl;
  gotoxy(10,8);
  cout<<"      @@@@ @  @  @       @    @ @   @@@@@  @@@ @      @   "<<endl;
  gotoxy(10,9);
  cout<<"           @  @  @@@@         @  @             @@@@       "<<endl;
  gotoxy(8,16);
  cout<<"* * * * * * * * * *   * * * * * * * * * *   * * * * * * * * * *"<<endl;
  gotoxy(8,17);
  cout<<"*                 *   *                 *   *                 * "<<endl;
  gotoxy(8,18);
  cout<<"* * * * * * * * * *   * * * * * * * * * *   * * * * * * * * * *"<<endl;
  gotoxy(9,17);
  cout<<"     1.Camaro"<<endl;
  gotoxy(32,17);
  cout<<"   2.Corvette"<<endl;
  gotoxy(54,17);
  cout<<"   3.Imapala"<<endl;
  gotoxy(16,11);
  cout<<"Enter the serial number of your choice"<<endl;
  gotoxy(30,12);
  cout<<" - - - - - -  "<<endl;
  gotoxy(30,13);
  cout<<"|           |"<<endl;
  gotoxy(30,14);
  cout<<" - - - - - -  "<<endl;
  gotoxy(36,13);
  cin>>c;
  if(c==99)
  {
   exit(0);
  }
  else if(c==10)
  {
    secondpage();
  }
  else if(c==1)
  {
   camaro();                   // choosing car from chevy
  }

  else if(c==2)
  {
   corvette();
  }
  else if(c==3)
  {
   impala();
  }
  else if(c==44)
 {
  create();

 }
 else if(c==55)
 {
  log();
 }

				// camaro function
}


void camaro()
{
 clrscr();
 int i,c;

			 // border design code

 cout<<"\n";
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
 for(i=1;i<=20;i++)
 {
  cout<<" #                                                                         #"<<endl;
 }
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;

		    // car details

 gotoxy(28,2);
 cout<<"CHEVROLET CAMARO"<<endl;
 gotoxy(22,3);
 cout<<"Manufacturer:-      Chevrolet"<<endl;
 gotoxy(22,4);
 cout<<"Assembly:-          Canada"<<endl;
 gotoxy(22,5);
 cout<<"Class:-             Pony car"<<endl;
 gotoxy(22,6);
 cout<<"Engine:-            7.0L V8  "<<endl;
 gotoxy(22,7);
 cout<<"Transmission:-      6-speed automatic "<<endl;
 gotoxy(22,8);
 cout<<"Max Power:-         505bhp"<<endl;
 gotoxy(22,9);
 cout<<"Max Torque:-        680 NM"<<endl;
 gotoxy(22,10);
 cout<<"Top Speed:-         305 km/h"<<endl;
 gotoxy(22,11);
 cout<<"0-100 km/h:-        in just 4.0 s"<<endl;
 gotoxy(5,3);
  cout<<"BACK - 10";
  gotoxy(60,3);
  cout<<"EXIT - 99";
 gotoxy(5,22);
 cout<<"CREATE AN ACCOUNT - 44";
 gotoxy(60,22);
 cout<<"LOGIN - 55";
 gotoxy(30,12);
 cout<<" - - - - - -  "<<endl;
 gotoxy(30,13);
 cout<<"|           |"<<endl;
 gotoxy(30,14);
 cout<<" - - - - - -  "<<endl;
 gotoxy(36,13);
 cin>>c;
 if(c==10)
 {
  chevy();
 }
 else if(c==99)
 {
  exit(0);
 }
 else if(c==44)
 {
  create();

 }
 else if(c==55)
 {
  log();
 }


}


	     // corvette function

void corvette()
{
 clrscr();
 int i,c;


 cout<<"\n";
 for(i=0;i<=37;i++)                 // border design code
 {
  cout<<" #";
 }
 cout<<endl;
 for(i=1;i<=20;i++)
 {
  cout<<" #                                                                         #"<<endl;
 }
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;

		    // car details

 gotoxy(28,2);
 cout<<"CHEVROLET CORVETTE"<<endl;
 gotoxy(22,3);
 cout<<"Manufacturer:-      Chevrolet"<<endl;
 gotoxy(22,4);
 cout<<"Assembly:-          Canada"<<endl;
 gotoxy(22,5);
 cout<<"Class:-             Pony car"<<endl;
 gotoxy(22,6);
 cout<<"Engine:-            6.2L V8 supercharged  "<<endl;
 gotoxy(22,7);
 cout<<"Transmission:-      6-speed automatic "<<endl;
 gotoxy(22,8);
 cout<<"Max Power:-         638bhp"<<endl;
 gotoxy(22,9);
 cout<<"Max Torque:-        819 NM"<<endl;
 gotoxy(22,10);
 cout<<"Top Speed:-         330 km/h"<<endl;
 gotoxy(22,11);
 cout<<"0-100 km/h:-        in just 3.5 s"<<endl;
 gotoxy(5,3);
  cout<<"BACK - 10";
  gotoxy(60,3);
  cout<<"EXIT - 99";
 gotoxy(5,22);
 cout<<"CREATE AN ACCOUNT - 44";
 gotoxy(60,22);
 cout<<"LOGIN - 55";
 gotoxy(30,12);
 cout<<" - - - - - -  "<<endl;
 gotoxy(30,13);
 cout<<"|           |"<<endl;
 gotoxy(30,14);
 cout<<" - - - - - -  "<<endl;
 gotoxy(36,13);
 cin>>c;
 if(c==10)
 {
  chevy();
 }
 else if(c==99)
 {
  exit(0);
 }
 else if(c==44)
 {
  create();

 }
 else if(c==55)
 {
  log();
 }

}

			  // impala function


void impala()
{                                          // border design code
 clrscr();
 int i,c;
 cout<<"\n";
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
 for(i=1;i<=20;i++)
 {
  cout<<" #                                                                         #"<<endl;
 }
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
 gotoxy(28,2);
 cout<<"CHEVROLET IMPALA"<<endl;
 gotoxy(22,3);
 cout<<"Manufacturer:-      Chevrolet"<<endl;
 gotoxy(22,4);
 cout<<"Assembly:-          US Deteroit"<<endl;
 gotoxy(22,5);
 cout<<"Class:-             4-door sedan"<<endl;
 gotoxy(22,6);
 cout<<"Engine:-            3.6L V6  "<<endl;
 gotoxy(22,7);
 cout<<"Transmission:-      6-speed 6T70 automatic "<<endl;
 gotoxy(22,8);
 cout<<"Max Power:-         305bhp"<<endl;
 gotoxy(22,9);
 cout<<"Max Torque:-        358 NM"<<endl;
 gotoxy(22,10);
 cout<<"Max Speed:-         250 km/h"<<endl;
 gotoxy(22,11);
 cout<<"0-100 km/h:-        6s"<<endl;
 gotoxy(5,3);
  cout<<"BACK - 10";
  gotoxy(60,3);
  cout<<"EXIT - 99";
 gotoxy(5,22);
 cout<<"CREATE AN ACCOUNT - 44";
 gotoxy(60,22);
 cout<<"LOGIN - 55";
 gotoxy(30,12);
 cout<<" - - - - - -  "<<endl;
 gotoxy(30,13);
 cout<<"|           |"<<endl;
 gotoxy(30,14);
 cout<<" - - - - - -  "<<endl;
 gotoxy(36,13);
 cin>>c;
 if(c==10)
 {
  chevy();
 }
 else if(c==99)
 {
  exit(0);
 }
 else if(c==44)
 {
  create();

 }
 else if(c==55)
 {
  log();
 }

}                                   // ford function



void ford()
{
 clrscr();
 int i,c;
 cout<<"\n";
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
 for(i=1;i<=20;i++)
 {
  cout<<" #                                                                         #"<<endl;
 }
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
 gotoxy(5,3);
  cout<<"BACK - 10";
  gotoxy(60,3);
  cout<<"EXIT - 99";
 gotoxy(5,22);
 cout<<"CREATE AN ACCOUNT - 44";
 gotoxy(60,22);
 cout<<"LOGIN - 55";
 gotoxy(17,5);
 cout<<"        @@@@ @@@@@  @@   @@  "<<endl;
 gotoxy(17,6);
 cout<<"	@    @   @  @ @  @ @ "<<endl;
 gotoxy(17,7);
 cout<<"	@@   @   @  @@   @  @ "<<endl;
 gotoxy(17,8);
 cout<<"	@    @@@@@  @ @  @ @  "<<endl;
 gotoxy(17,9);
 cout<<"		    @  @ @@   "<<endl;
 gotoxy(8,16);
 cout<<"* * * * * * * * * *   * * * * * * * * * *   * * * * * * * * * *"<<endl;
 gotoxy(8,17);
 cout<<"*                 *   *                 *   *                 * "<<endl;
 gotoxy(8,18);
 cout<<"* * * * * * * * * *   * * * * * * * * * *   * * * * * * * * * *"<<endl;
 gotoxy(9,17);
 cout<<"  1.Sh Mustang"<<endl;
 gotoxy(32,17);
 cout<<"2.Mustang Boss"<<endl;
 gotoxy(54,17);
 cout<<"   3.Ford GT"<<endl;
 gotoxy(18,11);
 cout<<"Enter the serial number of your choice"<<endl;
 gotoxy(30,12);
 cout<<" - - - - - -  "<<endl;
 gotoxy(30,13);
 cout<<"|           |"<<endl;
 gotoxy(30,14);
 cout<<" - - - - - -  "<<endl;
 gotoxy(36,13);
 cin>>c;
 if(c==99)                             // choices of the ford car
 {
  exit(0);
 }
 else if(c==10)
 {
  secondpage();
 }
 else if(c==1)
 {
  sh();
 }
 else if(c==2)
 {
  boss();
 }
 else if(c==3)
 {
  gt();
 }
 else if(c==44)
 {
  create();

 }
 else if(c==55)
 {
  log();
 }


}
				     // sh function


void sh()
{
 clrscr();
 int i,c;
 cout<<"\n";
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
 for(i=1;i<=20;i++)
 {
  cout<<" #                                                                         #"<<endl;
 }
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
 gotoxy(28,2);
 cout<<"FORD SHELBY MUSTANG"<<endl;
 gotoxy(22,3);
 cout<<"Manufacturer:-      FORD"<<endl;
 gotoxy(22,4);
 cout<<"Assembly:-          US"<<endl;
 gotoxy(22,5);
 cout<<"Class:-             Pony car"<<endl;
 gotoxy(22,6);
 cout<<"Engine:-            5.8L V8 Trinity  "<<endl;
 gotoxy(22,7);
 cout<<"Transmission:-      6-speed manual tremec "<<endl;
 gotoxy(22,8);
 cout<<"Max Power:-         662bhp"<<endl;
 gotoxy(22,9);
 cout<<"Max Torque:-        855 NM"<<endl;
 gotoxy(22,10);
 cout<<"Top Speed:-         325 km/h"<<endl;
 gotoxy(22,11);
 cout<<"0-100 km/h:-        in just 3.3 s"<<endl;
 gotoxy(5,3);
  cout<<"BACK - 10";
  gotoxy(60,3);
  cout<<"EXIT - 99";
 gotoxy(5,22);
 cout<<"CREATE AN ACCOUNT - 44";
 gotoxy(60,22);
 cout<<"LOGIN - 55";
 gotoxy(30,12);
 cout<<" - - - - - -  "<<endl;
 gotoxy(30,13);
 cout<<"|           |"<<endl;
 gotoxy(30,14);
 cout<<" - - - - - -  "<<endl;
 gotoxy(36,13);
 cin>>c;
 if(c==10)
 {
  ford();
 }
 else if(c==99)
 {
  exit(0);
 }
 else if(c==44)
 {
  create();

 }
 else if(c==55)
 {
  log();
 }

}

				   // boss function


void boss()
{
 clrscr();
 int i,c;
 cout<<"\n";
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
 for(i=1;i<=20;i++)
 {
  cout<<" #                                                                         #"<<endl;
 }
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
 gotoxy(28,2);
 cout<<"FORD MUSTANG BOSS"<<endl;
 gotoxy(22,3);
 cout<<"Manufacturer:-      FORD"<<endl;
 gotoxy(22,4);
 cout<<"Assembly:-          US Michigan"<<endl;
 gotoxy(22,5);
 cout<<"Class:-             Pony car Sports car"<<endl;
 gotoxy(22,6);
 cout<<"Engine:-            5.0L V8   "<<endl;
 gotoxy(22,7);
 cout<<"Transmission:-      6-speed manual "<<endl;
 gotoxy(22,8);
 cout<<"Max Power:-         444bhp"<<endl;
 gotoxy(22,9);
 cout<<"Max Torque:-        515 NM"<<endl;
 gotoxy(22,10);
 cout<<"Top Speed:-         210 km/h"<<endl;
 gotoxy(22,11);
 cout<<"0-100 km/h:-        in just 6.9 s"<<endl;
 gotoxy(5,3);
  cout<<"BACK - 10";
  gotoxy(60,3);
  cout<<"EXIT - 99";
 gotoxy(5,22);
 cout<<"CREATE AN ACCOUNT - 44";
 gotoxy(60,22);
 cout<<"LOGIN - 55";
 gotoxy(30,12);
 cout<<" - - - - - -  "<<endl;
 gotoxy(30,13);
 cout<<"|           |"<<endl;
 gotoxy(30,14);
 cout<<" - - - - - -  "<<endl;
 gotoxy(36,13);
 cin>>c;
 if(c==10)
 {
  ford();
 }
 else if(c==99)
 {
  exit(0);
 }
 else if(c==44)
 {
  create();

 }
 else if(c==55)
 {
  log();
 }

}

				 // gt function


void gt()
{
 clrscr();
 int i,c;
 cout<<"\n";
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
 for(i=1;i<=20;i++)
 {
  cout<<" #                                                                         #"<<endl;
 }
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
 gotoxy(28,2);
 cout<<"FORD GT"<<endl;
 gotoxy(22,3);
 cout<<"Manufacturer:-      FORD"<<endl;
 gotoxy(22,4);
 cout<<"Assembly:-          US Michigan"<<endl;
 gotoxy(22,5);
 cout<<"Class:-             super car"<<endl;
 gotoxy(22,6);
 cout<<"Engine:-            5.4L V8   "<<endl;
 gotoxy(22,7);
 cout<<"Transmission:-      6-speed manual "<<endl;
 gotoxy(22,8);
 cout<<"Max Power:-         550bhp"<<endl;
 gotoxy(22,9);
 cout<<"Max Torque:-        628 NM"<<endl;
 gotoxy(22,10);
 cout<<"Top Speed:-         331 km/h"<<endl;
 gotoxy(22,11);
 cout<<"0-100 km/h:-        in just 3.8 s"<<endl;
 gotoxy(5,3);
  cout<<"BACK - 10";
  gotoxy(60,3);
  cout<<"EXIT - 99";
 gotoxy(5,22);
 cout<<"CREATE AN ACCOUNT - 44";
 gotoxy(60,22);
 cout<<"LOGIN - 55";
 gotoxy(30,12);
 cout<<" - - - - - -  "<<endl;
 gotoxy(30,13);
 cout<<"|           |"<<endl;
 gotoxy(30,14);
 cout<<" - - - - - -  "<<endl;
 gotoxy(36,13);
 cin>>c;
 if(c==10)
 {
  ford();
 }
 else if(c==99)
 {
  exit(0);
 }
 else if(c==44)
 {
  create();

 }
 else if(c==55)
 {
  log();
 }

}


			    // ferrari function

void ferrari()
{
 clrscr();
 int i,c;
 cout<<"\n";
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }                                         // border design code
 cout<<endl;
 for(i=1;i<=20;i++)
 {
  cout<<" #                                                                         #"<<endl;
 }
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
 gotoxy(5,3);
  cout<<"BACK - 10";
  gotoxy(60,3);
  cout<<"EXIT - 99";
 gotoxy(5,22);
 cout<<"CREATE AN ACCOUNT - 44";
 gotoxy(60,22);
 cout<<"LOGIN - 55";
 gotoxy(11,5);
 cout<<"       @@@@ @@@@  @@   @@     @    @@   @@@@@ "<<endl;
 gotoxy(11,6);
 cout<<"       @    @     @ @  @ @   @ @   @ @    @   "<<endl;
 gotoxy(11,7);
 cout<<"       @@   @@    @@   @@   @@@@@  @@     @   "<<endl;
 gotoxy(11,8);
 cout<<"       @    @     @ @  @ @  @   @  @ @  @@@@@ "<<endl;
 gotoxy(11,9);
 cout<<"	      @@@@  @  @ @  @        @  @       "<<endl;
 gotoxy(8,16);
 cout<<"* * * * * * * * * *   * * * * * * * * * *   * * * * * * * * * *"<<endl;
 gotoxy(8,17);
 cout<<"*                 *   *                 *   *                 * "<<endl;
 gotoxy(8,18);
 cout<<"* * * * * * * * * *   * * * * * * * * * *   * * * * * * * * * *"<<endl;
 gotoxy(9,17);
 cout<<"   1.LaFerrari"<<endl;
 gotoxy(32,17);
 cout<<"2.Enzo Ferrari"<<endl;
 gotoxy(54,17);
 cout<<"3.F12berlinetta"<<endl;
 gotoxy(16,11);
 cout<<"Enter the serial number of your choice"<<endl;
 gotoxy(30,12);
 cout<<" - - - - - -  "<<endl;
 gotoxy(30,13);
 cout<<"|           |"<<endl;
 gotoxy(30,14);
 cout<<" - - - - - -  "<<endl;
 gotoxy(36,13);
 cin>>c;                                         // choices of the ferrari car
 if(c==99)
 {
  exit(0);
 }
 else if(c==10)
 {
  secondpage();
 }
 else if(c==1)
 {
  la();
 }
 else if(c==2)
 {
  enzo();
 }
 else if(c==3)
 {
  f12();
 }
 else if(c==44)
 {
  create();

 }
 else if(c==55)
 {
  log();
 }

}

				// la finction



void la()
{
 clrscr();
 int i,c;
 cout<<"\n";
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
 for(i=1;i<=20;i++)
 {
  cout<<" #                                                                         #"<<endl;
 }
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
 gotoxy(28,2);
 cout<<"FERRARI LAFERRARI"<<endl;
 gotoxy(22,3);
 cout<<"Manufacturer:-      Ferrari"<<endl;
 gotoxy(22,4);
 cout<<"Assembly:-          Italy"<<endl;
 gotoxy(22,5);
 cout<<"Class:-             Sports car"<<endl;
 gotoxy(22,6);
 cout<<"Engine:-            6.3L V12   "<<endl;
 gotoxy(22,7);
 cout<<"Transmission:-      7-speed dual clutched automated "<<endl;
 gotoxy(22,8);
 cout<<"Max Power:-         789bhp"<<endl;
 gotoxy(22,9);
 cout<<"Max Torque:-        700 NM"<<endl;
 gotoxy(22,10);
 cout<<"Top Speed:-         350 km/h"<<endl;
 gotoxy(22,11);
 cout<<"0-100 km/h:-        in just 3 s"<<endl;
 gotoxy(5,3);
  cout<<"BACK - 10";
  gotoxy(60,3);
  cout<<"EXIT - 99";
 gotoxy(5,22);
 cout<<"CREATE AN ACCOUNT - 44";
 gotoxy(60,22);
 cout<<"LOGIN - 55";
 gotoxy(30,12);
 cout<<" - - - - - -  "<<endl;
 gotoxy(30,13);
 cout<<"|           |"<<endl;
 gotoxy(30,14);
 cout<<" - - - - - -  "<<endl;
 gotoxy(36,13);
 cin>>c;
 if(c==10)
 {
  ferrari();
 }
 else if(c==99)
 {
  exit(0);
 }
 else if(c==44)
 {
  create();

 }
 else if(c==55)
 {
  log();
 }

}



				// enzo functions

void enzo()
{
 clrscr();
 int i,c;
 cout<<"\n";
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
 for(i=1;i<=20;i++)
 {
  cout<<" #                                                                         #"<<endl;
 }
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
 gotoxy(28,2);
 cout<<"FERRARI ENZO FERRARI"<<endl;
 gotoxy(22,3);
 cout<<"Manufacturer:-      Ferrari"<<endl;
 gotoxy(22,4);
 cout<<"Assembly:-          Italy"<<endl;
 gotoxy(22,5);
 cout<<"Class:-             Super car"<<endl;
 gotoxy(22,6);
 cout<<"Engine:-            6.0L V12   "<<endl;
 gotoxy(22,7);
 cout<<"Transmission:-      6-speed semi automatic "<<endl;
 gotoxy(22,8);
 cout<<"Max Power:-         651bhp"<<endl;
 gotoxy(22,9);
 cout<<"Max Torque:-        657 NM"<<endl;
 gotoxy(22,10);
 cout<<"Top Speed:-         355 km/h"<<endl;
 gotoxy(22,11);
 cout<<"0-100 km/h:-        in just 3.2 s"<<endl;
 gotoxy(5,3);
  cout<<"BACK - 10";
  gotoxy(60,3);
  cout<<"EXIT - 99";
 gotoxy(5,22);
 cout<<"CREATE AN ACCOUNT - 44";
 gotoxy(60,22);
 cout<<"LOGIN - 55";
 gotoxy(30,12);
 cout<<" - - - - - -  "<<endl;
 gotoxy(30,13);
 cout<<"|           |"<<endl;
 gotoxy(30,14);
 cout<<" - - - - - -  "<<endl;
 gotoxy(36,13);
 cin>>c;
 if(c==10)
 {
  ferrari();
 }
 else if(c==99)
 {
  exit(0);
 }
 else if(c==44)
 {
  create();

 }
 else if(c==55)
 {
  log();
 }

}
			   // f12 functions


void f12()
{
 clrscr();
 int     i,c;
 cout<<"\n";
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
 for(i=1;i<=20;i++)
 {
  cout<<" #                                                                         #"<<endl;
 }
 for(i=0;i<=37;i++)
 {
  cout<<" #";
 }
 cout<<endl;
 gotoxy(28,2);
 cout<<"FERRARI ENZO F12 BERLINETTA"<<endl;
 gotoxy(22,3);
 cout<<"Manufacturer:-      Ferrari"<<endl;
 gotoxy(22,4);
 cout<<"Assembly:-          Italy"<<endl;
 gotoxy(22,5);
 cout<<"Class:-             Grand tourer(S)"<<endl;
 gotoxy(22,6);
 cout<<"Engine:-            6.3L V12   "<<endl;
 gotoxy(22,7);
 cout<<"Transmission:-      F1 dual clutch "<<endl;
 gotoxy(22,8);
 cout<<"Max Power:-         730bhp"<<endl;
 gotoxy(22,9);
 cout<<"Max Torque:-        690 NM"<<endl;
 gotoxy(22,10);
 cout<<"Top Speed:-         340 km/h"<<endl;
 gotoxy(22,11);
 cout<<"0-100 km/h:-        in just 3.1 s"<<endl;
 gotoxy(5,3);
  cout<<"BACK - 10";
  gotoxy(60,3);
  cout<<"EXIT - 99";
 gotoxy(5,22);
 cout<<"CREATE AN ACCOUNT - 44";
 gotoxy(60,22);
 cout<<"LOGIN - 55";
 gotoxy(30,12);
 cout<<" - - - - - -  "<<endl;
 gotoxy(30,13);
 cout<<"|           |"<<endl;
 gotoxy(30,14);
 cout<<" - - - - - -  "<<endl;
 gotoxy(36,13);
 cin>>c;
 if(c==10)
 {
  ferrari();
 }
 else if(c==99)
 {
  exit(0);
 }
 else if(c==44)
 {
  create();

 }
 else if(c==55)
 {
  log();
 }
}


				// function to create account



void create()

{
  clrscr();
  char ch,my;
  ofstream fout;
  fout.open("user.txt", ios::app|ios::binary);
  do
  {
    cout<<"enter your data"<<endl;
    u.getdata();
    fout.write((char*)&u,sizeof(u));
    clrscr();
  cout<<"do you want to add more(y/n)?"<<endl;
  cin>>ch;
  }
  while(ch=='y'||ch=='Y');
  fout.close();
  cout<<"your account has successfully created"<<endl;
  cout<<"choose your options login(Y), want to exit(N) or go to menu(M)?"<<endl;
  cin>>my;
  if(my=='y'||my=='Y')
  {
   log();
  }
  else if(my=='m'||my=='M')
  {
  secondpage();
  }
  else if(my=='n'||my=='N')
  {
  exit(0);
  }
}

			    // function to login for the existing user

void log()
{
  clrscr();
  int flag=0,no;
  char my,ch[10];
  ifstream fin;
  fin.open("user.txt", ios::binary);
  fin.seekg(0);
  cout<<"Enter your email ID: ";
  gets(ch);
  cout<<"Enter your password: ";
  cin>>no;
  while(fin)
  {
      fin.read((char*)&u,sizeof(u));
      if(u.getpass()==no)
      {
	u.putdata();
	flag=1;
	break;
      }

   }
  if(flag=!1)
  cout<<" no matches found [:( "<<endl;
  cout<<"choose your options try again(Y), want to exit(N) or go to menu(M)"<<endl;
  cin>>my;
  if(my=='y'||my=='Y')
  {
   log();
  }
  else if(my=='m'||my=='M')
  {
  secondpage();
  }
  else if(my=='n'||my=='N')
  {
  exit(0);
  }
  fin.close();

}
