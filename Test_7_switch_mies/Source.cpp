#include <iostream>
#include <cstdlib> //exit

using namespace std;

int numer_mies;

int main()
{
	cout << "Podaj numer miesiaca" << endl;
	//cin >> numer_mies;
	if (!(cin >> numer_mies))
	{
		cerr << "To nie jest liczba!" << endl; //ods³uga b³êdu
		system("pause");
		exit(0);
	}

	switch (numer_mies)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "Ten miesiac ma 31 dni";
	break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "Ten miesiac ma 30 dni";
	break;
	case 2: {
		int rok;
		cout << "Podaj rok" << endl;
		cin >> rok;
		if (((rok % 4 == 0) && (rok % 100 != 0)) || (rok % 400 == 0)) //rok przestêpny
			cout << "Ten miesiac ma 29 dni"<<endl;
		else
			cout << "Ten miesiac ma 28 dni"<<endl;
	
		}
	break;
	default: cout << "Niepoprawny numer miesiaca"<<endl;
	}

	system("pause");
	return 0;


}