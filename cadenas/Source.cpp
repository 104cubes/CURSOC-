#include <iostream>
#include <locale.h>
#include <string>
#include <windows.h>

using namespace std;

int main()
{

    //comit de prueba
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);
    setlocale(LC_CTYPE, "Spanish");
    cout << "hola �e�e";
   
    return 0;
}
