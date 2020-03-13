#pragma once
#include <string>
#include <iostream>

using namespace std;

template< class cordenada >

class Vector {
    private:
        cordenada x;
        cordenada y;
        cordenada z;
    public:
        Vector( cordenada x, cordenada y, cordenada z ){
            this->x = x;
            this->y = y;
            this->z = z;
        }

        cordenada getX(){ 
        	return x; 
        }

        cordenada getY(){ 
        	return y; 
        }
        
        cordenada getZ(){ 
        	return z; 
        }

        Vector<cordenada> operator+( Vector<cordenada> );
        Vector<cordenada> operator*( Vector<cordenada> );
        
        string To_string(){ 
        	cout<<"[" <<x.To_string() <<", " <<y.To_string() <<", " << z.To_string() << "]";

        	return " "; 
        }
};

template< class cordenada >

Vector<cordenada> Vector<cordenada>::operator+( Vector<cordenada> v2 ){
    cordenada _x = (*this).getX() + v2.getX();
    cordenada _y = (*this).getY() + v2.getY();
    cordenada _z = (*this).getZ() + v2.getZ();
    return Vector( _x, _y, _z );
}

template< class cordenada >

Vector<cordenada> Vector<cordenada>::operator*( Vector<cordenada> v2 ){
    cordenada _x = (*this).getX() * v2.getX();
    cordenada _y = (*this).getY() * v2.getY();
    cordenada _z = (*this).getZ() * v2.getZ();
    return Vector( _x, _y, _z );
}