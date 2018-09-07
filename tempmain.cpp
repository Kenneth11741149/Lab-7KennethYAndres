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
						} // Fin de la llave del switch case1  option2.
						break;
					case 2:
						break;
					case 3:
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
                Real* r1;
                Real* r2;
                imprimirBanco();
                int index;
                cout << "Ingrese el índice del primer número: ";
                cin >> index;
                r1 = banco[index];
                cout << "Ingrese el índice del segundo número: ";
                cin >> index;
                r2 = banco[index];
                double resultado;
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
    cout << "Índice " << "Número";
    for (int i = 0; i < banco.size(); i++){
        cout << i << ".     " << banco[i]->toString();
    }
}