#ifndef RADICAL_H
#define RADICAL_H

#include "Real.h"
#include<math.h>
using namespace std;
class Radical: public Real{
    private:
        int coeficiente;
        int indice;
        int radicando;
    public:
        Radical();
        Radical(int,int,int);

        string toString();
};
#endif