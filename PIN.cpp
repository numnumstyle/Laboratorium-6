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
