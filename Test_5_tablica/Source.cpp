#include <iostream>
using namespace std;

float oceny[5];
float suma=0;
float �rednia;

int main()
{

	for (int i = 0; i < 5; i++) {
		cout << endl << "podaj "<<i+1<< "ocen�: ";
		cin >> oceny[i];
		suma = suma + oceny[i]; //suma += oceny[i];
	}

	�rednia = suma / 5;
	cout << endl << "�rednia r�wna si�: " << �rednia << endl;

	system("pause");
	return 0;


}