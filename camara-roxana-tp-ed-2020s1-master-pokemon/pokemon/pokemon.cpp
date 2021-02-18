#include <iostream>
#include <string>
#include "pokemon.h"

struct PokemonSt {
    std::string nombre;
    TipoDePokemon tipoDePokemon;
};

Pokemon mkPokemon(std::string nombre, TipoDePokemon tipoDePokemon){
    PokemonSt* pk = new PokemonSt;
    pk->nombre = nombre;
    pk->tipoDePokemon = tipoDePokemon;
    return pk;
}

// indica si el pokemon es de dicho tipo
bool esTipoDePokemon(Pokemon pokemon, TipoDePokemon tipoDePokemon){
    return pokemon->tipoDePokemon == tipoDePokemon;
}

bool superaA(Pokemon primero, Pokemon segundo){
    return 
    (primero->tipoDePokemon==AGUA && segundo->tipoDePokemon==FUEGO ) ||
    (primero->tipoDePokemon==FUEGO && segundo->tipoDePokemon==PLANTA )||
    (primero->tipoDePokemon==PLANTA && segundo->tipoDePokemon==AGUA );
}

void destroyPokemon(Pokemon pokemon){
    delete pokemon;
}
