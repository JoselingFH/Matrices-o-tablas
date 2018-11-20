/* 7- Desarrollar un programa que determine si una matriz es simétrica o no.
Una matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta. */
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){   
	int numero[100][100], filas, columnas;
	
	cout<<"Ingrese el numero de filas: "; cin>>filas;
	cout<<"Ingrese el numero de columnas: "; cin>>columnas;

	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Ingrese un numero ["<<i<<"]["<<j<<"]: "; cin>>numero[i][j];	
		}
	}
	
	if(filas==columnas){
		cout<<"La matriz es simetrica"<<endl;
	}	
	else{
		cout<<"La matriz no es simetrica"<<endl;
	}
	
	system("pause");
	return 0;
}
