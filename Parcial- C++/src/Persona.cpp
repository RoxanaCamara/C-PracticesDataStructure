#include "Persona.h"

struct PersonaSt {
    string nombre;
    int evidencia;
};

///INVARIANTE: La persona inicia sin evidencia en su contra
///Costo: Constante
///
Persona constPersona(String nombre){
    PersonaSt* p = new PersonaSt;
    p->nombre=nombre;
    p->evidencia= 0;
    return p;
}

///INVARIANTE: La persona inicia sin evidencia en su contra
///Costo: Constante
///
void aumentarEvidencia( ){
    p->evidencia++;
}
