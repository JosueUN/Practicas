#include <iostream>
using namespace std;

class Chorizo{
private:
    bool size;
    bool encendido;
public:
    void Inicializar(){
        size = 1;
        encendido = true;
        otro = true;
    }
};

int main(int argc, char const *argv[])
{
    cout<<"Tamaño de memoria"<<endl;
    cout <<"Tamaño int: "<<sizeof(int)<<endl;
    cout <<"Tamaño float: "<<sizeof(float)<<endl;
    cout <<"Tamaño char: "<<sizeof(char)<<endl;
    cout <<"Tamaño bool: "<<sizeof(bool)<<endl;
    cout <<"Tamaño double: "<<sizeof(double)<<endl;
    cout <<"Tamaño void: "<<sizeof(void)<<endl;


    int a=27, b=50;
    cout<<"Memoria estatica: "<<endl;
    cout<< "Dirección a: "<<&a<<endl;
    cout<< "Valoe a: "<<a<<endl;
    cout<< "Tamaño a: "<<sizeof(a)<<endl;

    cout<< "Dirección b: "<<&b<<endl;
    cout<< "Valoe b: "<<b<<endl;
    cout<< "Tamaño b: "<<sizeof(b)<<endl;

    cout <<"-----------------------------------------------------------------------------"<<endl;
    cout<<"Direcciones de memoria: "<<endl;
    int* direccionA = &a;
    cout<< "Valoe de Direccion A: "<<direccionA<<endl;
    cout<< "Tamaño puntero: "<<sizeof (bool*)<<endl;
    cout<< "Direccion (&) de direccionA: "<<&direccionA<<endl;
    cout<< "Indireccion (*) de direccionA: "<<*direccionA<<endl;
    cout <<"-----------------------------------------------------------------------------"<<endl<<endl;

    cout <<"-----------------------------------------------------------------------------"<<endl;
    cout<< "Arreglos: "<<endl;
    int arreglo[10];
    cout<<"Direccion de arreglo: "<<&arreglo<<endl;
    cout<<"Direccion de arreglo [0]: "<<&arreglo[0]<<endl;
    cout<<"Direccion de arreglo [1]: "<<&arreglo[1]<<endl;
    cout<<"Direccion de arreglo + 0: "<<&arreglo + 0<<endl;
    cout<<"Direccion de arreglo + 1: "<<&arreglo + 1<<endl;
    cout <<"-----------------------------------------------------------------------------"<<endl<<endl;


    cout <<"-----------------------------------------------------------------------------"<<endl;
    cout<<"Objetos"<<endl;
    Chorizo pruebas;
    cout<<"Tamaño Chorizo: "<<sizeof(Chorizo)<<endl;
    cout<<"Tamaño Chorizo: "<<&pruebas<<endl;
    cout <<"-----------------------------------------------------------------------------"<<endl<<endl;

    cout <<"-----------------------------------------------------------------------------"<<endl;
    cout<<"Memoria dinamica"<<endl;
    cout<<"Malloc: "<<malloc (sizeof (int))<<endl;
    //guardar direccion en un puntero
    void* memoriaDinamica = malloc ((sizeof(int)));

    cout <<"-----------------------------------------------------------------------------"<<endl<<endl;
    cout <<"Cast variables"<<endl;
    int* punteroEntero = (int*) malloc(sizeof(int));
    *punteroEntero = 5;
    cout<<"Direccion: "<<punteroEntero<<endl;
    cout<<"Valor: "<<*punteroEntero<<endl;
    //Liberar memoria
    free(punteroEntero);
    cout <<"-----------------------------------------------------------------------------"<<endl<<endl;

    cout <<"-----------------------------------------------------------------------------"<<endl;
    cout<<"Memoria dinamica en c++ (oibjetos)"<<endl;
    cout<<"C++: "<<new Chorizo()<<endl;
    Chorizo* punteroCpp = new Chorizo();
    delete punteroCpp;

    // Indireccion vs operador ->
    // Indireccion
    (*punteroCpp).Inicializar();
    // operador ->
    punteroCpp ->Inicializar();



    return 0;
}   