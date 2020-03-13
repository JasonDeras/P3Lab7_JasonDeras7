#include "Racional.h"
#include <string>
#include <iostream>
#include <typeinfo>

using namespace std;

Racional::Racional(){
	numerador=0;
	denominador=1;
}

Racional::Racional(int num, int deno){
	numerador=num;
	denominador=deno;
}

int Racional::getNumerador(){
	return numerador;
}

void Racional::setNumerador(int num){
	numerador=num;
}

int Racional::getDenominador(){
	return denominador;
}

void Racional::setDenominador(int deno){
	denominador=deno;
}

string Racional::to_string(){
	cout<<""<<numerador<<"/"<<denominador;
	return " ";
}

Racional::~Racional(){
	
}