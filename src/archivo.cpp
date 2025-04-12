#include   <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    ofstream archivoSalida;

    //abrir eñ archivo de salida
    archivoSalida.open ("archivo_salida.txt");
    if (!archivoSalida){
        cerr<<"Error al abrir eñ archivo de salida."<<endl;
        return 1;
    }
    // Escribir en el archivo de salida
    archivoSalida << "Hola, este es un archivo de salida. "<<endl;

    archivoSalida.close();

    ifstream archivoEntrada;
    string linea;
    archivoEntrada.open ("archivo_Entrada.txt");
    if (!archivoEntrada){
        cerr<<"Error al abrir eñ archivo de entrada."<<endl;
        return 1;
    }

    while(getline(archivoEntrada, linea)){
        cout<<linea<<endl;
    }
    archivoEntrada.close();

    return 0;
}
