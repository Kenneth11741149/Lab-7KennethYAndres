#ifndef RACIONAL_H
#define RACIONAL_H
#include "Real.h"
class Racional:public Real{
	private:
		double numerador;
		double denominador;

	public:
	Racional();
	Racional(double,double);

	double getNumerador(){
		return numerador;
	}

	double getDenominador(){
		return denominador;
	}

	void setNumerador(double);
	void setDenominador(double);
	string toString();
	~Racional();


};
#endif