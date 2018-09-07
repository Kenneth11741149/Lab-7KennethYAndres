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
}

void Racional::setDenominador(int pdenominador){
	denominador = pdenominador;
}

