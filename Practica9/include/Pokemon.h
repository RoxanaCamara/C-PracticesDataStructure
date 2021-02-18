#include <iostream>
using namespace std;

struct PokemonSt;

typedef  string TipoDePokemon;
typedef PokemonSt* Pokemon;

Pokemon consPokemon(TipoDePokemon tipo);
///Dado un tipo devuelve un pok�mon con 100 % de energ�a.

TipoDePokemon tipoDePokemon(Pokemon p);
///Devuelve el tipo de un pokemon.

int energia(Pokemon p);
///Devuelve el porcentaje de energ�a.

void perderEnergia(int energia, Pokemon p);
///Le resta energ�a al pok�mon.

bool superaA(Pokemon p1, Pokemon p2);
///Dados dos pok�mon indica si el primero, en base al tipo, es superior al segundo. Agua supera
///a fuego, fuego a planta y planta a agua. Y cualquier otro caso es falso.
