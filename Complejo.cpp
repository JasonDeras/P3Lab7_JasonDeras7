#include "Complejo.h"

Complejo::Complejo(){

}

Complejo::Complejo( int real, int imaginario ){
    this->real = real;
    this->imaginario = imaginario;
}

Complejo Complejo::operator+( Complejo r2 ){
    int parte_real = (*this).getReal() + r2.getReal();
    int parte_imaginaria = (*this).getImaginario() + r2.getImaginario();
    return Complejo( parte_real, parte_imaginaria );
}

Complejo Complejo::operator*( Complejo r2 ){
    int parte_real = (*this).getReal() * r2.getReal() - (*this).getImaginario() * r2.getImaginario();
    int parte_imaginaria = (*this).getReal() * r2.getImaginario() + (*this).getImaginario() * r2.getReal();
    return Complejo( parte_real, parte_imaginaria );
}