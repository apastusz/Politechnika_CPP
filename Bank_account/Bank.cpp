#include<iostream>
#include<string>
#include <fstream> //dane do pliku
#include"Bank.h"

using namespace std;

char znak;

Bank::Bank(string no,string nb)
	/*, string ul, int n_d, int n_m, string kp, string mi, string pa)
	:Adress(ul, n_d, n_m, kp, mi, pa)*/
{Nazwa_Oddzialu = no;
Nazwa_banku = nb;
}

void Bank::set_Nazwa_Oddzialu(string no) { Nazwa_Oddzialu = no; }
void Bank::set_Nazwa_banku(string nb) { Nazwa_banku = nb; }
string Bank::get_Nazwa_Oddzialu() { return Nazwa_Oddzialu; }
string Bank::get_Nazwa_banku() { return Nazwa_banku; }

void Bank::load_b() 
{
	string lno,lnb;
		cout <<"Podaj nazwe banku: ";		
		getline(cin, lnb);
		set_Nazwa_banku(lnb);
		cout << "Podaj nazwe oddzialu: ";
		//getline(cin, Nazwa_Oddzialu);
		getline(cin, lno);
		set_Nazwa_Oddzialu(lno);
		//cin.ignore();
		Adress::load_a();
		cout << endl;
	}

void Bank::show_b()
{
	cout << "Czy chcesz zapisac dane do pliku Y/N ?";
	cin >> znak;
	//znak = isupper(znak);
	//cout << znak <<endl;

	if (znak == 'Y' || znak == 'y') {

		fstream plik;

		plik.open("bank.txt", ios::out | ios::app); // dodaj¹c ios::app dodaje kolejne rekordy do pliku nie nadpisuje

		plik << "Nazwa_banku: "<< get_Nazwa_banku() << endl;
		plik << "Nazwa_oddzialu: " << get_Nazwa_Oddzialu() << endl;
		plik << "Ulica: " << get_ulica() << endl;
		plik << "Nr_domu: " << get_Nr_domu() << endl;
		plik << "Nr_mieszkania: " << get_Nr_mieszkania() << endl;
		plik << "Kod_pocztowy: " << get_Kod_pocztowy() << endl;
		plik << "Miasto: " << get_Miasto() << endl;
		plik << "Panstwo: " << get_Panstwo() << endl;

		plik.close();

	}

	cout << "Nazwa_banku: " << get_Nazwa_banku() << endl;
	cout << "Nazwa_oddzialu: " << get_Nazwa_Oddzialu() << endl;
	Adress::show_a();

}