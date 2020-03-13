#pragma once
#include <string>

using namespace std;

class Racional{
	
    int numerador;
    int denominador;
    public:
        Racional();
        
        Racional( int numerador, int denominador );
        void simplificar( int numerador, int denominador );
        
        int getNumerador(){ 
        	return numerador; 
        }
        
        int getDenominador(){ 
        	return denominador; 
        }
        
        Racional operator+( Racional r2 );
        Racional operator*( Racional r2 );
        
        string toString(){ 
        	return to_string(numerador) + "/" + to_string(denominador); 
        }
};