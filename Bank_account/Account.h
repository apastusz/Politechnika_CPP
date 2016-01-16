#pragma once
#include<iostream>
#include<string>
#include"Bank.h"

using namespace std;

class Current_Acc :public Bank
{	
	string Numer_rachunku,Waluta,Czy_karta;
	float Oprocentowanie,Prowizja,Oplata,Biezace_saldo,
		  Wplata,Wyplata,
		  Przelew_prz,Przelew_wy;

public:
	/*Current_Acc(string c_nr, string c_wa, string c_ka, float c_opr,
		float c_pr, float c_opl, float c_bs, float c_wp, float c_wy,
		float c_pp, float c_pw);*/

	Current_Acc(string="0000000000", string="PLN", string="N", float=3,
				float=10, float=20, float=0, float=0, float=0, 
				float=0, float=0);

	void set_Numer_rachunku(string c_nr);
	void set_Waluta(string c_wa);
	void set_Czy_karta(string c_ka);
	void set_Oprocentowanie(float c_opr);
	void set_Prowizja(float c_pr);
	void set_Oplata(float c_opl);
	void set_Biezace_saldo(float c_bs);
	void set_Wplata(float c_wp);
	void set_Wyplata(float c_wy);
	void set_Przelew_prz(float c_pp);
	void set_Przelew_wy(float c_pw);

	string get_Numer_rachunku();
	string get_Waluta();
	string get_Czy_karta();
	float get_Oprocentowanie();
	float get_Prowizja();
	float get_Oplata();
	float get_Biezace_saldo();
	float get_Wplata();
	float get_Wyplata();
	float get_Przelew_prz();
	float get_Przelew_wy();

	void load_acc();
	void show_acc();

	void load_acc_ub();
	void show_acc_ub();
};