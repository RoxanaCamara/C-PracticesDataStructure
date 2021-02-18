#include <iostream>
#include "Persona.h"
#include "Pokemon.h"
#include "Entrenador.h"
#include "ArrayListSt.h"

using namespace std;

int main()
{
    //Persona p1 = consPersona("Ron", 24);
    //Persona p2 = consPersona("Damina", 27);
    //cambioDeNombre("Nara", p);
    //cout << "Verdadero " << true << " Falso " << false << endl;
    //cout << "Aparece " << esMayorQueLaOtra(p1, p2) << endl;
    //cout << "Aparece " << nombre (laQueEsMayor(p2, p1)) << endl;

    /*Pokemon squirtle = consPokemon("agua");
    Pokemon charmander  = consPokemon("fuego");
    Pokemon bulbasaur = consPokemon("planta");
    Pokemon pikachu = consPokemon("electrico");
    Pokemon magikarp = consPokemon("agua");
    Pokemon eevee = consPokemon("normal");*/

    /*cout <<"Gana "<< superaA(squirtle,charmander) << endl;
    cout <<"Gana "<< superaA(charmander,bulbasaur ) << endl;
    cout <<"Gana "<< superaA(bulbasaur,squirtle) << endl;*/
    //cout <<"Gana "<< superaA(bulbasaur,eevee) << endl;

    /*cout <<"Pierde "<< superaA(charmander,squirtle) << endl;
    cout <<"Pierde "<< superaA(squirtle,bulbasaur ) << endl;
    cout <<"Pierde "<< superaA(bulbasaur, charmander ) << endl;*/

    //Pokemon pokes1[6] = {squirtle, pikachu, bulbasaur, charmander, magikarp, eevee};
    //Pokemon pokes2[6] = {squirtle, squirtle, squirtle, squirtle, magikarp, magikarp};
    //Entrenador ash = consEntrenador( "Ash", 6 , pokes2 );
    //Entrenador misty = consEntrenador( "Ash", 6 , pokes1 );
    //cout << "Aparece " << cantidadDePokemonDe("agua", ash) << endl
    //cout << "Aparece " << leGanaATodos(misty, ash) << endl;
    //cout << "Aparece " << leGanaATodos(misty, ash) << endl;
     ArrayList lista = newArrayListWith(18);
     set(14,1995, lista);
     set(15,1996, lista);
     set(16,1997, lista);
     add( 1998, lista);
     cout << "Aparece " << lengthAL(lista) << endl;
     resize(15, lista);
     cout << "Aparece " << lengthAL(lista) << endl;


    return 0;
}
