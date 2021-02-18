#include <iostream>
#include <string>


struct PokemonSt;
typedef PokemonSt* Pokemon;
typedef std::string TipoDePokemon;

#define AGUA "AGUA"
#define FUEGO "FUEGO"
#define PLANTA "PLANTA"

// completar el resto de los tipos

Pokemon mkPokemon(std::string nombre, TipoDePokemon tipoDePokemon);

// Dados dos pokemon indica si el primero, en base al tipo, es superior al segundo. Agua
// supera a fuego, fuego a planta y planta a agua. Y cualquier otro caso es falso.
bool superaA(Pokemon primero, Pokemon segundo);

// indica si el pokemon es de dicho tipo
bool esTipoDePokemon(Pokemon pokemon, TipoDePokemon tipoDePokemon);

// Dados dos pokemon libera la memoria ocupada por el mismo
void destroyPokemon(Pokemon pokemon);
