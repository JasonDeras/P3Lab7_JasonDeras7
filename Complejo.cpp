#include "Complejo.h"
#include <iostream>
#include <typeinfo>

using namespace std;

Complejo::Complejo(){
	a=0;
	b=0;
}

Complejo::Complejo(int p_a, int p_b){
	a=p_a;
	b=p_b;
}

int Complejo::getA(){
	return a;
}

void Complejo::setA(int p_a){
	a=p_a;
}

int Complejo::getB(){
	return b;
}

void Complejo::setB(int p_b){
	b=p_b;
}

string Complejo::to_string(){
	if(b<0){
		cout<<""<<a<<""<<b<<"i";
		return " ";
	}else{
		cout<<""<<a<<"+"<<b<<"i";
		return " ";
	}
}
Complejo::~Complejo(){
	
}