#pragma once
#include<iostream>
#include<string> 
#include"Adress.h"

using namespace std;


class Bank :public Adress{

	string Nazwa_Oddzialu, Nazwa_banku;

public:
	
	Bank(string ="Odzial Slonce", string = "Bank slonce");

	void set_Nazwa_Oddzialu(string no);
	void set_Nazwa_banku(string nb);
	string get_Nazwa_Oddzialu();
	string get_Nazwa_banku();

	void show_b();
	void load_b();
	
};


