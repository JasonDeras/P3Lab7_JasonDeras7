#include <typeinfo>
#include <string>

using namespace std;

#ifndef RACIONAL_H
#define RACIONAL_H

class Racional{
	
	private: 

		int numerador;
		int denominador;
		int divisor;

	public: 

		Racional();
		Racional(int, int );

		int getNumerador();
		void setNumerador(int);

		int getDenominador();
		void setDenominador(int);

		int mdc(int numerador, int denominador){
	
			if(numerador<denominador){
				return mdc(numerador,denominador);
			}else if(denominador==0){
				return numerador;
			}else{
				return mdc(denominador,(numerador%denominador));
			}
		}
		
		Racional operator+(Racional ope){

			numerador=(this->numerador * ope.getDenominador())+(this->denominador*ope.getNumerador());
			denominador=(this->denominador*ope.getDenominador());
			divisor=mdc(numerador,denominador);

			return Racional(numerador/divisor,denominador/divisor);
		}

		string to_string();

		~Racional();
};

#endif