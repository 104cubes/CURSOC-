
#include <iostream> // incluimos la librer�a base 
#include <string> // incuimos la librer�a string
#include <locale.h> // incuimos la librer�a locale para incorporar utf-8
#include <windows.h> // incluimos librer�a windows.h para establecer utf-8 para outputs y consola
using namespace std; // incluuimos el espacio de nombres std

int main() {
	SetConsoleOutputCP(1252);
	SetConsoleCP(1252);
	
	
	setlocale(LC_CTYPE, "Spanish");
	string nombre;
	cout << "Introduce aqu� tu nombre completo: ";
	
	getline(cin, nombre);// getline() Para recoger cadenas separadas
	
	//cin >> nombre;
	cout << "Hola " << nombre << endl;
	
	system("pause");

	return 0;
}
