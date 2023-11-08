#include <iostream>
#include <locale.h>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    // CAMBIOS PARA GIT
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);
    setlocale(LC_CTYPE, "Spanish");

    cout << "hola Ñoñó";
    
    return 0;
}
