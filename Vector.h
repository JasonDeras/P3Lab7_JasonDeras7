#include <typeinfo>
#include <string>

using namespace std;

#ifndef VECTOR_H
#define VECTOR_H
template  <class t>

class Vector{
	
	private: 
		
		t x;
		t y;
		t z;


	public: 
		
		Vector();
		Vector(t,t,t);

		t getX();
		void setX(t);

		t getY();
		void setY(t);

		t getZ();
		void setZ(t);

		string to_string();

		~Vector();
};

#endif