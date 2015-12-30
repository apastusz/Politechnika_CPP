#include <iostream>
#include <stdio.h> //exit
#include <cstdlib> //cls
using namespace std;

float x;
float y;
int wybor;


int main(){

	for (;;)//pêtla bêdzie dzia³aæ w nieskoñczonoœæ ale mamy exit
{
	cout << "Podaj 1 liczbe" << endl;
	cin >> x;
	cout << "Podaj 2 liczbe" << endl;
	cin >> y;

	cout << endl;
	cout << "MENU G£OWNE" << endl;
	cout << "-----------" << endl;
	cout << "1. DODAWANIE" << endl;
	cout << "2. ODEJMOWNIE" << endl;
	cout << "3. MNOZENIE" << endl;
	cout << "4. DZIELENIE" << endl;
	cout << "5. KONIEC PROGRAMU" << endl;

	cout << "Wybiez: ";
	cin >> wybor;

	switch (wybor) {
	case 1:
		cout << "Suma= " << x + y << endl; //musz¹ byæ klamry je¿eli by³oby wiêcej ni¿ 1 instrukcja	
		break;
	case 2:
		cout << "Roznica= " << x - y << endl;
		break;
	case 3:
		cout << "Iloczyn= " << x*y << endl;
		break;
	case 4:
		if (y == 0) cout << "Pamiêtej cholero nie dziel przez zero" << endl;
		else cout << "Iloraz= " << x / y << endl;
		break;
	case 5:
		exit(0);
		break;
	default: cout << "Nie ma takiej opcji w menu!!"<<endl;
	}
	
	//system("pause");
	getchar(); getchar();
	system("cls");

	}
	
	return 0;
}