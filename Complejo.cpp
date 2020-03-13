#include "Complejo.h"

#include <typeinfo>

using namespace std;

Complejo::Complejo(){
	a=0;
	b=0;
}

Complejo::Complejo(int a, int b){
	this->a=a;
	this->b=b;
}

int Complejo::getA(){
	return a;
}

void Complejo::setA(int a){
	this->a=a;
}

int Complejo::getB(){
	return b;
}

void Complejo::setB(int b){
	this->b=b;
}

string Complejo::to_string(){
	salida="";
	
	if(b<0){
		salida=""+a+"-"+b"i";
		return salida;
	}else{
		salida=""+a+"+"+b+"i";
		return salida;
	}
}
Complejo::~Complejo(){
	
}