// Programming Mini Game project
// Snake & Ladder - Game of Luck
// Group No - 26
// IM/2019/037 - VIJAYARAJENDRAN M. 
// IM/2019/039 - RAVICHANDRAN L. 
// IM/2019/070 - FERNANDO S.P.A.A. 
// IM/2019/113 - ADSHAYAN R.


#include <iostream>  // for cin and cout
#include <iomanip>
#include <stdlib.h>  // for rand(), srand() and system
#include <stdio.h>
#include <time.h>    // for time()
#include <conio.h>
#include <iostream>
#include <Windows.h>
using namespace std;
class Dice {
private:
	int number;
public:
	Dice() {
		number = 1;
		srand(time(0));
	}
	int roll() {
		
		number = rand() % 6 + 1;
		return number;
	}
	int get_number() {
		return number;
	}
	void set_number(int n) {
		number = n;
	}
};
class Grid {
private:
public:


	void Draw() {
		HANDLE  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 14); // yellow color
		
		cout <<"	**************************" <<endl;
		cout <<"	**			**" <<endl;
		cout <<"	**     Group No: 26     **"<<endl;
		cout <<"	**			**"<<endl;
		cout <<"	**************************"<<endl << endl;
		cout <<"	***** Snake & Ladder *****"<<endl;
		cout <<"	      'Game of Luck'" << endl<<endl;
	
		SetConsoleTextAttribute(hConsole, 14); // yellow color

		cout << "\xC9\xCD\xCD\xCD\xCD"	"\xCB\xCD\xCD\xCD\xCD"	"\xCB\xCD\xCD\xCD\xCD"
			    "\xCB\xCD\xCD\xCD\xCD"	"\xCB\xCD\xCD\xCD\xCD"	"\xCB\xCD\xCD\xCD\xCD"
			    "\xCB\xCD\xCD\xCD\xCD"	"\xCB\xCD\xCD\xCD\xCD"	"\xCB\xCD\xCD\xCD\xCD"
			    "\xCB\xCD\xCD\xCD\xCD"	"\xBB\0x00" << endl;

		cout << "\xBA\x20\xF7\xF7\x20"	"\xBA\x20";
		
        SetConsoleTextAttribute(hConsole, 206); // green stairs
		cout << "99";
		SetConsoleTextAttribute(hConsole, 14); //  yellow stairs
		cout << "\x20";
		cout << "\xBA\x20\x39\x38\x20"	"\xBA\x20\x39\x37\x20"	"\xBA\x20\x39\x36\x20"
				"\xBA\x20\x39\x35\x20"	"\xBA\x20\x39\x34\x20"	"\xBA\x20";
		
		SetConsoleTextAttribute(hConsole, 0xAC); // red snake
		cout << "93";  ///goes to position 4;
		SetConsoleTextAttribute(hConsole, 14); // Yellow

   		cout << "\x20\xBA\x20";
   		
   		SetConsoleTextAttribute(hConsole, 0x4B); // black txt, Red Snake
		cout << "92";
		SetConsoleTextAttribute(hConsole, 14); // yellow
		
		cout <<"\x20";

		   
		cout <<	"\xBA\x20\x39\x31\x20\xBA" << endl;

		cout << "\xCC\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"
				"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"
				"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"
				"\xCE\xCD\xCD\xCD\xCD"	"\xB9\0x00" << endl;

		cout << "\xBA\x20\x38\x31\x20"	"\xBA\x20\x38\x32\x20"	"\xBA\x20\x38\x33\x20"
				"\xBA\x20\x38\x34\x20"	"\xBA\x20\x38\x35\x20"	"\xBA\x20\x38\x36\x20"
				"\xBA\x20\x38\x37\x20"	"\xBA\x20\x38\x38\x20"	"\xBA\x20";
			
		SetConsoleTextAttribute(hConsole, 0xA0); // white txt, green stairs
		cout << "89";
		SetConsoleTextAttribute(hConsole, 14); // yellow

		cout << "\x20"
				"\xBA\x20\x39\x30\x20\xBA" << endl;

