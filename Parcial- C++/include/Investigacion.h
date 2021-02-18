#include <iostream>

using namespace std;

typedef InvestigacionSt* Investigacion;

Investigacion comenzarInvestigacion();
//Propósito: crea una investigación sin personas.

ArrayList nombresIngresados(Investigacion investigacion);
//Propósito: devuelve los nombres de personas ingresadas.
//Nota: suponer que el ArrayList es de nombres.

int cantEvidenciaDePersonas(Investigacion investigacion);
//Propósito: devuelve la sumatoria de evidencia de las personas.

bool casoCerrado(Investigacion investigacion);
//Propósito: indica si la investigación posee al menos una persona con al menos 5 evidencias en su contra

bool esSospechosa(string nombre, Investigacion investigacion);
//Propósito: indica si esa persona tiene al menos una evidencia en su contra.
//Nota: la persona puede no existir.

ArrayList posiblesInocentes(Investigacion investigacion);
//Propósito: devuelve a las personas con cero evidencia en su contra

void ingresarPersonas(ArrayList nombres, Investigacion investigacion);
//Propósito: ingresa a personas nuevas a la investigación (mediante sus nombres), sin evidencia en su contra.
//Nota: suponer que el ArrayList es de nombres.
//Precondición: las personas no existen en la investigación y no hay nombres repetidos.

void ingresarUnaEvidencia(ArrayList nombres, Investigacion investigacion);
//Propósito: incrementa en uno la evidencia a una lista de personas.
//Precondición: la evidencia aún no está asociada a esa persona.
