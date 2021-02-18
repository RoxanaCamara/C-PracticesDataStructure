#include "entrenador.cpp"
#include "pokemon.cpp"
#include <iostream>
#include <string>


using namespace std;

int main(){
    Pokemon pk1 = mkPokemon( "skuirtle", AGUA );
    Pokemon pk2 = mkPokemon( "chorizard", FUEGO );
    cout<< "nombre: " << pk1->nombre << std::endl;
    cout<< "tipo: "<< pk1->tipoDePokemon  << std::endl;
    cout << std::endl;
    cout<< "Es de tipo awa "<< esTipoDePokemon(pk1, AGUA) << std::endl;
    cout<< "Es de tipo fuego: "<< esTipoDePokemon(pk1, AGUA) << std::endl;
    cout << std::endl;
    cout<< "true: "<< true << std::endl;
    cout<< "false: "<< false<< std::endl;
    cout << std::endl;
    cout<< "Supera skuirtle a chorizard? : "<< superaA(pk1, pk2) << std::endl;
    cout<< "Supera chorizard a skuirtle? : "<< superaA(pk2, pk1) << std::endl;
    cout << std::endl;
    destroyPokemon(pk1);


    cout << std::endl;
    Entrenador entr = mkEntrenador( "Ash el pierde ligas");
    cout<< "Nombre de entrenador: "<< entr->nombre << std::endl;
    cout << std::endl;
    capturar(entr, pk2);
    cout<< "Cant pokemones: "<< entr->cantidadDePokemones << std::endl;
    cout << std::endl;
    cout<< "Cant pokemones tipo FUEGO el IF: "<<  esTipoDePokemon(entr->pokemones[1], FUEGO) << std::endl;
    cout<< "Cant pokemones tipo FUEGO: "<<  cantPokemonesDe(entr, FUEGO) << std::endl;
    cout << std::endl;
    return 0;
}
