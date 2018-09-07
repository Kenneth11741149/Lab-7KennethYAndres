#ifndef RADICAL_H
#define RADICAL_H

#include "Real.h"
class Radical: public Real{
    private:
        int coeficiente;
        int indice;
        int radicando;
    public:
        Radical();
};
#endif