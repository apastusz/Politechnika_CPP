#pragma once
#pragma once

#include<iostream>
#include<string>
#include"Account.h"
#include"Data.h"

using namespace std;

class Exchange_Acc :public Current_Acc, Data
{
	string Nazwa_rachunku;

public:

	Exchange_Acc(string = "Rachunek oszczednosciowy", string = "0000000000", string = "EUR", string = "N", float = 10,
		float = 0, float = 0, float = 0, float = 0, float = 0, float = 0, float = 0);

	void set_Nazwa_rachunku(string c_na);
	string get_Nazwa_rachunku();

	void load_eacc();
	void show_eacc();


};
