# Laboratorium-6

Imie:

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string imie;
	
	cout << "Wpisz imie: "; cin >> imie; 
	
	cout << imie << endl;
	
	system("pause");
	return 0;
}

Hello:

#include <iostream>
using namespace std;

int main()
{
	
	cout << "Hello World!!!" << endl;
	
	system("pause");
	return 0;
}

Numer:

#include <iostream>
using namespace std;

int main()
{
	int numer;
	
	cout << "Wpisz numer telefonu: "; cin >> numer; 
	
	cout << numer << endl;
	
	system("pause");
	return 0;
}

PIN:

#include <iostream>
using namespace std;

int PIN;

int main()
{
	cout << "Witaj w naszym banku!" << endl;
	cout << "Podaj numer PIN: ";
	cin >> PIN;
	
	if (PIN==1769) 
	cout << "Poprawny PIN";
	else 
	cout << "Zly PIN";
	
	return 0;
	system("pause");
}
