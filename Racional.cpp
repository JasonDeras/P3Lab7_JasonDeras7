#include "Racional.h"

#include <typeinfo>

using namespace std;

Racional::Racional(){
	numerador=0;
	denominador=1;
}

Racional::Racional(int numerador, int denominador){
	this->numerador=numerador;
	this->denominador=denominador;
}

int Racional::getNumerador(){
	return numerador;
}

void Racional::setNumerador(int numerador){
	this->numerador=numerador;
}

int Racional::getDenominador(){
	return denominador;
}

void Racional::setDenominador(int denominador){
	this->denominador=denominador;
}

Racional::~Racional(){
	
}