#ifndef RACIONAL_H
#define RACIONAL_H
#include "Real.h"
class Racional:public Real{
	private:
		int numerador;
		int denominador;

	public:
	Racional();
	Racional(int,int);

	int getNumerador(){
		return numerador;
	}

	int getDenominador(){
		return denominador;
	}

	void setNumerador(int);
	void setDenominador(int);
	string toString();
	~Racional();


};
#endif