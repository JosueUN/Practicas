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

   /* ifstream archivoEntrada;
    string linea;
    archivoEntrada.open ("archivo_Entrada.bin");
    if (!archivoEntrada){
        cerr<<"Error al abrir eñ archivo de entrada."<<endl;
        return 1;
    }

    while(getline(archivoEntrada, linea)){
        cout<<linea<<endl;
    }
    archivoEntrada.close();

    return 0;*/
}