		cout << "\xCC\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"
				"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"
				"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"
				"\xCE\xCD\xCD\xCD\xCD"	"\xB9\0x00" << endl;

		cout << "\xBA\x20";
		SetConsoleTextAttribute(hConsole, 0xA9); // green stairs
		cout << "80";
		SetConsoleTextAttribute(hConsole, 14); // yellow
		
		
		cout<<	"\x20";
		cout<<	"\xBA\x20\x37\x39\x20"	"\xBA\x20\x37\x38\x20"	"\xBA\x20\x37\x37\x20";
		cout<<	"\xBA\x20";
			
		SetConsoleTextAttribute(hConsole, 0x4B); // black txt, Red Snake
		cout << "76";
		SetConsoleTextAttribute(hConsole, 14); // yellow


		cout << "\x20";
		cout <<	"\xBA\x20\x37\x35\x20"	"\xBA\x20\x37\x34\x20"	"\xBA\x20\x37\x33\x20"
				"\xBA\x20\x37\x32\x20"	"\xBA\x20\x37\x31\x20\xBA" << endl;

		cout << "\xCC\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"
				"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"
				"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"
				"\xCE\xCD\xCD\xCD\xCD"	"\xB9\0x00" << endl;

		cout << "\xBA\x20\x36\x31\x20"	"\xBA\x20\x36\x32\x20"	"\xBA\x20\x36\x33\x20"
				"\xBA\x20\x36\x34\x20"	"\xBA\x20\x36\x35\x20"	"\xBA\x20\x36\x36\x20"
				"\xBA\x20";
		
		SetConsoleTextAttribute(hConsole, 0x4F); // black txt, Red Snake
		cout << "67";
		SetConsoleTextAttribute(hConsole, 14); // yellow

			
		cout << "\x20";
		cout <<	"\xBA\x20\x36\x38\x20"	"\xBA\x20\x36\x39\x20"	"\xBA\x20";
		SetConsoleTextAttribute(hConsole, 0xA0); // white txt, green stairs
		cout << "70";
		SetConsoleTextAttribute(hConsole, 14); // yellow
		cout << "\x20\xBA" << endl;

		cout << "\xCC\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"
				"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"
				"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"
				"\xCE\xCD\xCD\xCD\xCD"	"\xB9\0x00" << endl;

		cout << "\xBA\x20\x36\x30\x20"	"\xBA\x20";
		
		SetConsoleTextAttribute(hConsole, 0xCA); // black txt, Red Snake
		cout << "59";
		SetConsoleTextAttribute(hConsole, 14); // yellow

		cout << "\x20";
		cout <<	"\xBA\x20\x35\x38\x20"	"\xBA\x20\x35\x37\x20"	"\xBA\x20\x35\x36\x20"
				"\xBA\x20\x35\x35\x20"	"\xBA\x20";
		SetConsoleTextAttribute(hConsole, 0xAD); // white txt, green stairs
		cout << "54";
		SetConsoleTextAttribute(hConsole, 14); // yellow

		cout << "\x20";
		cout <<	"\xBA\x20\x35\x33\x20"	"\xBA\x20\x35\x32\x20"
				"\xBA\x20\x35\x31\x20\xBA" << endl;

		cout << "\xCC\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"
				"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"
				"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"
				"\xCE\xCD\xCD\xCD\xCD"	"\xB9\0x00" << endl;

		cout << "\xBA\x20";
		
		SetConsoleTextAttribute(hConsole, 0xC0); // black txt, Red Snake
		cout << "41";
		SetConsoleTextAttribute(hConsole, 14); // yellow

		cout << "\x20";
		cout <<	"\xBA\x20\x34\x32\x20"	"\xBA\x20\x34\x33\x20"	"\xBA\x20\x34\x34\x20"
				"\xBA\x20\x34\x35\x20"	"\xBA\x20\x34\x36\x20"	"\xBA\x20\x34\x37\x20"
				"\xBA\x20\x34\x38\x20"	"\xBA\x20\x34\x39\x20"	"\xBA\x20";
			
		SetConsoleTextAttribute(hConsole, 0x4F); // black txt, Red Snake
		cout << "50";
		SetConsoleTextAttribute(hConsole, 14); // yellow

