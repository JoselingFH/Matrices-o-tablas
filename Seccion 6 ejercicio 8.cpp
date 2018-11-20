// 8.Realice un programa que calcule el producto de dos matrices cuadradas de 3x3.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int matriz1[3][3]={{3,0,2},{-2,3,1},{1,4,4}};
	int matriz2[3][3]={{1,2,2},{0,1,-4},{2,-1,3}};
	int producto[3][3];
	
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
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			producto[i][j]= 0;		
			for(int k=0;k<3;k++){ 
				producto[i][j]= producto[i][j]+ matriz1[i][k]*matriz2[k][j]; 					
			}
		}
	}
	cout<<"\nEl producto de las matrices es: \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<producto[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	system("pause");
	return 0;
}
