#include <iostream>
#include <locale.h>
#include <string>
#include <windows.h>

using namespace std;

int main()
{

    // Idioma español
    setlocale(LC_ALL, "ES_es.UTF-8");
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    // Comenzamos con arrays
    string fruta;
    string frutero[4] = { "pera", "manzana", "plátano" };
    // extraer un valor
    fruta = frutero[1];
    cout << fruta << endl; // imprime manzana

    cout << "---------------" << endl;
    // Modificar un valor
    frutero[1] = "naranja";
    fruta = frutero[1];
    cout << fruta << endl; // imprime naranja

    cout << "---------------" << endl;
    frutero[3] = "fresa";
    fruta = frutero[3];
    cout << fruta << endl; // imprime fresa

    cout << "---------------" << endl;

    // Empezamos a iterar con for.
    for (int i = 1; i < 3; i++) {
        cout << frutero[i] << endl;
    }
    cout << "---------------" << endl;

    // forEach
    for (string frutas : frutero) {
        cout << frutas << endl;
    }
    cout << "---------------" << endl;
    
    int longitud = sizeof(frutero);
    int bitsdestring = sizeof(string);
    cout << longitud << "-" << bitsdestring << endl;
    int longitudarray = longitud / bitsdestring;
    cout << longitudarray << endl << endl;

    for (int i = 1; i < longitudarray; i++) {
        cout << frutero[i] << endl;
    }

    for (int i = 4; i > -1; i--) {

    }
}
