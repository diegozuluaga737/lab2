#include <iostream>

using namespace std;



/*Problema 12. Un cuadrado mágico es una matriz de números enteros sin repetir, en la que la suma de los números
en cada columna, cada fila y cada diagonal principal tienen como resultado la misma constante. Escriba un programa
que permita al usuario ingresar una matriz cuadrada, imprima la matriz y verifique si la matriz es un cuadrado
mágico.
Nota: un ejemplo de cuadrado mágico es el siguiente:
4 9 2
3 5 7
8 1 6
*/

/*
int main(){

    int n,num,suma=0,aux=0,aux1=0;
    bool x=true;
    cout<<"Ingrese el numero de filas y columnas (debe ser cuadradado): "<<endl;
    cin>>n;
    int matriz[n][n];

  cout<<"ingrese los numeros"<<endl;

  if (x==true) {


  for (int i=0;i<n ;i++ ) {
        for (int j=0;j<n ;j++ ) {
            cin>>num;
            matriz[i][j]=num;
        }
    }
    for (int i=0;i<n ;i++ ) {
        suma=suma+matriz[0][i]; //saber cual es la suma para verificar todos los posibles.
    }
    for (int l=0;l<n ;l++ ) {

    for (int k=0;k<n ;k++ ) {
        int a=matriz[l][k];


    for (int i=0;i<n ;i++ ) {

        for (int j=0,cont=0;j<n ;j++ ) {

            if (a==matriz[i][j]) cont=cont+1;
             if (a==matriz[j][i]) cont=cont+1;
             if (cont>n) x=false;

        }
    }
    }
    }
  }

  if (x==true) {
    for (int i=0;i<n ;i++ ) {       // inicio verificar  diagonal
        aux=aux+matriz[i][i];


    }


    for (int j=n-1,i=0;j>=0 ; j--,i++) {
    aux1=aux1+matriz[i][j];
    }

    if(aux!=suma or aux1!=suma) x=false;

                               //end
  }

    if (x==true) {


    for (int i=0;i<n ;i++ ) {       //inicio verificar filas y columnas

        if (aux==suma) aux=0;
        if(aux1==suma) aux1=0;

        for (int j=0;j<n ;j++ ) {
            aux=aux+matriz[i][j];
            aux1=aux1+matriz[j][i];

        }
        if (aux!=suma or aux1!=suma)   x=false;     //end
    }
    }
    for (int i=0;i<n ;i++ ) {

        cout<<endl;

        for (int j=0;j<n ;j++ ) {

           cout<<matriz[i][j];
        }

    }
    if (x==true)   cout<<"es magico"<<endl;
    else {
        cout<<endl<<"no es magico"<<endl;
    }




    return 0;
}
*/
