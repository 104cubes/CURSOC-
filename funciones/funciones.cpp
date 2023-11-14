#include <iostream>
#include <locale.h>
#include <string>
#include <windows.h>

using namespace std;

string holaMundo(string hola, string mundo) {
    string holaMundo = hola + mundo;
    return holaMundo;
}
int main()
{
    setlocale(LC_ALL, "ES_es.UTF-8");

    // subida prueba clase
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);
    string resultado = holaMundo("Hola ", "Mundo");
    std::cout << resultado << "\n";
    return 0;
    system("pause");
}