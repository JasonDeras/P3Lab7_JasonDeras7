#include"Vector.h"
#include"Racional.h"
#include"Complejo.h"
#include <iostream>
#include <vector>

using namespace std;

//Vector de numeros
vector<Racional> *lista_Racional;

int menu(){
	
	int opcion;

	cout<<"Menu"<<endl;
	cout<<"1. Crear Vector"<<endl;
	cout<<"2. Listar Vectores"<<endl;
	cout<<"3. Operar vectores"<<endl;
	cout<<"Ingrese una opcion: ";
	cin>>opcion;
	cout<<endl<<enl;

	return opcion;

}//Fin del metodo menu 

int main(){

	int usuario=1;

	while(usuario==1){

		switch(menu()){
			
			case 1:{
			break;}


			case 2:{
			break;}

			case 3:{
			break;}

			default:{
				cout<<"Opcion no valida"<<endl<<emdl;
			break;}	

		}//Fin de las opciones del menu

		cout<<"Volver al menu [1.-Si/2.-No]: ";
		cin>>usuairo;
		cout<<endl<<endl;
	
	}//fin del while del usuario;
	
	return 0;

}//Fin del main 