#include<iostream>
#include<string>
#include"Account.h"

using namespace std;

Current_Acc::Current_Acc(string c_nr, string c_wa, string c_ka, float c_opr,
	float c_pr, float c_opl, float c_bs, float c_wp, float c_wy,
	float c_pp, float c_pw) {
	Numer_rachunku = c_nr;
	Waluta = c_wa;
	Czy_karta = c_ka;
	Oprocentowanie = c_opr;
	Prowizja = c_pr;
	Oplata = c_opl;
	Biezace_saldo = c_bs;
	Wplata = c_wp;
	Wyplata = c_wy;
	Przelew_prz = c_pp;
	Przelew_wy = c_pw;
}


void Current_Acc::set_Numer_rachunku(string c_nr) { Numer_rachunku = c_nr; }
void Current_Acc::set_Waluta(string c_wa) { Waluta = c_wa; }
void Current_Acc::set_Czy_karta(string c_ka) { Czy_karta = c_ka; }
void Current_Acc::set_Oprocentowanie(float c_opr) { Oprocentowanie = c_opr; }
void Current_Acc::set_Prowizja(float c_pr) { Prowizja = c_pr; }
void Current_Acc::set_Oplata(float c_opl) { Oplata = c_opl; }
void Current_Acc::set_Biezace_saldo(float c_bs) { Biezace_saldo = c_bs; }
void Current_Acc::set_Wplata(float c_wp) { Wplata = c_wp; }
void Current_Acc::set_Wyplata(float c_wy) { Wyplata = c_wy; }
void Current_Acc::set_Przelew_prz(float c_pp) { Przelew_prz = c_pp; }
void Current_Acc::set_Przelew_wy(float c_pw) { Przelew_wy = c_pw; }

string Current_Acc::get_Numer_rachunku() { return Numer_rachunku; }
string Current_Acc::get_Waluta() { return Waluta; }
string Current_Acc::get_Czy_karta() { return Czy_karta; }
float Current_Acc::get_Oprocentowanie() { return Oprocentowanie; }
float Current_Acc::get_Prowizja() { return Prowizja; }
float Current_Acc::get_Oplata() { return Oplata; }
float Current_Acc::get_Biezace_saldo() { return Biezace_saldo; }
float Current_Acc::get_Wplata() { return Wplata; }
float Current_Acc::get_Wyplata() { return Wyplata; }
float Current_Acc::get_Przelew_prz() { return Przelew_prz; }
float Current_Acc::get_Przelew_wy() { return Przelew_wy; }

void Current_Acc::load_acc() {
	Bank::load_b();
	cout << "Podaj numer rachunku: ";
	cin >> Numer_rachunku;
	cout << "Podaj rodzaj waluty PLN, CHF, EUR: ";
	cin >> Waluta;
	cout << "Czy klient posiada karte T/N: ";
	cin >> Czy_karta;
	cout << "Podaj wysokosc oprocentowania %: ";
	cin >> Oprocentowanie;
	cout << "Podaj wysokosc prowizji %: ";
	cin >> Prowizja;
	cout << "Podaj wysokosc oplaty "<< get_Waluta() <<": ";
	cin >> Oplata;
	cout << endl;
	}

void Current_Acc::show_acc() {
	Bank::show_b();
	cout << "Numer_rachunku:" << get_Numer_rachunku() << endl;
	cout << "Waluta: " << get_Waluta() << endl;
	cout << "Czy klient posiada karte: " << get_Czy_karta() << endl;
	cout << "Oprocentowanie : " << get_Oprocentowanie() << " %" << endl;
	cout << "Prowizja : " << get_Prowizja() << " " << " %" << endl;
	cout << "Oplata wynosi: " << get_Oplata() << " " << get_Waluta() << endl;
	cout << endl;
}

void Current_Acc::load_acc_ub() {
	cout << "Podaj aktualne saldo " << get_Waluta() << ": ";
	cin >> Biezace_saldo;
	cout << "Podaj wysokosc wplaty " << get_Waluta() << ": ";
	cin >> Wplata;
	Biezace_saldo += Wplata;
	cout << "Podaj wysokosc wyplaty " << get_Waluta() << ": ";
	cin >> Wyplata;
	Biezace_saldo -= Wyplata;
	cout << "Podaj wysokosc przelewu przychodzacego " << get_Waluta() << ": ";
	cin >> Przelew_prz;
	Biezace_saldo += Przelew_prz;
	cout << "Podaj wysokosc przelewu wychodzacego " << get_Waluta() << ": ";
	cin >> Przelew_wy;
	Biezace_saldo -= Przelew_wy;
	cout << endl;
}


void Current_Acc::show_acc_ub() {
	cout << "Saldo poczatkowe: " << get_Biezace_saldo() << " " << get_Waluta() << endl;
	cout << "Wplata w³asna:" << get_Wplata() << " " << get_Waluta() << endl;
	cout << "Wyplata: " << get_Wyplata() << " " << get_Waluta() << endl;
	cout << "Przelew_przychodzacy: " << get_Przelew_prz() << " " << get_Waluta() << endl;
	cout << "Przelew_wychodzacy: " << get_Przelew_wy() << " " << get_Waluta() << endl;
	cout << "Saldo biezace: " << get_Biezace_saldo() << " " << get_Waluta() << endl;
	/*cout << "Biezace saldo wynosi:" << get_Biezace_saldo() + get_Wplata() - get_Wyplata() + get_Przelew_prz() - get_Przelew_wy()
		<< " " << get_Waluta();*/
	cout << endl;
}