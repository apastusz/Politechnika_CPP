#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int liczba, strzal, ile_prob=0;

int main()
{
	cout << "Witaj pomysla�em sobie liczb� w zakresie od 1 do 100" << endl;
	srand(time(NULL)); //przeka�e czas od 1970 do momentu wywo�ania i przeka�e rand

	liczba = rand() % 100 + 1;
	//cout << liczba << endl;

	while (strzal!=liczba) {
		ile_prob++;
		cout << "Zgadnij jaka: (to twoja "<< ile_prob << " proba)";
		cin >> strzal;
		if (strzal == liczba)
			cout << "Udaco sie odgadn�c liczbe. (Wygrywasz w " << ile_prob << " probie)";
		if (strzal < liczba)
			cout << "To za ma�o podaj wieksza liczbe";
		else if (strzal > liczba)
			cout << "To za du�o podaj mniejsza liczbe";

	}

	getchar(); getchar(); //dla pewno�ci zamiast system("pause")
	//system("pause");
	return 0;
	


}