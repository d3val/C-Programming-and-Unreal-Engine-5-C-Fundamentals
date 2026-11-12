#include <iostream>
using namespace std;
//Otra forma de declarar una constante, pero no es recomendable en c++ moderno.
//#define pi 3.1416;

int main()
{
	int x = 1;

	cout << "Hello" << endl;
	cout << x << endl;
	cout << -x << endl;

	//Declariacion de más de una variable en una linea
	int length(60), width(10);
	//El operador de extracción extrae el stream y lo almacena en el objeto derecho.
	//cin >> width;


	//cin >> length;

	int area;
	area = width * length;

	cout << "Area: " << area << endl;
	cout << "Area: " << width * length << endl;

	//Floats

	float tax, taxRate, price(50.55);
	taxRate = 0.16;

	cout << "Enter price: ";
	//	cin >> price;

	tax = price * taxRate;

	cout << "Tax: " << tax << endl;
	cout << "Final price: " << price + tax << endl;

	float float1 = 15601455;
	float float2 = 1.5e25;
	float float3 = 0.00000584;
	cout << "Float1: " << float1 << endl;
	cout << "Float2: " << float2 << endl;
	cout << "Float3: " << float3 << endl;

	const double pi = 3.1416;
	cout << "Pi: " << pi << endl;

	//Conversion de variables
	long signedVar = -44;
	unsigned int unsignerdVar = 8;

	//Al ser tipos diferentes, el compilador hace una conversion implicita de signedVar a unsigned int, lo que provoca un resultado inesperado.
	cout << signedVar + unsignerdVar << endl;

	//Formas de parsear de un tipo a otro
	int entero = 5245;

	cout << "Value: " << entero << " Type: " << typeid(entero).name() << endl;
	cout << "Value: " << (short)entero << " Type: " << typeid((short)entero).name() << endl;
	//Funtional syntax
	cout << "Value: " << short(entero) << " Type: " << typeid(short(entero)).name() << endl;

	return 0;
}