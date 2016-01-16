#pragma once

#include<iostream>
#include<string>
#include"Account.h"
#include"Data.h"

using namespace std;

class Deposit_Acc :public Current_Acc , Data 
{
	string Nazwa_rachunku;

public:

	Deposit_Acc(string="Rachunek oszczednosciowy",string = "0000000000", string = "PLN", string = "N", float = 10,
		float = 0, float = 0, float = 0, float = 0, float = 0,float = 0, float = 0);

	void set_Nazwa_rachunku(string c_na);
	string get_Nazwa_rachunku();

	void load_dacc();
	void show_dacc();


};
