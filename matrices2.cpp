#include<iostream>
using namespace std;
int main(){
	int n, s = 0;
	int A[20][20];
	cout<<"Ingrese el orden de la matriz cuadrada: "<<endl; cin>>n;
	for(int i=0; i<n; i++){
		for(int j = 0; j<n; j++){
			cout<<"Ingrese el valor del elemento A["<<i+1<<" , "<<j+1<<" ]"<<endl; cin>>A[i][j];
		}
	}
	return 0;
}