#include <iostream>

int main() {
    int n;

    std::cout << "Ingresa un número entero positivo: ";
    std::cin >> n;

    // Verificar si n es un número positivo
    if (n < 1) {
        std::cout << "Por favor, ingresa un número entero positivo." << std::endl;
        return 1;
    }

    // Imprimir la pirámide invertida de asteriscos
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