		cout <<	"\x20\xBA" << endl;

		cout << "\xCC\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"
				"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"
				"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"
				"\xCE\xCD\xCD\xCD\xCD"	"\xB9\0x00" << endl;

		cout << "\xBA\x20\x34\x30\x20"	"\xBA\x20";
		SetConsoleTextAttribute(hConsole, 0xA9); // green stairs
		cout << "39";
		SetConsoleTextAttribute(hConsole, 14); // yellow
		cout << "\x20"					"\xBA\x20\x33\x38\x20"	"\xBA\x20";
			
		SetConsoleTextAttribute(hConsole, 0xCA); // black txt, Red Snake
		cout << "37";
		SetConsoleTextAttribute(hConsole, 14); // yellow

		cout <<	"\x20" 					"\xBA\x20\x33\x36\x20"	"\xBA\x20\x33\x35\x20"
				"\xBA\x20\x33\x34\x20"	"\xBA\x20\x33\x33\x20"	"\xBA\x20\x33\x32\x20"
				"\xBA\x20";
			
		SetConsoleTextAttribute(hConsole, 0xC1); // black txt, Red Snake
		cout << "31";
		SetConsoleTextAttribute(hConsole, 14); // yellow

			
		cout << "\x20\xBA" << endl;

		cout <<	"\xCC\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"
				"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"
				"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"
				"\xCE\xCD\xCD\xCD\xCD"	"\xB9\0x00" << endl;


		cout << "\xBA\x20\x32\x31\x20"	"\xBA\x20\x32\x32\x20"	"\xBA\x20";
		SetConsoleTextAttribute(hConsole, 0xAF); // white txt, green stairs
		cout << "23";
		SetConsoleTextAttribute(hConsole, 14); // yellow

		
		
		cout << "\x20"
				"\xBA\x20\x32\x34\x20"	"\xBA\x20\x32\x35\x20"	"\xBA\x20\x32\x36\x20"
				"\xBA\x20\x32\x37\x20"	"\xBA\x20\x32\x38\x20"	"\xBA\x20";
			
		SetConsoleTextAttribute(hConsole, 0xAD); // white txt, green stairs
		cout << "29";
		SetConsoleTextAttribute(hConsole, 14); // yellow

			
		cout << "\x20"
				"\xBA\x20\x33\x30\x20\xBA" << endl;

		cout << "\xCC\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"
				"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"
				"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"
				"\xCE\xCD\xCD\xCD\xCD"	"\xB9\0x00" << endl;

		cout << "\xBA\x20";
		
		SetConsoleTextAttribute(hConsole, 0xC0); // black txt, Red Snake
		cout << "20";
		SetConsoleTextAttribute(hConsole, 14); // yellow

		cout <<	"\x20"	"\xBA\x20\x31\x39\x20"	"\xBA\x20\x31\x38\x20" "\xBA\x20";
			
		SetConsoleTextAttribute(hConsole, 0xAC); // green stairs
		cout << "17";
		SetConsoleTextAttribute(hConsole, 14); // yellow
		cout << "\x20\xBA\x20\x31\x36\x20"	"\xBA\x20\x31\x35\x20"	"\xBA\x20";
		
		SetConsoleTextAttribute(hConsole, 0xC1); // black txt, Red Snake
		cout << "14";
		SetConsoleTextAttribute(hConsole, 14); // yellow

		cout << "\x20\xBA\x20\x31\x33\x20"	"\xBA\x20\x31\x32\x20"
				"\xBA\x20\x31\x31\x20\xBA" << endl;

		cout << "\xCC\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"
				"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"
				"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"	"\xCE\xCD\xCD\xCD\xCD"
				"\xCE\xCD\xCD\xCD\xCD"	"\xB9\0x00" << endl;

		
		cout << "\xBA\x20\x30\x31\x20"	"\xBA\x20";
		SetConsoleTextAttribute(hConsole, 0xAF); // white txt, green stairs
		cout << "02";
		SetConsoleTextAttribute(hConsole, 14); // yellow
	
		
		cout <<"\x20"	"\xBA\x20\x30\x33\x20" "\xBA\x20";
		
