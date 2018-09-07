#include "Radical.h"

Radical::Radical():Real(){
    valor = 0;
    coeficiente = 0;
    radicando = 0;
    indice = 0;
}

Radical::Radical(int pcoeficiente,int pindice,int pradicando):Real(){
    coeficiente = pcoeficiente;
    indice = pindice;
    radicando = pradicando;
    valor = coeficiente * pow(radicando,1/indice);
}

string Radical::toString(){
    return coeficiente + "(" + radicando + ")^1/"+ indice;
}

