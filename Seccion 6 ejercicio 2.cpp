/*2. Realiza un programa que defina una matriz de 3x3 y escriba un ciclo
 para que muestre la diagonal principal de la matriz. */
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int numeros[3][3]={{2,4,6},{8,10,12},{14,16,18}};
	
	cout<<"Matriz 3x3: \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<numeros[i][j];
		}
		cout<<"\n";
	}	
	
	cout<<"Diagonal principal: \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==j){
			cout<<numeros[i][j]<<endl;
			}	
		}
	}
	
	system("pause");
	return 0;
}
