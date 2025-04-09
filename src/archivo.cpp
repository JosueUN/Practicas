#include   <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream archivoEntrada;
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

    return 0;
}
