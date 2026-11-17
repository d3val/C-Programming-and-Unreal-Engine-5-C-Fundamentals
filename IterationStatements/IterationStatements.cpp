// IterationStatements.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{

	int i = 5;
	int x = 4;
	cout << "Game starting in...!\n";
	while (i > 0)
	{
		cout << i << "\n";
		i--;
	}
	cout << "Game started!\n";

	i = -5;

	do
	{
		cout << i << "\n";
		i--;
	} while (i > 0);



}

