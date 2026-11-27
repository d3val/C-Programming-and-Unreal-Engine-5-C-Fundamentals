#include <iostream>
using namespace std;

int main()
{
	int demoVar = 12;
	//Para declarar un apuntador se utiliza el operador "*"
	//Es necesario indicar el tipo de dato al que apunta el apuntador y debe coincidir con el tipo de dato de la variable a la que apunta.
	//Tambien es importante inicializar el apuntador al momento de la declaracion.
	//Si no se inicializa el apuntador, este puede apuntar a cualquier ubicacion de memoria y puede causar currupcion en memoria.

	//nullptr es un valor especial que indica que el apuntador no apunta a ninguna ubicacion de memoria valida.
	int* demoPtr = nullptr;
	//Aqui se asigna la direccion de memoria de demoVar al apuntador demoPtr
	demoPtr = &demoVar;

	//Para acceder al valor de un apuntador es necesario desreferenciarlo
	cout << "Valor de la variable apuntada: " << *demoPtr << endl;
	//Ubicacion de la variable en memoria
	cout << "Ubicacion en memoria: " << demoPtr << endl;

	//Los apuntadores son variables que almacenan la ubicacion de memoria de otra variable
	//para obtener la direccion de una variable se utiliza el operador "&"
}