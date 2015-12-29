#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;


int main()
{
	
	for (int i = 5; i>= 0;i--)
	{ 
		Sleep(1000);
		system("cls"); //Czyszczenie ekranu
		cout << i << endl;

	}
		
		cout << "Odlot" << endl;
		

	system("pause");
	return 0;


}
