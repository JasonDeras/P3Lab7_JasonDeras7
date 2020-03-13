#pragma once
#include <string>

using namespace std;

class Complejo{
    int real;
    int imaginario;
    public:
        Complejo();
        Complejo( int real, int imaginario );

        int getReal(){ 
        	return real; 
        }

        int getImaginario(){ 
        	return imaginario; 
        }
        
        Complejo operator+( Complejo );
        Complejo operator*( Complejo );
        
        string To_string(){ 
        	return to_string(real) + "+" + to_string(imaginario) + 'i'; 
        }
};