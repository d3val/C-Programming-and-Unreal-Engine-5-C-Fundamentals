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

	int playerScore = 50;

	if (0 < playerScore < 50)
	{
		cout << "You can do it better!" << endl;
	}
	else
	{
		cout << "Great job!" << endl;
	}

	if (playerIsAlive && playerScore < 50)
	{
		cout << "Keep it up!" << endl;
	}
	else
	{
		cout << "What a shame!" << endl;
	}

	//Chars
	char gradeSymbol = 'A';
	char beepSound = '\a';
	cout << "Grade: " << gradeSymbol << endl;
	cout << beepSound << endl;

	//Conditional operator
	int num1(6), num2(0), result(0);
	float result2;

	//Conditional operator: (condition) ? (value if true) : (value if false)
	result = (num1 > num2) ? num1 : num2;
	result2 = (num2 != 0) ? float(num1) / num2 : num2;

	cout << result << endl;
	cout << result2 << endl;

	return 0;
}

