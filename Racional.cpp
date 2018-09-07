#include "Racional.h"
#include "Real.h"

Racional::Racional():Real(){

}

Racional::Racional(int pnumerador, int pdenominador):Real(){
	numerador = pnumerador;
	denominador = pdenominador;
	valor = numerador/denominador;
}

void Racional::setNumerador(int pnumerador){
	numerador = pnumerador;
	valor = numerador/denominador;
}

void Racional::setDenominador(int pdenominador){
	denominador = pdenominador;
	valor = numerador/denominador;
}

string Racional::toString(){
	stringstream stream;
	stringstream stream2;

	stream << numerador;
	stream << denominador;

	string retVal;
	retVal = numerador + "/" + denominador; 
	return retVal;
}

