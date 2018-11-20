/*4. Hacer una matriz preguntando al usuario el numero de filas y columnas, llenarla de numeros aleatorios,
copiar el contenido a otra matriz y por último mostrarla en pantalla. */

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
	int numero1[100][100], filas,columnas, dato;
	int numero2[100][100];
	
	cout<<"Ingrese el numero de filas: "; cin>>filas;
	cout<<"Ingrese el numero de columnas: "; cin>>columnas;
	
	srand(time(NULL)); 
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			dato= 1+rand()%(100); 
			numero1[i][j]= dato; 
		}
	}
		for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			numero2[i][j]= numero1[i][j];	
			}
	}	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numero2[i][j]<<" ";	
			}
			cout<<"\n";
	}
	
	system("pause");
	return 0;
}
