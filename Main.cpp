#include"Vector.cpp"
#include"Racional.h"
#include"Complejo.h"
#include <iostream>
#include <vector>

using namespace std;

//Vector de Racionales
vector<Vector<Racional>> lista_Racional;

//Vector de complejo
vector <Vector<Complejo>> lista_Complejo;

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

int  denominador(int deno){
	
	while(deno==0){
		cout<<"El denominador no puede ser cero"<<endl<<endl;
		cout<<"Ingrese el denominador: ";
		cin>> deno;
	}

	return deno;
}

void listar_Racional(){

	cout<<"Lista de Racionales"<<endl;
	for (int i = 0; i < lista_Racional.size(); ++i){
		cout<<"Posicion: "<<i<<lista_Racional[i].to_string()<<endl;
	}//fin del for
	cout<<endl<<endl;

}//Fin del metodo para listar racionales

void Listar_Complejo(){
	
	cout<<"Lista de Complejos"<<endl;
	for (int i = 0; i < lista_Complejo.size(); ++i){
		cout<<"Posicion: "<<i<<lista_Complejo[i].to_string()<<endl;
	}//fin del for
	cout<<endl<<endl;

}//Fin del metodo para listar complejos

int main(){

	int usuario=1;

	while(usuario==1){

		switch(menu()){
			
			case 1:{

				int opcion;
				cout<<"1. Racionales"<<endl;
				cout<<"2. Complejos"<<endl;
				cout<<"Ingrese una opcion: ";
				cin>>opcion;

				switch(opcion){

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

					break;}//fin de la opcion de racionales
					
					case 2:{

						int a1;
						int b1;

						int a2;
						int b2;

						int a3;
						int b3;						

						cout<<"Ingrese el primer real: ";
						cin>>a1;
						cout<<"Ingrese el primer imaginario: ";
						cin>>b1;
						c1=Complejo(a1,b1);



						cout<<"Ingrese el segundo real: ";
						cin>>a2;
						cout<<"Ingrese el segundo imaginario: ";
						cin>>b2;
						c2=Complejo(a2,b2);


						cout<<"Ingrese el tercer real: ";
						cin>>a3;
						cout<<"Ingrese el tercer imaginario: ";
						cin>>b3;
						c3=Complejo(a3,b3);

						Vector<Complejo>c(c1,c2,c3);
						lista_Complejo.push_back(c);

					break;}//fin de la opcion de complejos
					
					default:{
						cout<<"Opcion no valida"<<endl<<endl;
					break;}

				}//fin de las opciones de creacion

			break;}//Fin del caso 1 del menu principal


			case 2:{

				int opcion;

				cout<<"1. Listar Racionales"<<endl;
				cout<<"2. Listar Complejos"<<endl;
				cout<<"Ingrese una opcion: ";
				cin>>opcion;
				
				switch(opcion){
					 
					 case 1:{
					 	listar_Racional();
					 break;}

					 case 2:{
					 	Listar_Complejo();
					 break;}

					 default:{
					 	cout<<"Opcion no valida"<<endl<<endl;
					 break;}
				
				}//fin del menu de listado

			break;}//Fin de la opciones de listar

			case 3:{

				int opcion;
				cout<<"1. Suma"<<endl;
				cout<<"2. Multiplicacion"<<endl;
				cout<<"Ingrese una opcion: ";
				cin>>opcion;

				switch(opcion){

					case 1:{
						
						int opcion;

						cout<<"1. Suma Rcionales"<<endl;
						cout<<"2 .Suma Complejos"<<endl;
						cout<<"Ingrese una opcion: ";
						cin>>opcion;

						switch(opcion){

							case 1:{

							break;}
							
							case 2:{
								Listar_Complejo();
            					int num, num2;
            					cout << "Ingrese el numero del primer vector a sumar: ";
            					cin >> num;
            					cout << "Ingrese el numero del segundo vector a sumar: ";
            					cin >> num2;
            					Vector<Complejo> suma = lista_Complejo[num] + lista_Complejo[num2];
            					cout << "Suma: " << "[" << suma.getX().to_string() << ", "; 
            					cout << suma.getY().to_string() << ", "; 
            					cout << suma.getZ().to_string() << "]" << endl; 
							break;}

							default:{
								cout<<"Opcion no valida"<<endl<<endl;
							break;}
						}//fin de las opciones para suma

					break;}

					case 2:{
					break;}

					default:{
						cout<<"Opcion no valida"<<endl<<endl;
					break;}
				
				}//Fin de las opciones de operaciones

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