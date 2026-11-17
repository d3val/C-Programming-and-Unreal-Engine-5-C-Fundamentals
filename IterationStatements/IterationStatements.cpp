// IterationStatements.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{

	int i = 5;
	int x = 4;

	// While loop
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

	// For loop
	for (int i = 0; i > -10; i--)
	{
		cout << i << "\n";
	}

	//Se puede omitir el primer agumento
	for (; x < 10; x++)
	{
		cout << x << "\n";
		if (x == 7)
		{
			cout << "Breaking the loop!\n";
			break;
		}
	}
}

