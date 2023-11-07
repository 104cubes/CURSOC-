#include <iostream>
#include <locale.h>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);
    setlocale(LC_CTYPE, "Spanish");
    int sumaUsuario;
    int i = 0;
    do {
        cout << "Demuéstrame que eres un humano ¿Cuánto es 5+9 niño?\n";
        cin >> sumaUsuario;
        i++;
    } while (sumaUsuario != 14 && i < 3);
    if (i >= 3) {
        cout << "Lo siento, ha habido un error, vuelve en unos minutos para arreglarlo.";
    } else {
        string nombreUsuario;
        cout << "Elige un nick: ";

        cin >> nombreUsuario;

        cout << "Bienvenido " << nombreUsuario << "!\n";
    }
    
    return 0;
}