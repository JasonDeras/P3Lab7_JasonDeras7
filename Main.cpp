#include"Vector.cpp"
#include"Racional.h"
#include"Complejo.h"
#include <iostream>
#include <vector>

using namespace std;

//Vector de Racionales
vector<Vector<Racional>> lista_Racional;

//Vector de complejo
vector <Vector<Complejo>> lista_complejo;

//Variables de control
Racional r1,r2,r3;
Complejo c1,c2,c3;

int menu(){
	
	int opcion;

	cout<<"Menu"<<endl;
	cout<<"1. Crear Vector"<<endl;
	cout<<"2. Listar Vectores"<<endl;
	cout<<"3. Operar vectores"<<endl;
	cout<<"Ingrese una opcion: ";
	cin>>opcion;
	cout<<endl<<endl;

	return opcion;

}//fin del metodo menu 

int agregar(){

	int opcion;

	cout<<"Menu creacion"<<endl;
	cout<<"1. Agregar Racional"<<endl;
	cout<<"2. Agregar Complejo"<<endl;
	cout<<"Ingrese una opcion: ";
	cin>>opcion;
	cout<<endl<<endl;

	return opcion;

}//fin del metodo para agregar

int listar(){

	int opcion;

	cout<<"Menu creacion"<<endl;
	cout<<"1. Listar Racionales"<<endl;
	cout<<"2. Listar Complejo"<<endl;
	cout<<"Ingrese una opcion: ";
	cin>>opcion;
	cout<<endl<<endl;

	return opcion;

}//fin del metodo para listar

int operacion(){

	int opcion;

	cout<<"Menu operacion"<<endl;
	cout<<"1. Suma "<<endl;
	cout<<"2. Multiplicacion"<<endl;
	cout<<"Ingrese una opcion: ";
	cin>>opcion;
	cout<<endl<<endl;

	return opcion;

}//fin del metodo para operaciones

int  denominador(int deno){
	
	while(deno==0){
		cout<<"El denominador no puede ser cero"<<endl<<endl;
		cout<<"Ingrese el denominador: ";
		cin>> deno;
	}

	return deno;
}
void listar_Racional(){

}//Fin del metodo para listar racionales

void Listar_Complejo(){

}//Fin del metodo para listar complejos

int main(){

	int usuario=1;

	while(usuario==1){

		switch(menu()){
			
			case 1:{

				int numerador1;
				int denominador1;
				
				int numerador2;
				int denominador2;

				int numerador3;
				int denominador3;

				cout<<"Ingrese el primer numerador: ";
				cin>>numerador1;
				cout<<"Ingrese el primer denominador: ";
				cin>>denominador1;
				denominador(denominador1);
				r1=Racional(numerador1,denominador1);
				
				cout<<"Ingrese el segundo numerador: ";
				cin>>numerador2;
				cout<<"Ingrese el segundo denominador: ";
				cin>>denominador2;
				denominador(denominador2);
				r2=Racional(numerador2,denominador2);
				
				cout<<"Ingrese el tercer numerador: ";
				cin>>numerador3;
				cout<<"Ingrese el tercer denominador: ";
				cin>>denominador3;
				denominador(denominador3);
				r3=Racional(numerador3,denominador3);

				Vector<Racional>v(r1,r2,r3);
				lista_Racional.push_back(v);

			break;}//Fin del caso 1 del menu principal


			case 2:{

				switch(agregar()){

					case 1:{
					break;}

					case 2:{
					break;}

					default:{
						cout<<"Opcion no valida"<<endl<<endl;
					break;}

				}//Fin de la opciones de listar

			break;}//Fin del caso 2 del menu principal

			case 3:{

				switch(operacion()){

					default:{
						cout<<"Opcion no valida"<<endl<<endl;
					break;}

				}//Fin del caso de las operaciones

			break;}//Fin del caso 3 del menu principal

			default:{
				cout<<"Opcion no valida"<<endl<<endl;
			break;}	

		}//Fin de las opciones del menu

		cout<<"Volver al menu [1.-Si/2.-No]: ";
		cin>>usuario;
		cout<<endl<<endl;
	
	}//fin del while del usuario;
	
	return 0;

}//Fin del main