#include<iostream>
#include <stdlib.h> 
#include <string.h> 
using namespace std;
struct Estudiante{
	int nota1,nota2;
	string nombre;
	
};

int main(){
	Estudiante *estudiante;
	int fila_estudiante=0;
cout<<"Cuantos Estudiantes Desea Ingresar: ";
cin>>fila_estudiante;	
estudiante = new Estudiante[fila_estudiante];


for (int i=0;i<fila_estudiante;i++){

cin.ignore();	
cout<<"Ingrese Nombre: ";
getline(cin,(estudiante + i) -> nombre);


cout<<"Ingrese Nota 1: ";
cin>>(estudiante + i) -> nota1;
cout<<"Ingrese Nota 2: ";
cin>>(estudiante + i) -> nota2;
cout<<"-------------------"<<endl;
}
for (int i=0;i<fila_estudiante;i++){

cout<<(estudiante + i) -> nombre<<","<<(estudiante + i) -> nota1<<","<<(estudiante + i) -> nota2<<endl;


}
delete[] estudiante;

	system("PAUSE");
	return 0;
	
}


