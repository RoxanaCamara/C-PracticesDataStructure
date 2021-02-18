#include <iostream>
#include "POkemon.h"

using namespace std;

struct EntrenadorSt;

typedef EntrenadorSt* Entrenador;

Entrenador consEntrenador(string nombre, int cantidad, Pokemon* pokemones);
///Dado un nombre, una cantidad de pokemones, y un array de pokemones de ese tamaño, devuelve un entrenador.

string nombreDeEntrenador(Entrenador e);
///Devuelve el nombre del entrenador.

int cantidadDePokemon(Entrenador e);
///Devuelve la cantidad de pokémon que posee el entrenador.

int cantidadDePokemonDe(TipoDePokemon tipo, Entrenador e);
///Devuelve la cantidad de pokémon de determinado tipo que posee el entrenador.

Pokemon pokemonNro(int i, Entrenador e);
///Devuelve el pokémon número i de los pokemones del entrenador.
///Precondición: existen al menos i − 1 pokemones.

bool leGanaATodos(Entrenador e1, Entrenador e2);
///Dados dos entrenadores, indica si, para cada pokemon del segundo entrenador, el primero posee al menos un pókemon que le gane.
bool lesGanaA(Pokemon pokemon, Entrenador e2);
