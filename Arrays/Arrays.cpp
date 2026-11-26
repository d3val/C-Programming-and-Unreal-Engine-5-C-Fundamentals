// Arrays.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
	//Declaración de Arrays
	//Explicicita
	int myArray[5];
	//Impicita
	int otherArray[] = { 1,2,3,4,5 };
	//brace initialization
	int anotherArray[5]{ 1,2,3,4,5 };
	std::cout << "Ingrese un entero: ";
	std::cin >> myArray[0];
	for (int i = 1; i < 5; i++)
	{
		myArray[i] = myArray[i - 1] + 1;
	}

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Valor de myArray[" << i << "] = " << myArray[i] << std::endl;
		std::cout << "Valor de otherArray[" << i << "] = " << otherArray[i] << std::endl;
	}

	//Range-based for loop
	for (int num : anotherArray)
	{
		std::cout << "Valor de anotherArray = " << num << std::endl;
	}

	//auto es parecido a var en C#
	for (auto num : anotherArray)
	{
		std::cout << "Valor de anotherArray = " << num << std::endl;
	}

	//two-dimensional arrays
	const int CHARACTERS = 2;
	const int ENCOUNTERS = 3;

	//[Rows][Columns]
	int xpGainedPerEncounter[CHARACTERS][ENCOUNTERS]
	{
		{ 100,200,300 },
		{ 400,500,600 }
	};

	std::cout << "Experiencia ganada por el personaje 1 en el encuentro 2: " << xpGainedPerEncounter[0][1] << std::endl;
}