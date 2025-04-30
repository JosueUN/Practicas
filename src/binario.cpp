#include   <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Persona{
    char nombre [50];
    int edad;
};

int main(int argc, char const *argv[])
{
    ofstream archivoSalida;

    //abrir eñ archivo de salida
    archivoSalida.open ("archivo_salida.bin", ios::binary);
    if (!archivoSalida){
    cerr<<"Error al abrir eñ archivo de salida."<<endl;
    return 1;
}
    Persona p1={"juan",30};
    Persona p2 = {"Maria",25};
// Escribir en el archivo de salida
    archivoSalida.write((const char*)(&p1), sizeof(Persona));
    archivoSalida.write((const char*)(&p2), sizeof(Persona));
    archivoSalida.close();


//---------------------------------------------------------------------------------------------------------
    ifstream archivoEntrada;
    Persona p;
    // Abrir el archivo de entrada

    archivoEntrada.open ("archivo_salida.bin", ios::binary);
    if (!archivoEntrada){
        cerr<<"Error al abrir el archivo de entrada."<<endl;
        return 1;
    }

    while(archivoEntrada.read((char*)(&p), sizeof(Persona))){
        cout<<"Nombre:  "<<p.nombre << ", Edad: " <<p.edad <<endl;
    }
    archivoEntrada.close();

    return 0;
}