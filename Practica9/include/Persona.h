#include <iostream>

using namespace std;
//Que es estructura PersonaSt
struct PersonaSt;

//Es como renombrar a la direccion PersonaSt a Persona0
typedef PersonaSt* Persona;

Persona consPersona(string nombre, int edad);
///Devuelve el nombre de una persona

string nombre(Persona p);
///Devuelve el nombre de una persona

int edad(Persona p);
///Devuelve la edad de una persona

void crecer(Persona p);
///Aumenta en uno la edad de la persona.

void cambioDeNombre(string nombre, Persona p);
///Modifica el nombre una persona.

///Dadas dos personas indica si la primera es mayor que la segunda.
bool esMayorQueLaOtra(Persona p1, Persona p2);

Persona laQueEsMayor(Persona p1, Persona p2);
///Dadas dos personas devuelve a la persona que sea mayor.


///ACLARACIONES:
///EN LA "INTERFACE" NO SE UTILIZA PERSONA* YA QUE PERSONA ES UNA DIRECCION
/// Son lo mismo PersonaSt* == Persona

