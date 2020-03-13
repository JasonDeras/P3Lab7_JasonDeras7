#include "Racional.h"

Racional::Racional(){
}

Racional::Racional( int numerador, int denominador ){
    simplificar( numerador, denominador );
}

void Racional::simplificar( int numerador, int denominador ){
	
    for (int i = 1; i <= numerador; i++){
       if( numerador % i == 0 && denominador % i == 0){
           numerador /= i;
           denominador /= i;
       }
    }
    (*this).numerador = numerador;
    (*this).denominador = denominador;
}

Racional Racional::operator+( Racional r2 ){
    int denominador = (*this).getDenominador() * r2.getDenominador();
    int numerador = (*this).getNumerador() * r2.getDenominador() + (*this).getDenominador() * r2.getNumerador();
    return Racional( numerador, denominador );
}

Racional Racional::operator*( Racional r2 ){
    int denominador = (*this).getDenominador() * r2.getDenominador();
    int numerador = (*this).getNumerador() * r2.getNumerador();
    return Racional( numerador, denominador );
}