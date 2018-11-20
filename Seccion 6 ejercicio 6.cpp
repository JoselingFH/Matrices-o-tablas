//6-Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int matriz1[3][3]={{2,2,4},{4,2,6},{6,2,8}};
	int matriz2[3][3]={{1,6,5},{2,8,3},{1,5,4}};
	int matriz3[3][3];
	
	cout<<"\t Primera matriz: \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz1[i][j]<<" ";
		}
		cout<<"\n";
	}	
	cout<<"\n \t Segunda matriz: \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nLa suma de ambas matrices es: "<<endl;	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			matriz3[i][j]= matriz1[i][j] + matriz2[i][j];
			cout<<matriz3[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	system("pause");
	return 0;
}
