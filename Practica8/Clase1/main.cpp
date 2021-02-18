#include <iostream>

using namespace std;


    ///Devuelve en numeros a las letras que se encuentran entre C1 y C2
    ///Muestra en numeros las letras que se encuentren en medio de C1 y C2
    /// 'a' -> 'f' => 'b','c', 'd', 'e','f'
   void printFromTo(char c1, char c2) {
        for(int i = 0; c1 + i <= c2; i++) {
        cout << c1 + i << ", ";
        }
    cout << endl;
    }

    ///Es el factorial de el numero recibido por parametro
    int fc(int n) {
        int x = 1;
        while(n > 0) {
            x = x * n;
            n--;
        }
    return x;
    }

    ///Precondici�n: n <= m
    ///Devuelve la suma de todos los numeros menores a 4 enteros
    int ft(int n, int m) {
        if (n == m) {
            return n;
        }
    return n + ft(n+1, m);
    }

    ///EJERCICIO 3

    struct Par {
        int x;
        int y;
    };

    /// Prop�sito: construye un par
    Par consPar(int x, int y){
        Par p;
        p.x= x;
        p.y= y;
        return p;
    }

    ///Prop�sito: devuelve la primera componente
    int fst(Par p){
        return p.x;
    };

    /// Prop�sito: devuelve la segunda componente
    int snd(Par p){
        return p.y;
    };
    /// Prop�sito: devuelve la mayor componente
    int maxDelPar(Par p){
        if( fst(p) > snd(p)){
            return fst(p);
        }
        return snd(p);
    };

    /// Prop�sito: devuelve un par con las componentes intercambiadas
    Par swap(Par p){
        return consPar(snd(p), fst(p));
    };

    /// Prop�sito: devuelve un par donde la primer componente
    /// es la divisi�n y la segunda el resto entre ambos n�meros
    Par divisionYResto(int n, int m){
        return consPar( (n / m) , (n% m));
    };

    ///EJERCICIO 4

    ///HACER RECURSIVO E ITERATIVO DE CADA UNO

    ///Prop�sito: imprime n veces un string s.
    ///iterativa
    /*void printN(int n, string s){
        int num = 0;
        while(n > num  ){
            num++;
           cout << "Devuelve: "<<  s  << endl;
        }
    };*/

    ///recursiva
    void printN(int n, string s){
        if(n > 0  ){
        cout << "Devuelve: "<<  s  << endl;
        printN( (n-1), s);
        }
    };

    ///Prop�sito: imprime los n�meros desde n hasta 0, separados por saltos de l�nea.
    ///recursiva

    /*void cuentaRegresiva(int n){
        cout << "Devuelve: "<<  (n) << endl;
        if(n > 0  ){
        cuentaRegresiva( (n-1));
        }
    };*/

    ///iterativa
    void cuentaRegresiva(int n){
        int num = n;
     while(num > 0 ){
        cout << "Devuelve: "<<  (num) << endl;
        num--;
     }
     cout << "Devuelve: "<<  (num) << endl;
    };

    ///Prop�sito: imprime los n�meros de 0 hasta n, separados por saltos de l�nea.
    ///Iterativa
    /*void desdeCeroHastaN(int n){
    int num = 0;
    while(num < n ){
        cout << "Devuelve: "<<  (num) << endl;
        num++;
     }
     cout << "Devuelve: "<<  (num) << endl;
    };*/

    ///Recursiva
    void desdeCeroHastaN(int n){
    int num = 0;
    while(num < n ){
        cout << "Devuelve: "<<  (num) << endl;
        num++;
     }
     cout << "Devuelve: "<<  (num) << endl;
    };

    ///Prop�sito: realiza la multiplicaci�n entre dos n�meros (sin utilizar la operaci�n * de C++).
    ///Iterativa
    /*int mult(int n, int m){
    int num = 0;
    int numFinal = 0;

    while(num < m ){
       numFinal = numFinal  + n;
       num++;
     }
    cout << "Devuelve: "<< numFinal << endl;
    }*/

    ///Recursiva
    int mult(int n, int m){
        if( (m-1) == 0  ){
           return n;
        }
        return n + (mult (n,(m-1) ));
    }

    ///Prop�sito: imprime los primeros n char del string s, separados por un salto de l�nea.
    ///Precondici�n: el string tiene al menos n char.
    ///Iterativa
    /*void primerosN(int n, string s){
        int num = 0;
        while(n > num ){
            cout << "Devuelve: "<< s[num] << endl;
            num++;
        }
    }*/

    ///Recursiva
    void primerosN(int n, string s){
        cout << "Devuelve: "<< s[n] << endl;
        if(n > 0 ){
            primerosN( (n-1) , s );
        }
    };

    ///Prop�sito: indica si un char c aparece en el string s.
    ///Iterativa
    /*int pertenece(char c, string s){
        int i = 0;
        while( i < s.size() ){
            if(s[i] == c ){
                return true;
            }
            i++;
        }
        return false;
    };*/

    ///Recursiva
    int pertenece(char c, string s){
       if( s.size() == 0){
        //cout << "Valor de  : " << (s.substr( 1,s.size()-1 )) << endl;
        return false;
        }
        return  c == s[0] || pertenece(c, (s.substr( 1,s.size()-1 ))) ;
    }

    ///Prop�sito: devuelve la cantidad de apariciones de un char c en el string s.
    ///Iterativa
    /*int apariciones(char c, string s){
        int i = 0;
        int cant = 0;
        while( i < s.size() ){
            if(s[i] == c ){
                cant++;
            }
            i++;
        }
        return cant;
    }*/

    ///Recursiva
    int apariciones(char c, string s){
       if( s.size() == 0){
        return 0;
        }
        return (c == s[0]) + apariciones(c, (s.substr( 1,s.size()-1 ))) ;
    }

    ///EJERCICIO 5

    struct Fraccion {
    float numerador;
    float denominador;
    };

    // Suponer que el denominador no es cero
    // Prop�sito: construye una fraccion
    Fraccion consFraccion(float numerador, float denominador){
        Fraccion f;
        f.numerador = numerador;
        f.denominador = denominador;
        return f;
    };

    // Prop�sito: devuelve el numerador
    float numerador(Fraccion f){
        return f.numerador;
    };

    // Prop�sito: devuelve el denominador
    float denominador(Fraccion f){
    return f.denominador;
    };

    // Prop�sito: devuelve el resultado de hacer la divisi�n
    float division(Fraccion f){
        return numerador(f) / denominador(f);
    };

    // Prop�sito: devuelve una fracci�n que resulta de multiplicar las fracciones
    // (sin simplificar)
    Fraccion multF(Fraccion f1, Fraccion f2){
      return consFraccion( (numerador(f1)* numerador(f2) ),(denominador(f1)* denominador(f2))  );
    };

    // Prop�sito: devuelve una fracci�n que resulta
    // de simplificar la dada por par�metro
    Fraccion simplificada(Fraccion p){
        while ( (numerador(p) %2 == 0) && (denominador(p) %2 == 0 )){
            if(  ){

            }
        }
        return
    };

    // Prop�sito: devuelve la primera componente
    Fraccion sumF(Fraccion f1, Fraccion f2){
         return consFraccion( numerador(f1), numerador(f2) );
    };


