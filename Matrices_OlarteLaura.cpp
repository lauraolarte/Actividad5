#include <iostream>
using namespace std;
void suma(int n,int m,double A[][3],double B[][3],double D[][3]){
	for(int j=0;j<m;j++)
		for(int i=0;i<n;i++)
			D[i][j]=A[i][j]+B[i][j];
}
void resta(int n,int m,double A[][3],double B[][3],double D[][3]){
	for(int j=0;j<m;j++)
		for(int i=0;i<n;i++)
			D[i][j]=A[i][j]-B[i][j];
    }
void multiplicacion_escalar(int n, int m, double k, double A[][3],double C[][3]){
    for(int j=0;j<m;j++)
		for(int i=0;i<n;i++)
        C[i][j]=k*A[i][j];
    }
double multiplicacion_matrices(int n, int m, double A[][3], double B[][3]){
    double d=0;
    for(int j=0;j<m;j++)
		for(int i=0;i<n;i++)
            d+=A[i][j]*B[i][j];
    return d;
    }
void imprimir(int n, int m, double D[][3]){
	for(int j=0;j<m;j++)
		for(int i=0;i<n;i++)
			cout<<D[i][j]<<" ";
		cout<<endl;   
}
int main(){
    //numero de filas
	int n=2;
	//numero de columnas
	int m=3;
	double A[n][3]={{1,2,3},{4,5,6}};
	double B[n][3]={{6,5,4},{3,2,1}};
	double C[m][2]={{1,2},{3,4},{5,6}};
	double k=2.5;
	double D[n][m];
	//Aqui se muestran las matrices
	cout<<"A=";
	imprimir(n,m,A);
	cout<<"B=";
	imprimir(n,m,B);
	cout<<"C=";
	imprimir(m,n,C);
	//Suma
	cout<<"Suma de A y B"<<endl;
	suma(n,m,A,B,D);
	imprimir(n,m,D);
	//Resta
	cout<<"Resta de A y B"<<endl;
	resta(n,m,A,B,D);
	imprimir(n,m,D);
	//Multiplicación por escalar
	cout<<"Producto A*B "<<producto_interno(n,A,B)<<endl;
	return 0;
}   