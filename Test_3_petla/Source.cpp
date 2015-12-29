#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <string>
using namespace std;


string imie;
int liczba;

int main()
{

	cout << "Podaj Imie :" << endl;
	cin >> imie;
	cout << "Podaj liczbe" << endl;
	cin >> liczba;


	for (int i = 1; i <= liczba; i++)
	{
		cout << i << ". " << imie << endl;
	}

	system("pause");
	return 0;


}




