#include "ArrayListSt.h"

struct ArrayListSt {
    int cantidad; // cantidad de elementos
    int* elementos; // array de elementos
    int capacidad; // tamaño del array
};

ArrayList newArrayList(){
    ArrayListSt* l = new ArrayListSt;
    l->cantidad=0;
    l->elementos = new int[16];
    l->capacidad= 16;
    return l;
};
///Crea una lista con 0 elementos.
///Nota: empezar el array list con capacidad 16.

ArrayList newArrayListWith(int capacidad){
   ArrayListSt* l = new ArrayListSt;
    l->cantidad=0;
    l->elementos = new int[capacidad];
    l->capacidad= capacidad;
    return l;
};
///Crea una lista con 0 elementos y una capacidad dada por parámetro.

int lengthAL(ArrayList xs){
    return xs->cantidad;
};
///Devuelve la cantidad de elementos existentes.

int get(int i, ArrayList xs){
    return xs->elementos[i];
};
///Devuelve el iésimo elemento de la lista.

int set(int i, int x, ArrayList xs){
    if( xs->cantidad < i){
            xs->cantidad++;
    }
    xs->elementos[i] = x;
};
///Reemplaza el iésimo elemento por otro dado.

void resize(int capacidad, ArrayList xs){
    if(capacidad < xs->cantidad ){
     xs->cantidad=capacidad;
    }
    xs->elementos = new int[capacidad];
    xs->capacidad= capacidad;
};
//Decrementa o aumenta la capacidad del array.
//Nota: en caso de decrementarla, se pierden los elementos del final de la lista.

void add(int x, ArrayList xs){
    xs->elementos[xs->cantidad] = x;
};
//Agrega un elemento al final de la lista.
//void remove(ArrayList xs){};
//Borra el último elemento de la lista.
