/* 3. Hacer una matriz de tipo entera de 2*2, llenarla de números y luego
copiar todo su contenido hacia otra matriz. */
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int numero1[2][2]= {{2,4},{6,8}};
	int numero2[2][2];
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			numero2[i][j] = numero1[i][j];
		}	
	}
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<numero2[i][j];
		}
		cout<<"\n";
	}
	
	system("pause");
	return 0;
}
