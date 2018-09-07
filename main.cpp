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
void imprimirBanco();

//Vamos por el stringstream stream8;
vector<Real> banco;
int main(){
	cout << "Bienvenido al laboratorio del Grupo#1 Compuesto por ANDRES MONCADA Y KENNETH NUÑEZ	" << endl;
	char resp = 's';
	while(resp == 'S' || resp == 's'){
		cout << endl;
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
		double indice;
		double radicando;

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
						Real newReal(numero);
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
							Racional newRacional(numerador,denominador);
							banco.push_back(newRacional);
						} else {
							cout << "denominador es 0 y eso no se puede." << endl;
						} // FIn del if de validacion de que el denominador no pueda ser 0;
						


						} //fin del case 2 (option 2)
						break;
					case 3:{
						cout << "Ingrese la constante: " << endl;
						constante = 0;
						input = "";
						cin >> input;
						stringstream stream6;
						stream6 << input;
						stream6 >> constante;
						cout << "La constante es: " << constante << endl;

						cout << "Ingrese el indice:" << endl;
						indice = 0;
						input == "";
						stringstream stream7;
						cin >> input;
						stream7 << input;
						stream7 >> indice;
						
						cout << "El indice es: " << indice << endl;

						cout << "Ingrese el radicando: " << endl;
						radicando = 0;
						input = "";

						stringstream stream8;
						cin >> input;
						stream8 << input;
						stream8 >> radicando;
						cout << "El radicando es: " << radicando << endl;

						if(indice == 0){
							cout << "El indice no puede ser 0" << endl;
						} else {
							Radical newRadical = Radical(constante,indice,radicando);
							banco.push_back(newRadical);
						}



					} // FIn del case 3 (option2)
						break;

					default:
						cout << "Opcion totalmente Invalida" << endl;
						break;
				} // FIn del switch(option 2)





				} //Fin de la llave del case 1 de switch(option)
				break; // Fin del case1  switch (option)
			case 2:{
                int sub;
                cout << "1. Sumar" << endl << "2. Restar" << endl << "3. Multiplicar"
                << endl << "4. Dividir" << endl << "Ingrese una opción: ";
                cin >> sub;
                Real r1;
                Real r2;
                cout << "Desea ingresar su propio numero o usar uno del banco ? [1/0]" << endl;
                double d;
                input = "";
                cin >> input;
                stringstream stream9;
                stream9 << input;
                int validador = 0;
                stream9 >> validador;
                double resultado;
                if(validador == 1){
                	cout << "Ingrese el numero: " << endl;
                	cin >> d; 
                	imprimirBanco();
	                int index;
	                cout << "Ingrese el índice del primer número: ";
	                cin >> index;
	                r1 = banco[index];
	                switch(sub){
	                    case 1:
	                        resultado = r1 + d;
	                        break;
	                    case 2:
	                        resultado = r1 - d;
	                        break;
	                    case 3:
	                        resultado = r1 * d;
	                        break;
	                    case 4:
	                    	if(d == 0){
	                    		cout << "No se puede dividir por 0" << endl;
	                    		resultado = 0;
	                    	} else {
	                    		resultado = r1 / d;
	                    	}

	                        break;
	                }
                } else {
                	imprimirBanco();
	                int index;
	                cout << "Ingrese el índice del primer número: ";
	                cin >> index;
	                r1 = banco[index];
	                cout << "Ingrese el índice del segundo número: ";
	                cin >> index;
	                r2 = banco[index];
	                switch(sub){
	                    case 1:
	                        resultado = r1 + r2;
	                        break;
	                    case 2:
	                        resultado = r1 - r2;
	                        break;
	                    case 3:
	                        resultado = r1 * r2;
	                        break;
	                    case 4:
	                        resultado = r1 / r2;
	                }
                }
                
                cout << "El resultado es: " << resultado << endl;
            }
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

void imprimirBanco(){
    cout << "Índice " << "Número" << endl;
    for (int i = 0; i < banco.size(); i++){
        cout << i << ".     " << banco[i].toString() << endl;
    }
}