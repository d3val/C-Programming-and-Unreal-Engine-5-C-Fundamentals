#include <iostream>
using namespace std;

int main()
{
	//Varaibles bool ocupan 1 byte
	bool myBool = true;
	//Otra forma de declarar una variable booleana
	bool otherBool{ false };

	//True = 1, False = 0
	cout << myBool << endl;
	cout << !myBool << endl;
	cout << otherBool << endl;

	//boolalpha permite mostrar los valores booleanos como true o false en lugar de 1 o 0
	cout << boolalpha;
	cout << myBool << endl;
	cout << !myBool << endl;

	//noboolalpha permite mostrar los valores booleanos como 1 o 0 en lugar de true o false
	cout << noboolalpha;
	cout << myBool << endl;
	cout << !myBool << endl;

	//if statement
	bool playerIsAlive = true;
	if (playerIsAlive)
	{
		cout << "Player is alive! :)" << endl;
	}
	else
	{
		cout << "Player is dead :(" << endl;
	}

	int playerHealth = 100;
	if (playerHealth > 0)
	{
		cout << "Player is alive! :)" << endl;
	}
	else
	{
		cout << "Player is dead :(" << endl;
	}

}

