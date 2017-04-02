//
//  ExepcionEnC++.cpp
//
//  Created by Juan David Tello on 11/02/17.
//  Last modification on 12/02/17

//                  UNIVERSIDAD DEL VALLE
//  ASIGNATURA:     Progrmacion Interactiva 3SEM - 2017 IVAN CABEZAS
//
//  INTEGRANTES:    JUAN TELLO      COD 1628950-2711
//  ---------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype>
using namespace std;

class ExcepcionEnC{
	// esta es la tercera prueba
public:

//---Implemetacion de metodo esnumero para validar si un dato ingresado es un entero.
bool esnumero(string linea)
{
	bool valido = true;
	int size = linea.size();
	int i;
	if (size == 0)
	{
		valido = false;
	}else if (size == 1 && !isdigit(linea[0])){
		valido = false;
	}else{
		if (linea[0] == '+' || linea[0] == '-')
		i = 1;
		else
		i = 0;
		
		while (i < size){
			if(!isdigit(linea[i])){
				valido = false;
				break;
			}
			i++;
		}
	}
	return valido;
}
};

//---Implemetacion de metodo main.
int main()
{
	ExcepcionEnC obj;
	string linea;
	int numero;
	bool repite = true;
	
	do
	{
		cout << "Ingrese un numero entero:"<<endl;
		getline(cin, linea);
		
		if(obj.esnumero(linea))
		{
			repite = false;
		} else {
			cout << "No ha ingresado un entero. Intennte nuevamente"<< endl;	
		}
		
	}while(repite);
	
	numero = atoi(linea.c_str());
	
	cout << "El numero ingresado es: " << numero << endl;
	cin.get();
	return 0;
}
