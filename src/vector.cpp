#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <list>
#include <set>


using namespace std;

enum Columnas{
    INDICE,
    NOMBRE,
    NUMERO,
    TIPO,
    ETAPA,
    ANTECESOR,
    ANTECESOR_NO

};
enum TipoPokemon {
    FUEGO,
    AGUA,
    PLANTA,
    ELECTRICIDAD,
    VENENO

};

class Pokemon {
private:
    string nombre;
    set <TipoPokemon> tipos;
    int nivel;
public:
    Pokemon(string nombre, set< TipoPokemon> tipos, int nivel) {
        this->nombre = nombre;
        this->tipos = tipos;
        this->nivel = nivel;
    }

    string GetNombre() {
        return nombre;
    }
};

int main(int argc, char const *argv[]) {
    // arreglo clásico
    string frases[10];
    frases[0] = "Frase 1";
    frases[1] = "Frase 2";

    // vector de frases
    vector<string> vFrases;
    vFrases.push_back("Primera Frase");
    vFrases.push_back("Segunda Frase");
    vFrases.push_back("Tercera Frase");
    vFrases.push_back("Cuarta Frase");

    // vector de enteros
    vector<int> vEnteros;
    vEnteros.push_back(3);
    vEnteros.push_back(5);
    vEnteros.push_back(1);
    vEnteros.push_back(0);

    
      

    fstream pokeCSV ("assets/pokedex.csv");
    if (!pokeCSV){
        cerr<< "Error leyendo archivo del pokedex"<<endl;
        return EXIT_FAILURE;
    }

    string linea;
    // vector de objetos Pokemon
    vector<Pokemon> pokedex;
    pokedex.push_back(Pokemon("Misingno",{TipoPokemon::VENENO},999));
    while (getline(pokeCSV, linea))
    {
        //convertir a un string de cadena
        stringstream ss(linea);
        //Extraer un valor y guardar en la lista
        string valor;
        //crear lista temporal para las columnas
        vector <string>listaColumnas;
        while(getline(ss, valor, ',')){
            listaColumnas.push_back(valor);
        }

        try
        {
          //crear el pokemon
            Pokemon p(listaColumnas.at(Columnas::NOMBRE), 
            {TipoPokemon::AGUA},
            stoi(listaColumnas.at(Columnas::ETAPA))
            );
            // agregar el pokemon al pokedex
            pokedex.push_back(p); 
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
        
    }
    cout <<"Pokemon cargados al pokedex = " << pokedex.size()<<endl;
    cout<<"EL pokemon 5 es "<<pokedex.at(5).GetNombre()<<endl;

    return EXIT_SUCCESS;
}
