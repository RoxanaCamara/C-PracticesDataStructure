#include <iostream>
#include <string>
#include "entrenador.h"

/////////////[]

struct EntrenadorSt
{
    std::string nombre;
    int cantidadDePokemones;
    Pokemon* pokemones;
};

// contruye un entrenador
Entrenador mkEntrenador(std::string nombre)
{
    EntrenadorSt* entr = new EntrenadorSt;
    entr->nombre = nombre;
    entr->cantidadDePokemones = 0;

    entr->pokemones = NULL;
}

// Agrega dicho pokemon a la lista del entrenador
void capturar(Entrenador entrenador, Pokemon pokemon)
{
    int cantPks = entrenador->cantidadDePokemones;
    Pokemon* pksNew = new Pokemon[cantPks];

    if( cantPks > 0  ){
        for (int i = 0; i < entrenador->cantidadDePokemones; i++){
            pksNew[i] = entrenador->pokemones[i];
        }
    }
    cantPks++;
    pksNew[cantPks] = pokemon;
    entrenador->pokemones = pksNew;
    entrenador->cantidadDePokemones = cantPks;
}

// Devuelve la cantidad de pokemon que posee el entrenador.
int cantPokemones(Entrenador entrenador)
{
    return entrenador->cantidadDePokemones;
}

// Devuelve la cantidad de pokemon de determinado tipo que posee el entrenador.
int cantPokemonesDe(Entrenador entrenador, TipoDePokemon tipoDePokemon)
{
    int cantPks = 0;
    Pokemon* pksOld = entrenador->pokemones;
     if ( entrenador->cantidadDePokemones > 0 ){
        for (int i = 0; i < entrenador->cantidadDePokemones; i++)
        {
            if (esTipoDePokemon(pksOld[i], tipoDePokemon))
            {
                cantPks++;
            }
        }
    }
    return cantPks;
}

// Dada una array de entrenadores devuelve la concatenacion de todos sus pokemon.
Pokemon* concatPokemon(Entrenador *entrenadores, int cantidadEntrenadores)
{
    std::cout << "Falta completar concatPokemon" << std::endl;
    exit(1);
}

// Dado un entrenador, devuelve True si posee al menos un pokemon de cada tipo posible.
bool esMaestro(Entrenador entrenador)
{
    std::cout << "Falta completar esMaestro" << std::endl;
    exit(1);
}

// Dado un entrenador libera la memoria ocupada por el mismo
void destroyEntrenador(Entrenador entrenador)
{
    std::cout << "Falta completar destroyEntrenador" << std::endl;
    exit(1);
}
