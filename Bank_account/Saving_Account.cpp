#include<iostream>
#include<string>
#include"Account.h"
#include"Saving_Account.h"

using namespace std;

Saving_Acc::Saving_Acc(string c_na, string c_nr, string c_wa, string c_ka, float c_opr,
	float c_pr, float c_opl, float c_bs, float c_wp, float c_wy, float c_pp, float c_pw)
	:Current_Acc(c_nr, c_wa, c_ka, c_opr, c_pr, c_opl, c_bs, c_wp, c_wy, c_pp, c_pw) //wartosci zkonstruktora odziedziczone
{
	Nazwa_rachunku = c_na;
}

void Saving_Acc::set_Nazwa_rachunku(string c_na) { Nazwa_rachunku = c_na; }
string Saving_Acc::get_Nazwa_rachunku() { return Nazwa_rachunku; }


void Saving_Acc::load_sacc() {

	float lc_opr; //oprocentowanie
				  //Bank::load_b();
	cout << "Podaj nazwe rachunku walutowego w EURO : ";
	cin >> Nazwa_rachunku;
	//Current_Acc::load_acc();
	cout << "Podaj wysokosc oprocentowania %: ";
	cin >> lc_opr;
	Current_Acc::set_Oprocentowanie(lc_opr);
	cout << "Podaj date zamkniecia rachunku: " << endl;
	//cin.ignore();
	Data::load_dt();
	cout << endl;
}

void Saving_Acc::show_sacc() {
	//Bank::show_b();
	cout << "Nazwa_rachunku walutowego w EURO : " << get_Nazwa_rachunku() << endl;
	cout << "Oprocentowanie : " << Current_Acc::get_Oprocentowanie() << " %" << endl;
	//Current_Acc::show_acc();
	cout << "Data zamkniecia rachunku: ";
	Data::show_dt();
}
