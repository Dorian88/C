#include <iostream.h>
#include "pila.h"
#include <Windows.h>

using namespace std;

void main(){

	Pila pila1,pila2,pila3;

	while(pila1.punta != NULL){
	for(int i=0;i<6;i++){
		pila1.apilar(i+1);
		pila1.pintarmenu();
		pila1.mostrar();
		Sleep(10000);
	}

	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
		pila2.apilar(pila1.desapilar());
		pila2.pintarmenu();
		pila2.mostrar();
		Sleep(5000);
		}

		for(int k=3;k<6;k++){
		pila3.apilar(pila1.desapilar());
		pila3.pintarmenu();
		pila3.mostrar();
		Sleep(5000);
		}

	}
	}









/*
	while(){
	int cont=0;
		for(int i=0;i<6;i++){
			pila.apilar(i);
			cout<<"Cliente:"<<cont+1;
			cont++;
			Sleep(2000);
		}

		int con=0;
		for(int j=0;j<6;j++){
			pila.desapilar();
		}

		for(int i=0;i<3;i++){
			pila.apilar(i);
			Sleep(2000);
		cout<<"CAMION:"<<cont+1;
			cont++;
		}
		cout<<"CAMION:"<<con+1;
		//cout<<"CAMION"<<j;
	//}



	}

	for (int i=0;i<6;i++){

		pila.apilar(i);
		pila.desapilar();
	}
	for (int i=0;i<3;i++){

		pila.apilar(i);

	}


	pila.pintarmenu();
	pila.mostrar();

	Sleep(5000);*/
	system("pause");
}
