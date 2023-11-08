#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void)
{
	double cateto1, cateto2;
	// o float ---
	cout << "Introduce cateto 1: ";
	cin >> cateto1;
	cout << "Introduce cateto 2: ";
	cin >> cateto2;
	cout << fixed << setprecision(5);
	//Se calcula y muestra la longitud de la hipotenusa
	//sqrt: raiz cuadrada, pow: potencia
	cout << "\nLongitud de la hipotenusa: " << sqrt(pow(cateto1, 2) + pow(cateto2, 2)) << endl;
	system("pause");
}