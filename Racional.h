#include <typeinfo>
#include <string>

using namespace std;

#ifndef RACIONAL_H
#define RACIONAL_H

class Racional{
	
	private: 

		int numerador;
		int denominador;

	public: 

		Racional();
		Racional(int, int );

		int getNumerador();
		void setNumerador(int);

		int getDenominador();
		void setDenominador(int);
		
		string to_string();

		~Racional();
};

#endif