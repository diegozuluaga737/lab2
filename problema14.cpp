#include <iostream>

using namespace std;
void imprimir(int [5][5],int );

/*Problema 14. Elabore un programa que llene una matriz 5x5 con los números del 1 al 25 y la imprima, luego
imprima la matriz rotada 90, 180 y 270 grados.
Ejemplo:

Matriz Original         Matriz Rotada 90°
1  2  3  4  5            21 16 11 6 1
6  7  8  9  10           22 17 12 7 2
11 12 13 14 15           23 18 13 8 3
16 17 18 19 20           24 19 14 9 4
21 22 23 24 25           25 20 15 10 5
*/

/*
int main(){

    int matriz[5][5],copia[5][5];
    int n=5,numero=1;

    for (int  i=0;i<n ; i++ ) {
        for (int j=0;j<n ;j++ ) {

            matriz[i][j]=numero;
            numero=numero+1;
        }
    }

    cout<<"Matriz original"<<endl;

    imprimir( matriz,  n);

    for (int i=n-1,k=0;i>=0 ;i--,k++ ) {
        for (int j=0;j<n ;j++ ) {
            copia[j][i]=matriz[k][j];

        }


    }

    cout<<endl<<"Matriz Rotada 90"<<endl;

    imprimir( copia,  n);


    for (int i=n-1,k=0;i>=0 ;i--,k++ ) {
        for (int j=0;j<n ;j++ ) {
            matriz[j][i]=copia[k][j];

        }


    }
    cout<<endl<<"Matriz Rotada 180"<<endl;

    imprimir( matriz,  n);

    for (int i=n-1,k=0;i>=0 ;i--,k++ ) {
        for (int j=0;j<n ;j++ ) {
            copia[j][i]=matriz[k][j];

        }


    }

    cout<<endl<<"Matriz Rotada 270"<<endl;

    imprimir( copia,  n);



    return 0;
}

void imprimir(int matriz[5][5],int n){
    for (int  i=0;i<n ; i++ ) {
         cout<<endl<<"---------------"<<endl;
        for (int j=0;j<n ;j++ ) {

           if (matriz[i][j]>=1 and matriz[i][j]<10 ) cout<<matriz[i][j]<<" |";
           else {

           cout<<matriz[i][j]<<"|";
           }
    }

}
    cout<<endl;
}
*/
