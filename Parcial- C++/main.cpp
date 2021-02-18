#include <iostream>
#include "Investigacion.h"
#include "Persona.h"

using namespace std;

int main()
{

///INVARIANTE: Debe existir uno o mas inocentes en la investigacion
///Costo: Lineal
///
  int cantidadDeInocentes(Investigacion investigacion){
      ArrayList todosInocentes = posiblesInocentes( Investigacion );
      int i = 1;
      while( isValidIndex(i, todosInocentes ) ){
        i++;
      }
      return i;
    };

///INVARIANTE: Debe tener al menos un sospechoso
///Costo: Lineal
///
    bool seCierraSiSeAñadenEstasEvidencias(ArrayList nombres, int evidencias, Investigacion investigacion){
    int i = evidencias;
    while( i == 0 ){
        ingresarUnaEvidencia(nombres, investigacion );
        i = i-1;
    }
    return casoCerrado(investigacion);
    };

///INVARIANTE: Deben tener al menos una persona la investigacion
///Costo: Lineal
///
    bool todasInocentes(Investigacion investigacion){
        int i = 1;
       ArrayList todos = nombresIngresados(investigacion);
       while( isValidIndex(i, todos ) ){
            i++;
      }
        return cantidadDeInocentes(investigacion) == i;
    };



}
