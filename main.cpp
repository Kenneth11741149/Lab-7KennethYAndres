#include "Real.h"
#include "Racional.h"
#include "Radical.h"


#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <sstream>
using std::stringstream;


//Vamos por el stringstream stream6;
vector<Real*> banco;
int main(){
	cout << "Bienvenido al laboratorio del Grupo#1 Compuesto por ANDRES MONCADA Y KENNETH NUÑEZ	" << endl;
	char resp = 's';
	while(resp == 'S' || resp == 's'){
		cout << "1. Agregar numero al banco." << endl;
		cout << "2. Hacer Operaciones." << endl;
		int option = 0;
		stringstream stream;
		string input = "";
		cin >> option;
		stream << input;
		stream >> option;
		double numero;
		double numerador;
		double denominador;
		double constante;
		switch(option){
			case 1:{


				cout << "Que tipo de numero es:? " << endl;
				cout << "1. Real" << endl;
				cout << "2. Racional" << endl;
				cout << "3. Radical" << endl;
				int option2 = 0;
				input = "";
				cin >> input;
				stringstream stream2;
				stream2 << input;
				stream2 >> option2;
				switch(option2){
					case 1:{

						cout << "Ingresa el numero." << endl;
						numero = 0;
						input = "";
						cin >> input;
						stringstream stream3;
						stream3 << input;
						stream3 >> numero;
						cout << "El numero real es: " << numero << endl;
						Real* newReal = new Real(numero);
						banco.push_back(newReal);
						} // Fin de la llave del switch case1  option2.
						break;
					case 2:{
						cout << "Ingrese el numerador. " << endl;
						numerador = 0;
						input = "";
						cin >> input;
						stringstream stream4;
						stream4 << input;
						stream4 >> numerador;
						//cout << "Numerador: " << numerador << endl;


						cout << "Ingrese el denominador. " << endl;
						denominador = 0;
						input = "";
						cin >> input;
						stringstream stream5;
						stream5 << input;
						stream5 >> denominador;
						//cout << "El demominador es: " << denominador << endl;


						if(denominador != 0){
							Racional* newRacional = new Racional(numerador,denominador);
							banco.push_back(newRacional);
						} else {
							cout << "denominador es 0 y eso no se puede." << endl;
						}
						


						} //fin del case 2 (option 2)
						break;
					case 3:{
						cout << "Ingrese la constante: " << endl;
						constante = 0;
						input = "";
						stringstream stream6;
						stream6 << input;
						stream6 >> constante;
						cout << "La constante es: " << constante << endl;

						cout << "Ingrese el indice:" << endl;




					} // FIn del case 3 (option2)
						break;

					default:
						cout << "Opcion totalmente Invalida" << endl;
						break;
				} // FIn del switch(option 2)





				} //Fin de la llave del case 1 de switch(option)
				break; // Fin del case1  switch (option)
			case 2:
				break;// Fin del case2  switch (option)
			default:
				cout << "Opcion totalmente invalida." << endl;
				break; //Fin del default Switch(option)
		} // fin del switch case con option







		cout << "Desea Volver al menu?  [S/N]?" << endl;
		cin >> resp;
	} // Fin del mientras con respuesta de usuario.







	return 0;
} //fin dle main.