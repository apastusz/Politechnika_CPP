#include <iostream>
#include <stdio.h> //exit
#include <cstdlib> //cls
#include <conio.h> //get
#include"Menu.h"
#include"bank.h"
#include"Adress.h"
#include"klient.h"

using namespace std;


Menu::Menu(char nr)
{
	wybor = nr;
}

float Menu::show_m()
{
	for (;;)//pêtla bêdzie dzia³aæ w nieskoñczonoœæ ale mamy exit
	{

		cout << endl;
		cout << "MENU GLOWNE" << endl;
		cout << "-----------" << endl;
		cout << "1. Wczytaj i pokaz dane klienta" << endl;	//klient Adress
		cout << "2. Wczytaj i pokaz dane placowki" << endl; //bank
		cout << "3. xxxx" << endl;
		cout << "4. xxxx" << endl;
		cout << "5. KONIEC PROGRAMU" << endl;

		cout << endl;
		//cin >> wybor;
		wybor = _getch();

		switch (wybor) {
		case'1': { Klient lkient;
				   Adress ladress;
			lkient.load_k();
			//ladress.load_a();

			lkient.show_k(); }
			//ladress.show_a();}
			break;
		case '2': /*{	Bank lbank;
			lbank.load_b();
			lbank.show_b(); }*/
		    break;
		case '3': /*{	Bank lbank;
			lbank.show_b();
						}*/
			break;
		case '4':
			cout << "Iloraz= " << endl;
			break;
		case '5':
			exit(0);
			break;
		default: cout << "Nie ma takiej opcji w menu!!" << endl;
		}

				 getchar(); //getchar();
				 system("cls");
		}

	return 0;
}
