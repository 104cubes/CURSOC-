#include <iostream>
using namespace std;
int main() {
    int n;
    int suma = 0;

    cout << "Ingresa un número entero positivo: ";
    cin >> n;

    // Verificar si n es un número positivo
    if (n < 1) {
        cout << "Por favor, ingresa un número entero positivo." << endl;
        return 1;
    }

    // Utilizar un bucle for para calcular la suma
    for (int i = 1; i <= n; i++) {
        suma += i;
    }

    // Mostrar el resultado
    cout << "La suma de los primeros " << n << " números naturales es: " << suma << endl;

    return 0;
}
