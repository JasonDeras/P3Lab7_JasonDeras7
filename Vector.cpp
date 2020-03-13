#include <typeinfo>
#include <string>
#include "Racional.h"

#include <iostream>

using namespace std;

#ifndef VECTOR_H
#define VECTOR_H
template  <class cordenada>

class Vector{
	
	private: 
		
		cordenada x;
		cordenada y;
		cordenada z;


	public: 
		
		Vector(){

		}
		
		Vector(cordenada x,cordenada y,cordenada z){
			this->x=x;
			this->y=y;
			this->z=z;
		}


		cordenada getX(){
			return x;
		}

		void setX(){
			this->x=x;
		}

		cordenada getY(){
			return y;
		}

		void setY(){
			this->y=y;
		}

		cordenada getZ(){
			return z;
		}

		void setZ(){
			this->z=z;
		}

		string to_string(){
			cout<<"["<<x.to_string()<<","<<y.to_string()<<","<<z.to_string()<<"]";
			return " ";
		}

		Vector operator+(Vector ope){

			Vector x=this.x+ope.getX();
			Vector y=this.y+ope.getY();
			Vector z=this.z+ope.getZ();

			return Vector(x,y,z);
			
		}

		Vector operator*(Vector ope){

			Vector x=this.x+ope.getX();
			Vector y=this.y+ope.getY();
			Vector z=this.z+ope.getZ();

			return Vector(x,y,z);
			
		}

		~Vector(){

		}
};

#endif