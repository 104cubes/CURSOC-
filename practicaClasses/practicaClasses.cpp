
#include <iostream>
#include <locale.h>
#include <string>
#include <windows.h>

using namespace std;
class clase {       // Creamos la clase "clase"
public:             // Modo de acceso
    int edad;       // Atributo entero
    string nombre;  // Atributo String
public:
    void escribe() {
        cout << "Hola";
    }
};
int main()
{

    setlocale(LC_ALL, "ES_es.UTF-8");

    // subida prueba clase
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);
    clase alumno; // Creamos class alumno
    alumno.edad = 21;
    alumno.nombre = "paco";
    std::cout << "Alumno: " << alumno.nombre << " edad: " << alumno.edad << "\n";
    clase alumno2;
    alumno2.edad = 22;
    alumno2.nombre = "pepe";
    std::cout << "Alumno: " << alumno2.nombre << " edad: " << alumno2.edad << "\n";
    alumno.escribe();
    return 0;
}