		SetConsoleTextAttribute(hConsole, 206); // red snake
		cout << "04";
		SetConsoleTextAttribute(hConsole, 14); // yellow

		cout <<	"\x20\xBA\x20\x30\x35\x20"	"\xBA\x20\x30\x36\x20"	"\xBA\x20\x30\x37\x20"
				"\xBA\x20\x30\x38\x20"		"\xBA\x20\x30\x39\x20"	"\xBA\x20\x31\x30\x20\xBA" << endl;

		cout << "\xC8\xCD\xCD\xCD\xCD"	"\xCA\xCD\xCD\xCD\xCD"	"\xCA\xCD\xCD\xCD\xCD"
				"\xCA\xCD\xCD\xCD\xCD"	"\xCA\xCD\xCD\xCD\xCD"	"\xCA\xCD\xCD\xCD\xCD"
				"\xCA\xCD\xCD\xCD\xCD"	"\xCA\xCD\xCD\xCD\xCD"	"\xCA\xCD\xCD\xCD\xCD"
				"\xCA\xCD\xCD\xCD\xCD"	"\xBC\0x00" << endl;
	}
};
class Player {
public:
	char Name[80];
	int  Position;
	bool Blocked;
public:
	Player() {
		Name[0] = '\0';
		Position = 0;
		Blocked = true;
	}
	void Set_Name(char nm[])
	{
		strcpy(Name, nm);
	}
	void Get_Name()
	{
		cin>>Name;
		//cin.get(Name, 80);
		fflush(stdin);
	}
	void Show_Position() {
		cout << Position;   fflush(stdout); 
	}
	void Show_Name() {
		cout << Name;			fflush(stdout); 
	}

};

