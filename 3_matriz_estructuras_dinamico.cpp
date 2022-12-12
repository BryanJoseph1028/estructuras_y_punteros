#include<iostream>
#include <stdlib.h> 
#include <string.h> 
using namespace std;
struct Estudiante{
	int **notas;
	string nombre;
	
};
int main(){
	Estudiante *estudiante;
	int fila_estudiante=0,columna_notas=0;
cout<<"Cuantos Estudiantes Desea Ingresar: ";
cin>>fila_estudiante;	
cout<<"Cuantas Notas Desea Ingresar: ";
cin>>columna_notas;	
	estudiante = new Estudiante[fila_estudiante];
	estudiante ->notas = new  int *[fila_estudiante];
for (int i=0;i<fila_estudiante;i++){
	estudiante->notas[i] = new int[columna_notas]; 	
}

cout<<"--------------Ingrese Notas--------------"<<endl;
// Ingreso
	for (int i=0;i<fila_estudiante;i++){
		cout<<"-----------------------------------------"<<endl;
		cin.ignore();	
		cout<<"Ingrese Nombre: ";
		getline(cin,(estudiante + i) -> nombre);
	
			for (int ii=0;ii<columna_notas;ii++){
			cout<<"Ingrese Nota"<<"["<<ii + 1<<"]: ";
			cin>>*(*(estudiante->notas+i)+ii);
	
	}
	// Mostrar
}
		for (int i=0;i<fila_estudiante;i++){
			cout<<"-------- Nota "<<i +1<<" -----------"<<endl;
			cout<<(estudiante + i) -> nombre<<endl;
				for (int ii=0;ii<columna_notas;ii++){
				cout<<*(*(estudiante->notas+i)+ii)<<endl;
				}
}
for (int i=0;i<fila_estudiante;i++){
	delete[] estudiante->notas[i];
}
delete[] estudiante;
	system("PAUSE");
	return 0;
}


