#include "Radical.h"
#include<iostream>
using namespace std;
Radical::Radical():Real(){
    valor = 0;
    coeficiente = 0;
    radicando = 0;
    indice = 0;
}

Radical::Radical(double pcoeficiente,double pindice,double pradicando):Real(){
    coeficiente = pcoeficiente;
    indice = pindice;
    radicando = pradicando;
    cout << pow(radicando,1/indice)<< endl;
    valor = coeficiente * pow(radicando,1/indice);
    cout << valor;
}

string Radical::toString(){
    return to_string(coeficiente) + "(" + to_string(radicando) + ")^1/" + to_string(indice);
}