class Snake_Game
{
private:
	Grid g1;
	Dice d1;
	Player P1;
	Player P2;
public:
	void gotoxy(int col, int line) {
		COORD pos = { col, line };
		HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(output, pos);
	}
	void Play() {
		
		HANDLE  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 0x5F); 
		SetConsoleTextAttribute(hConsole, 15); // White color
		cout <<"	**************************" <<endl;
		cout <<"	**			**" <<endl;
		cout <<"	**     Group No: 26     **"<<endl;
		cout <<"	**			**"<<endl;
		cout <<"	**************************"<<endl << endl;
		cout <<"	***** Snake & Ladder *****"<<endl;
		cout <<"	      'Game of Luck'" << endl<<endl;
		cout << "Enter The Name of First Player: "; 
		fflush(stdout); 
		SetConsoleTextAttribute(hConsole, 12); // red color
		P1.Get_Name();
		SetConsoleTextAttribute(hConsole, 15); // White color
		//fflush(stdout); fflush(stdin);
		cout << "Enter The Name of 2nd Player: "; 
		SetConsoleTextAttribute(hConsole, 10); // green color
		fflush(stdout);
		P2.Get_Name();
		SetConsoleTextAttribute(hConsole, 15); // White color
		cout << "\n\n\n\n";
		cout << "\n\n\n\n";
		//fflush(stdout); fflush(stdin);
		bool First = true;
		while (1) {
			system("cls");
			g1.Draw();
			gotoxy(0, 31);
			
			SetConsoleTextAttribute(hConsole, 15); // White color
			cout << "P1: " ;
			SetConsoleTextAttribute(hConsole, 12); // red color
			
			cout << P1.Name << "                                  " << endl;
			gotoxy(0, 32);
			SetConsoleTextAttribute(hConsole, 15); // White color
			cout << "Position: " ;
			SetConsoleTextAttribute(hConsole, 12); // red color
			cout << setw(3) << P1.Position << "                                  " << endl;
			gotoxy(35, 31);
			
			SetConsoleTextAttribute(hConsole, 15); // White color
			cout << "P2: " ;
			SetConsoleTextAttribute(hConsole, 10); // green color
			cout << P2.Name << endl;
			gotoxy(35, 32);
			SetConsoleTextAttribute(hConsole, 15); // White color
			cout << "Position: " ;
			SetConsoleTextAttribute(hConsole, 10); // green color
			cout << setw(3) << P2.Position << endl;
			SetConsoleTextAttribute(hConsole, 15); // White color

			///////////  Player 1 ////////////////////////

			if (First) {
				
				First = !First;
				SetConsoleTextAttribute(hConsole, 15); // White color
				cout << "Now it is " ;
				SetConsoleTextAttribute(hConsole, 12); // red color
				cout << P1.Name ;
				SetConsoleTextAttribute(hConsole, 15); 
				cout << "'s Turn" << endl;
				fflush(stdout);
				while (1) {
					gotoxy(0, 34);
					SetConsoleTextAttribute(hConsole, 15); 
					cout << "Press ";
					SetConsoleTextAttribute(hConsole, 12); // Red color
					cout << "[1]";
					SetConsoleTextAttribute(hConsole, 15); // White color
					cout << " to throw a dice";
					if (getch() == '1')
						break;
				}
				cout << "\nYou Got: ";
				SetConsoleTextAttribute(hConsole, 12); // Red color
				cout << d1.roll();
				SetConsoleTextAttribute(hConsole, 15); // White color
				
				if (d1.get_number() == 6 && P1.Blocked){
						d1.set_number(1);
						P1.Blocked = false;
				}
				if (P1.Blocked)
					cout << " You Can Not Move " << endl;
				
				
				else if (!P1.Blocked)
				{
					int Position1,Position2;
					Position1 = P1.Position;
					Position2 = Move(1, d1.get_number());
					
					if (Position1 == Position2)  {
						SetConsoleTextAttribute(hConsole, 15); // White color
						cout << " You are Stopped at " ;
						SetConsoleTextAttribute(hConsole, 12); // Red color
						cout << Position2;
					}
					else {
						SetConsoleTextAttribute(hConsole, 15); // White color
						cout << " You Moved from " ;
						SetConsoleTextAttribute(hConsole, 12); // Red color
						cout << Position1;
						SetConsoleTextAttribute(hConsole, 15); // White color
						cout << " to ";
						SetConsoleTextAttribute(hConsole, 12); // Red color
						cout << Position2 << endl;
					}
					if (P1.Position == 100){
						SetConsoleTextAttribute(hConsole, 12); // Red color
						cout << P1.Name ;
						SetConsoleTextAttribute(hConsole, 15); // White color
						cout << " is the Winner" << endl;
						system("PAUSE");
						exit(0);
					}
				}
//////////////////////////////////////
				
				while (1) {
					gotoxy(0, 36);
					SetConsoleTextAttribute(hConsole, 15); // White color
					cout << "Press ";
					SetConsoleTextAttribute(hConsole, 12); // Red color
					cout << "[Space Bar]";
					SetConsoleTextAttribute(hConsole, 15); // White color
					cout << " to Switch Player and ";
					SetConsoleTextAttribute(hConsole, 12); // Red color
					cout << "[e]";
					SetConsoleTextAttribute(hConsole, 15); // White color
					cout << " to exit";
					char choice;
					choice = getch();
					if (choice == ' ')
						break;
					if (choice == 'e')
						exit(0);
				}
			}

			else {
				First = !First;
				SetConsoleTextAttribute(hConsole, 15); // White color
				cout << "Now it is "; 
				SetConsoleTextAttribute(hConsole, 10); // green color
				cout << P2.Name ;
				SetConsoleTextAttribute(hConsole, 15); // White color
				cout << "'s Turn" << endl;
				fflush(stdout);
				while (1) {
					gotoxy(0, 34);
					SetConsoleTextAttribute(hConsole, 15); // White color
					cout << "Press ";
					SetConsoleTextAttribute(hConsole, 10); // green color
					cout << "[0]";
					SetConsoleTextAttribute(hConsole, 15); // White color
					cout << " to throw a dice";
					if (getch() == '0')
						break;
				}
				cout << "\nYou Got: "; 
				SetConsoleTextAttribute(hConsole, 10); // green color
				cout << d1.roll();
				SetConsoleTextAttribute(hConsole, 15); // White color
				if (d1.get_number() == 6 && P2.Blocked){
						d1.set_number(1);
						P2.Blocked = false;
				}
				///////////////////////////////////////////////////////////////////////////////////////////	
				if (P2.Blocked)
					cout << " You Can Not Move " << endl;
				
				
				else if (!P2.Blocked)
				{
					int Position1,Position2;
					Position1 = P2.Position;
					Position2 = Move(2, d1.get_number());
					
					if (Position1 == Position2) {
						SetConsoleTextAttribute(hConsole, 15); // White color
						cout << " You are Stopped at " ;
						SetConsoleTextAttribute(hConsole, 10); // Red color
						cout << Position2;
					}
					else {
						cout << " You Moved from " ;
						SetConsoleTextAttribute(hConsole, 10); // green color
						cout << Position1;
						SetConsoleTextAttribute(hConsole, 15); // White color
						cout << " to ";
						SetConsoleTextAttribute(hConsole, 10); // green color
						cout << Position2 << endl;
					}
					if (P2.Position == 100){
						SetConsoleTextAttribute(hConsole, 10); // green color
						cout << P2.Name ;
						SetConsoleTextAttribute(hConsole, 15); // White color
						cout << " is the Winner" << endl;
						system("PAUSE");
						exit(0);
					}
				}
								
				while (1) {
					gotoxy(0, 36);
					SetConsoleTextAttribute(hConsole, 15); // White color
					cout << "Press ";
					SetConsoleTextAttribute(hConsole, 10); // green color
					cout << "[Space Bar]";
					SetConsoleTextAttribute(hConsole, 15); // White color
					cout << " to Switch Player and ";
					SetConsoleTextAttribute(hConsole, 10); // green color
					cout << "[e]";
					SetConsoleTextAttribute(hConsole, 15); // White color
					cout << " to exit";
					char choice;
					choice = getch();
					if (choice == ' ')
						break;
					if (choice == 'e')
						exit(0);
				}
			}
		}
	}
	int Move(int Player, int Number) {
		if (Player == 1)
		{
			if (P1.Position + Number == 99)
				P1.Position = 4;
			else if (P1.Position + Number == 92)
				P1.Position = 76;
			else if (P1.Position + Number == 67)
				P1.Position = 50;
			else if (P1.Position + Number == 59)
				P1.Position = 37;
			else if (P1.Position + Number == 41)
				P1.Position = 20;
			else if (P1.Position + Number == 31)
				P1.Position = 14;
			
			else if (P1.Position + Number == 2)
				P1.Position = 23;
			else if (P1.Position + Number == 17)
				P1.Position = 93;
			else if (P1.Position + Number == 29)
				P1.Position = 54;
			else if (P1.Position + Number == 39)
				P1.Position = 80;
			else if (P1.Position + Number == 70)
				P1.Position = 89;
							
			else if (P1.Position + Number > 100)
				P1.Position = P1.Position;
			else
				P1.Position += Number;
			
			return P1.Position;
		}

		else
		{
			if (P2.Position + Number == 99)
				P2.Position = 4;
			else if (P2.Position + Number == 92)
				P2.Position = 76;
			else if (P2.Position + Number == 67)
				P2.Position = 50;
			else if (P2.Position + Number == 59)
				P2.Position = 37;
			else if (P2.Position + Number == 41)
				P2.Position = 20;
			else if (P2.Position + Number == 31)
				P2.Position = 14;
			
			else if (P2.Position + Number == 2)
				P2.Position = 23;
			else if (P2.Position + Number == 17)
				P2.Position = 93;
			else if (P2.Position + Number == 29)
				P2.Position = 54;
			else if (P2.Position + Number == 39)
				P2.Position = 80;
			else if (P2.Position + Number == 70)
				P2.Position = 89;
							
			else if (P2.Position + Number > 100)
				P2.Position = P2.Position;
			else
				P2.Position += Number;
			
			return P2.Position;
		}

	}
};

int main() {
	Snake_Game SG1;
	SG1.Play();
	system("PAUSE");
	return 0;
}

