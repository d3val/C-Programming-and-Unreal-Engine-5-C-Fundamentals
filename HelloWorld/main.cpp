#include <iostream>

//Al agregar using es como especificar un import de una librería.
//Ya no es necearia la sintazis namespace::función, sino que se puede usar directamente la función.
using namespace std;

//De igual forma es posible especificar solamnente una funcion especifica:
//using std::cout;
//using std::endl;

int main()
{
	//std::cout indica una referencia la función cout contenida en std (iostream)
	//El operador << es para insertar los datos a la función cout
	cout << "Hello World!" << endl;
	cout << "Eduardo Alvarez" << endl;
	cout << "Eduardo" << endl << "Alvarez";
	cout << endl << "------ End of program ------" << endl;
	return 0;
}