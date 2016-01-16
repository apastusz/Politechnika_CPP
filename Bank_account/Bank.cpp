#include<iostream>
#include<string>
#include"Bank.h"

using namespace std;


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
	cout << "Nazwa_banku: " << get_Nazwa_banku() << endl;
	cout << "Nazwa_oddzialu: " << get_Nazwa_Oddzialu() << endl;
	Adress::show_a();
}