#include <iostream>
#include <locale.h>
#include <string>
#include <windows.h>

using namespace std;

int main()
{


	setlocale(LC_ALL, "ES_es.UTF-8");

	// subida prueba clase
	SetConsoleOutputCP(1252);
	SetConsoleCP(1252);
	string fruta;
	string frutero[20] = { "pera", "manzana", "plátano" };
	fruta = frutero[1];
	cout << fruta << endl; // manzana
	// Modificar valor por su índice  
	frutero[1] = "fresa";
	fruta = frutero[1];
	cout << frutero[1] << endl; // fresa
	// Añadir valor
	frutero[3] = "naranja\n";
	fruta = frutero[3];

	cout << fruta << endl;// naranja
	// Iterar por array (Array loops)
	for (int i = 0; i < 3; i++) {
		cout << frutero[i] << endl;
	}
	cout << "-------" << endl;
	//forEach
	for (string frutas : frutero) {
		cout << frutas << endl;
	}
	cout << "-------" << endl;
	// obtener lalongitud actual del array
	// sizeof devuelve lalongitud teórica
	// sizeof(myNumbers) / sizeof(string) el segundo son los bits //del tipo de variable
	int longitudArray = sizeof(frutero) / sizeof(string);
	cout << longitudArray << endl;
	return 0;
}