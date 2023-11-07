

#include <iostream>
#include <locale>
#include <string>

// Libreria que contiene la funcion setlocale
using namespace std;

 
int main()
{
    setlocale(LC_ALL, "es_ES");
    const double PI = 3.14;
    int numero1 = 15, numero2 =14;
   
    int resultado = numero1 + numero2;
    string texto = "Ñ El resultado de la suma es: ";
    cout << texto << resultado ;

    int entrada;
    cout << "\nIntroduce un número:";
    cin >> entrada;
    int resultadoTotal = entrada + resultado;
    cout << "Tu numero es: " << resultadoTotal << endl;
    if (resultadoTotal < 40) {
        cout << "Introduce un número mayor";
    } else{
        cout << " Genial";
    }
    system("pause");
    return 0;
}