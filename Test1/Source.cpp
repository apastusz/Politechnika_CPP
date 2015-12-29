#include <iostream>
#include <string>
using namespace std;


string PIN;

int main()
{
	cout << "Witamy na stronach banku" << endl;
	cout << "Wprowadz PIN: " << endl;
	cin >> PIN;

	if (PIN == "1111") {
		cout << "Poprawny PIN"  << endl;
	}
	else {
		cout << "Niepoprawny PIN" << endl;
	}

	system("pause");
	return 0;


}