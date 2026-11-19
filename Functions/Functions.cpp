// Functions.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

//La funciones deben estar declaradas antes de ser llamadas a diferencia de otros lenguajes.
//puesto que el compilador revisa de arriba a abajo.
int sum(int a, int b = 5000)
{
	return (a + b);
}

int main()
{
	int x, y;
	cout << "Ingresa un numero:";
	cin >> x;
	cout << "Ingresa otro numero:";
	cin >> y;
	cout << "La suma es: " << sum(x, y) << endl;
	//Función sin especificar el segundo parámetro, se toma el valor por defecto.
	cout << "La suma es: " << sum(x) << endl;
}