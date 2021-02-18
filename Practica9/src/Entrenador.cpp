#include "Entrenador.h"
#include "POkemon.h"

struct EntrenadorSt {
    string nombre;
    Pokemon* pokemones;
    int cantPokemon;
};

Entrenador consEntrenador(string nombre, int cantidad, Pokemon* pokemones){
    EntrenadorSt* e = new EntrenadorSt;
    e->nombre=nombre;
    e->pokemones= pokemones;
    e->cantPokemon=cantidad;
    return e;
};


///Dado un nombre, una cantidad de pokemones, y un array de pokemones de ese tamaño, devuelve un entrenador.

string nombreDeEntrenador(Entrenador e){
    return e->nombre;
};
///Devuelve el nombre del entrenador.

int cantidadDePokemon(Entrenador e){
    return e->cantPokemon;
};
///Devuelve la cantidad de pokémon que posee el entrenador.

int cantidadDePokemonDe(TipoDePokemon tipo, Entrenador e){
    int pokes = 0;
    for(int i = 0; i < e->cantPokemon; i++ ){
        if( tipoDePokemon(e->pokemones[i]) == tipo ){
            pokes++;
        }
    }
    return pokes;
};
///Devuelve la cantidad de pokémon de determinado tipo que posee el entrenador.

Pokemon pokemonNro(int i, Entrenador e){
    return e->pokemones[i];
};
///Devuelve el pokémon número i de los pokemones del entrenador.
///Precondición: existen al menos i − 1 pokemones.

bool leGanaATodos(Entrenador e1, Entrenador e2){
    for(int i = 0; i < e1->cantPokemon; i++ ){
        if( lesGanaA(e1->pokemones[i], e2  )){
            return true;
        }
    }
    return false;
};

bool lesGanaA(Pokemon pokemon, Entrenador e2){
    bool ganador = true;
     for(int i = 0; i < e2->cantPokemon; i++ ){
        ganador = ganador && superaA(pokemon, e2->pokemones[i]);
        }
    return ganador;
};

///Dados dos entrenadores, indica si, para cada pokemon del segundo entrenador,
/// el primero posee al menos un pókemon que le gane.
