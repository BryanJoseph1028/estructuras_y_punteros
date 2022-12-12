#include<iostream>
#include <stdlib.h> // new and delete  
#include <string.h> 
using namespace std;
struct Estudiante{
	int nota1,nota2;
	string nombre;
};

int main(){
	Estudiante *estudiante;
estudiante = new Estudiante;

cout<<"Ingrese Nombre: ";
cin>>estudiante -> nombre;

cout<<"Ingrese Nota 1: ";
cin>>estudiante -> nota1;
cout<<"Ingrese Nota 2: ";
cin>>estudiante -> nota2;

cout<<estudiante -> nota1<<","<<estudiante -> nota2<<","<<estudiante -> nombre<<endl;

delete estudiante;

	system("PAUSE");
	return 0;
	
}


