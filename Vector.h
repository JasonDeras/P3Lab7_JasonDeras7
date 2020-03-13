#include <typeinfo>

using namespace std;

#ifndef VECTOR_H
#define VECTOR_H

class Vector{
	
	private: 

		int numerador;
		int denominador;

	public: 

		Vector();
		Vector(int, int );

		int getNumerador();
		void setNumerador(int);

		int getDenominador();
		void setDenominador(int);
		
		~Vector();
};

#endif