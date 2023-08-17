//el codigo tiene que
#include<iostream>
#include<string>
using namespace std;
struct estudiante {
    string nombre;
    int notas[3];
};
int main()
    {
        //vamos a imprimir las notas de los estudiantes definidos por un nombre y tres notas con apuntadores
    estudiante juan;
    juan.nombre = "Juan";
    juan.notas[0] = 45;
    juan.notas[1] = 50;
    juan.notas[2] = 40;
    estudiante mateo;
    mateo.nombre = "Mateo";
    mateo.notas[0] = 50;
    mateo.notas[1] = 50;
    mateo.notas[2] = 31;
    estudiante samuel;
    samuel.nombre = "samuel";
    samuel.notas[0] = 05;
    samuel.notas[1] = 15;
    samuel.notas[2] = 00;

    estudiante *i= &juan;
    estudiante *j= &mateo;
    estudiante *z= &samuel;
        cout << "Datos de los estudiantes " << endl;
    cout << "Nombre : " << i->nombre << endl;
    cout << "Notas del estudiante : ";
    for(int l = 0; l < 3; l++){
        cout << i->notas[l] << "\t";
    }
    cout << endl;
    cout << "Nombre : " << j->nombre << endl;
    cout << "Notas del estudiante : ";
    for(int l = 0; l < 3; l++){
        cout << j->notas[l] << "\t";
    }
    cout << endl;
            cout << "Datos del estudiante " << endl;
    cout << "Nombre : " << z->nombre << endl;
    cout << "Notas del estudiante : ";
    for(int l = 0; l < 3; l++){
        cout << z->notas[l] << "\t";
    }
    cout << endl;
    }
