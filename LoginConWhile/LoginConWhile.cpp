
// Incluimos la librería std iostream
#include <iostream>
using namespace std;
//función principal
int main()
{
	// Resultado esperado
	int resultado = 14;
	// Resultado que escribe el usuario
	int entradaUsuario;
	// contador de intentos
	int intentos = 0;
	// Pedimos al usuario que ingrese un número con el resultado
	cout << "Introduce el resultado de la suma 9+5: \n";

	cin >> entradaUsuario; 

	while (entradaUsuario != resultado && intentos<3) {

		cout << "Error. El número introducido no es correcto\n";
		cout << "Introduce el resultado correcto de la suma 9 + 5: \n";
		cout << "Intentos " << intentos << endl;
		cin >> entradaUsuario;
		
		intentos++;
	}

	if (intentos == 3) {
		cout << "Error de segurodad. Has utilizado 3 intentos. Vuelve mañana";
	}
	else {
		cout << "Bienvenido!!";
	}

	return 0;
}

