#include <iostream>
#include <iomanip>
using namespace std;

long double fib[100000];
int n;


int main()
{
	cout << "ile liczb fib mam wyznaczyæ: " << endl;
	cin >> n ;

	fib[0] = 1;
	fib[1] = 1;

	for (int i = 2; i < n; i++) //dwie pierwsz liczby mamy przypisane z tablicy
	{
		fib[i] = fib[i - 1] + fib[i - 2];
			}
	cout<< setprecision(10000); //pokazuje liczbê w ca³oœci inaczej pokazuje zapie e

	//for (int i = 0; i < n; i++)
	//{
	//	cout<<endl<<"Wyraz numer"<<i+1<<": "<<fib[i]<<endl;
	//}

	//cout << endl << "Wyraz nr" << n << ": " << fib[n - 1]<<endl ;

	cout << "Zlota liczba: " << fib[n-1]/fib[n-2];
	
	system("pause");
	return 0;


}