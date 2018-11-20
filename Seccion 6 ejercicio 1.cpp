/*1)Hacer un programa para rellenar una matriz pidiendo al usuario el número
 de filas y columnas, posteriormente mostrar la matriz en pantalla.*/

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int numeros[100][100], filas, columnas;
	
	cout<<"Ingrese el numero de filas: "; cin>>filas;
	cout<<"Ingrese el numero de columnas: "; cin>>columnas;
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Ingrese un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros[i][j];
		}
		cout<<"\n";
	}
	
	system("pause");
	return 0;
}
