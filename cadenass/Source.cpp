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
    
    // Concatenación
    string hola = "Hola ";
    string mundo = "mundo";
    string holaMundo = hola + mundo;
    cout << holaMundo << endl;

    cout << "-------------\n\n";
    // concatenar dos números es sumarlos
    int cinco = 5;
    int cuatro = 4;
    cout << cinco + cuatro << endl;

    cout << "-------------\n\n";
    // concatenamos dos números ´declarándolos como string

    string cincoString = "5";
    string cuatroString = "4";
    cout << cincoString + cuatroString << endl;

    cout << "-------------\n\n";
    /* concatenamos un úmero y un string debemos convertir el numero en string
     si no da error */

    string resultado = "El resultado es ";
    int nueve = 9;

    cout << resultado + to_string(nueve) << endl;

    cout << "-------------\n\n";
    // Longitud de cadena
    string holaquetal = "Holaquetal";

    cout << "La palabra " << holaquetal << " tiene " << holaquetal.length() << " caracteres\n";

    cout << "-------------\n\n";
    // Cadena como array
    string caza = "caza";
    cout << caza[0] << endl;
    cout << "aza";
    caza[0] = 'b';
    cout << caza << endl;

    cout << "-------------\n\n";

    cout << "esto es un \"texto con\" comillas";

    cout << "-------------\n\n";

    // User input strings

    string ingresatunombre;
    cout << "Hola, ingresa tu nombre completo: \n";
    //cin >> ingresatunombre;

    // Recogemos todo el input del usuarios, con espacios.
    getline(cin, ingresatunombre);
    cout << "Hola " << ingresatunombre << endl;


    system("pause");

    return 0;
}