int main()
{
    ///EJERCICIO 1

    ///Devuelve 2
    //int x = 0;
    //int y = 2;
    //x = x+y;
    ///Devuelve x = 10 e Y = 5
    //int x = 0;
    //int y = 0;
    //while(y < 5) {
    //x += y;
    //y++;
    //}
    ///Devuelve b = 0 e y = 1
    //int y = 0;
    //bool b = true;
    //while(b) {
    //y++;
    //b = !b;
    //}

    ///EJERCICIO 2
    // Precondici�n: c1 < c2
    //printFromTo('a', 'z' );

    // Precondici�n: n >= 0

    ///EJERCICIO 3
    Par p =  consPar(4,5);
    Par pd = divisionYResto(9 , 3 );

    ///EJERCICIO 4
    //printN(5 , "Bokita campeon");
    //cuentaRegresiva(8);
    //desdeCeroHastaN(7);
    //cout << "Devuelve: "<< mult(4, 9)   << endl;
    //primerosN( 5, "MiNombreEsRoxana");
    //cout << "Devuelve metodo: "  << pertenece('a', "MiNombreEsRoxneee") << endl;
    //cout << "Devuelve metodo: "<< apariciones('a', "MiNombreEsRoxanaaaaaaaa eeehh")    << endl;

    ///EJERCICIO 5
    Fraccion f = consFraccion(4, 12);

    cout << "Devuelve: "<< f.denominador   << endl;
    cout << "Devuelve: "<< f.numerador   << endl;
    return 0;
}
