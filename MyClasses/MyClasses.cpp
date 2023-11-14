#include <iostream>
#include <locale.h>
#include <string>
#include <windows.h>

using namespace std;

class clase {
public: 
    int edad;
    string nombre;
public:
    clase() {
        cout << "Elemento creado\n";
    }
public: 
    ~clase() {
        cout << "Elemento eliminado\n";
    }
    
};

int main()
{
    

    setlocale(LC_ALL, "ES_es.UTF-8");

    // subida prueba clase
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);
    clase* alumno = new clase[2];
    alumno[0].edad = 21;
    alumno[0].nombre = "Pedro";
    clase alumno2;
    alumno[1].edad = 23;
    alumno[1].nombre = "Manuel";
    cout << "Alumno 1\n";
    cout << "Nombre: " << alumno[0].nombre;
    cout << "\nEdad: " << alumno[0].edad;
    cout << "\n-------------------\n";
    cout << "Alumno 2\n";
    cout << "Nombre: " << alumno[1].nombre;
    cout << "\nEdad: " << alumno[1].edad;
    delete[] alumno;
    cout << "\nAlumno 2\n";
    cout << "Nombre: " << alumno[1].nombre;
    cout << "\nEdad: " << alumno[1].edad;
    return 0;
}
