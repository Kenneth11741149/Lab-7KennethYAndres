#ifndef RADICAL_H
#define RADICAL_H

#include "Real.h"
#include<math.h>
using namespace std;
class Radical: public Real{
    private:
        double coeficiente;
        double indice;
        double radicando;
    public:
        Radical();
        Radical(double,double,double);

        string toString();
};
#endif