#include <iostream>
#include <locale.h>
#include <string>
#include <windows.h>

using namespace std;
const int sumacorrecta = 14;
int intentos = 0;
int numero;
void comprobacion(int n) {
	intentos++;
	if (n == 14) {
		cout << "Enhorabuena! Bienvenido";
	}
	else if (intentos < 3) {
		cout << "Error. No es correcto \n";
		cout << "intento " << intentos << endl;
		cin >> numero;
		comprobacion(numero);
	}
	else {
		cout << "Error. Has consumido tus 3 intentos \n";
	}
}

int main()
{
	setlocale(LC_ALL, "ES_es.UTF-8");
	SetConsoleOutputCP(1252);
	SetConsoleCP(1252);
	
	cout << "Bienvenido! Escribe la suma de 5+9 para demostrar que eres humano: \n";
	cin >> numero;
	comprobacion(numero);
	return 0;
}
