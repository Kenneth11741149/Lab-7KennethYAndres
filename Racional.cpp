#include "Racional.h"
#include "Real.h"

Racional::Racional():Real(){

}

Racional::Racional(double pnumerador, double pdenominador):Real(){
	numerador = pnumerador;
	denominador = pdenominador;
	valor = numerador/denominador;
}

void Racional::setNumerador(double pnumerador){
	numerador = pnumerador;
	valor = numerador/denominador;
}

void Racional::setDenominador(double pdenominador){
	denominador = pdenominador;
	valor = numerador/denominador;
}

string Racional::toString(){
	stringstream stream;
	stringstream stream2;

	stream << numerador;
	stream2 << denominador;

	string numerador2 = "";
	string denominador2 = "";
	stream >> numerador2;
	stream2 >>denominador2;
	string retVal;
	retVal = numerador2 + "/" + denominador2; 
	return retVal;
}
Racional::~Racional(){
	
}

