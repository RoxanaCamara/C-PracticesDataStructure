#include "Investigacion.h"
#include "Persona.h"


struct InvestigacionSt {
ArrayList sospechosos; // lista de Persona
};

///INVARIANTE: Una investigacion debe empezar sin sospechosos
///Costo: Constante
///
Investigacion comenzarInvestigacion(){
    InvestigacionSt* i = new InvestigacionSt;
    i->sospechosos = emptyAL();
    return i;
};

///INVARIANTE: Investigacion debe tener al menos un sospechoso
///Costo: Lineal
///
ArrayList nombresIngresados(Investigacion investigacion){
    ArrayList nombres = emptyAL();
    int i = 1;
    while( isValidIndex( i , investigacion->sospechosos ) ){
       add( (get(i, investigacion->sospechosos)->nombre), nombres);
       i++;
    }
    return nombres;
};


///INVARIANTE: Las personas dentro de la investigacion deben tener 0 a mas evidencias
///Costo: Lineal
///
int cantEvidenciaDePersonas(Investigacion investigacion){
    int cantidadEv = 0;
    int i = 1;
    while( isValidIndex( i ,investigacion->sospechosos; ) ){
        cantidadEv = cantidadEv + (get(i, investigacion->sospechosos;)->evidencia);
        i++;
    }
    return cantidadEv;
};

///INVARIANTE: Las personas dentro de la investigacion deben tener 0 a mas evidencias
///Costo: Lineal
///
bool casoCerrado(Investigacion investigacion){
    int i = 1;
    while( isValidIndex( i , investigacion->sospechosos ) ){
        if(get(i, investigacion->sospechosos)->evidencia >= 5){
            return true;
        }
        i++;
    }
    return false;
};

///INVARIANTE: Ninguna
///Costo: Lineal
///
bool esSospechosa(string nombre, Investigacion investigacion){
    int i = 1;
    while( isValidIndex( i , investigacion->sospechosos ) ){
        if(get(i, investigacion->sospechosos)->nombre == nombre){
            return true;
        }
        i++;
    }
    return false;
};


///INVARIANTE: Las personas dentro de la investigacion deben tener 0 a mas evidencias
/// no existen otros tipo de numeros que no sean enteros
///Costo: Lineal
///
ArrayList posiblesInocentes(Investigacion investigacion){
    ArrayList nombres = emptyAL();
    int i = 1;
    while( isValidIndex( i , investigacion->sospechosos ) ){
        if((get(i, investigacion->sospechosos)->evidencia) == 0 ){
              add( (get(i, investigacion->sospechosos)->nombre), nombres);
        }
       i++;
    }
    return nombres;
};

///INVARIANTE: Las personas ingresadas en la investigacion inician con cero evidencias y no existen en la investigacion
///Costo: Lineal
///
void ingresarPersonas(ArrayList nombres, Investigacion investigacion){
    int i = 1;
    while( isValidIndex( i , nombres ) ){
       add( constPersona( get(i, nombres)  ) , investigacion->sospechosos);
       i++;
    }
};

///INVARIANTE: La lista de personas no debe estar vacia
///Costo: Lineal
///
void ingresarUnaEvidencia(ArrayList nombres, Investigacion investigacion){
    int i = 1;
    while( isValidIndex( i , investigacion->sospechosos  ) ){
        if( pertenece(  get(i,investigacion->sospechosos), nombres  )  ){
           Persona p = constPersona(nombre);
           p.aumentarEvidencia();
            set(i,p,investigacion->sospechosos);
        }
        i++;
    }
};

///INVARIANTE: Ninguna
///Costo: Lineal
///
bool pertenece(String nombre, ArrayList nombres){
    int i = 1;
    while( isValidIndex( i , nombres ) ){
        if(get(i, nombres) == nombre){
            return true;
        }
        i++;
    }
    return false;
}

