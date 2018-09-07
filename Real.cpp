#include "Real.h"

Real::Real(){
}

Real::Real(double pvalor){
    valor = pvalor;
}

double Real::getValor(){
    return valor;
}

double Real::operator+(Real* pr){
    return this->getValor() + pr->getValor();
}

double Real::operator-(Real* pr){
    return this->getValor() + pr->getValor();
}

double Real::operator*(Real* pr){
    return this->getValor() * pr->getValor();
}

double Real::operator/(Real* pr){
    return this->getValor() / pr->getValor();
}

bool Real::operator==(Real* pr){
    return (this->getValor() == pr->getValor());
}

string Real::toString(){
    return to_string(valor);
}

Real::~Real(){

}