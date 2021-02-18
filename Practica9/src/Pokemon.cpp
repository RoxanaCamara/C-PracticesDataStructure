#include "Pokemon.h"

struct PokemonSt {
    TipoDePokemon tipo;
    int vida;
};

Pokemon consPokemon(TipoDePokemon tipo){
    PokemonSt* p = new PokemonSt;
    p->tipo=tipo;
    p->vida=100;
    return p;
};
///Dado un tipo devuelve un pok�mon con 100 % de energ�a.

TipoDePokemon tipoDePokemon(Pokemon p){
    return p->tipo;
};
///Devuelve el tipo de un pokemon.

int energia(Pokemon p){
    return p->vida;
}
///Devuelve el porcentaje de energ�a.

void perderEnergia(int energia, Pokemon p){
    p->vida= p->vida - energia;
};
///Le resta energ�a al pok�mon.

bool superaA(Pokemon p1, Pokemon p2){
    return
    (p1->tipo == "agua" && p2->tipo == "fuego" ) ||
    (p1->tipo == "fuego" && p2->tipo == "planta")||
    (p1->tipo == "planta" && p2->tipo == "agua");
};
///Dados dos pok�mon indica si el primero, en base al tipo, es superior al segundo. Agua supera
///a fuego, fuego a planta y planta a agua. Y cualquier otro caso es falso.
