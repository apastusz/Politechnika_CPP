#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <string>
using namespace std;


int populacja=1;
int godzin=0;

int main()
{

	while (populacja<=1000000000) {

		godzin++;
		populacja = populacja * 2;

		cout << "mine³o godzin: " << godzin ;
		cout << " populacja wynosi: " << populacja << endl;
	}

	system("pause");
	return 0;


}




