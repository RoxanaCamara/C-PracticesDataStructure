#ifndef PAR_H
#define PAR_H


class Par
{
    struct Par {
    int x;
    int y;
    }

  ///EJERCICIO 3

  /// Prop�sito: construye un par
    Par consPar(int x, int y){
        Par p;
        p.x= x;
        p.y= y;
        return p;
    };

};

#endif // PAR_H
