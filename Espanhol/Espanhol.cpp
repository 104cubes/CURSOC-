#include <iostream>
#include <locale.h>
#include <string>
#include <windows.h>

using namespace std;

int main()
{

    setlocale(LC_ALL, "ES_es.UTF-8");

    // subida prueba clase
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);
    

    cout << "hola Ñoñó";
    
    return 0;
}
