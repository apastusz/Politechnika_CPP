#include <iostream>
using namespace std;

float oceny[5];
float suma=0;
float œrednia;

int main()
{

	for (int i = 0; i < 5; i++) {
		cout << endl << "podaj "<<i+1<< "ocenê: ";
		cin >> oceny[i];
		suma = suma + oceny[i]; //suma += oceny[i];
	}

	œrednia = suma / 5;
	cout << endl << "œrednia równa siê: " << œrednia << endl;

	system("pause");
	return 0;


}