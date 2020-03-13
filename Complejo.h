#include <typeinfo>
#include <string>

using namespace std;

#ifndef COMPLEJO_H
#define COMPLEJO_H

class Complejo{
	
	private: 

		int a;
		int b;

	public: 

		Complejo();
		Complejo(int, int );

		int getA();
		void setA(int);

		int getB();
		void setB(int);
		
		string to_string();
		
		~Complejo();
};

#endif