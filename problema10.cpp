#include <iostream>

using namespace std;

/*Problema 10. Escribir un programa que permita convertir un número en el sistema romano al sistema arábigo

usado actualmente. A continuación se encuentran los caracteres usados en el sistema romano y su equivalente ará-
bigo:

M: 1000
D: 500
C: 100
L: 50
X: 10
V: 5
I: 1
Los números romanos se forman usando estos caracteres en base a dos reglas:
Si un carácter esta seguido por uno de igual o menor valor, su valor se suma al total.
Si un carácter esta seguido por uno de mayor valor, su valor se resta del total.
Ejemplo: CC=200, CD=400, DC=600, DCLXVI=666, CLXXIV=174.
Nota: la salida del programa debe ser:
El número ingresado fue: DCLXVI
Que corresponde a: 666.
Realice una versión en Arduino de este programa (en un Arduino físico o Tinkercad). Los datos deben ser ingresados
con la ayuda del serial. Use el monitor serial de Arduino o Tinkercad para ingresar los valores necesarios e imprimir.*/

/*
int main(){
    int n,suma=0;
    char *romanos;
    //int  *enteros;

    cout<<"ingrese la cantidad de caracteres: "<<endl;
    cin>>n;

    romanos=new char[n+1];
   // enteros=new int[n+1];
    int enteros[n];

    cout<<"ingrese los numeros romanos en mayuscula:"<<endl;
    cin>>romanos;

    for (int i=0;romanos[i]!='\0' ; i++) {
        if (romanos[i]==77) enteros[i]=1000;
        if (romanos[i]==68) enteros[i]=500;
        if (romanos[i]==67) enteros[i]=100;
        if (romanos[i]==76) enteros[i]=50;
        if (romanos[i]==88) enteros[i]=10;
        if (romanos[i]==86) enteros[i]=5;
        if (romanos[i]==73) enteros[i]=1;
    }
    for (int j=0;j<n ;j++ ) {

            if(j==n-1){
                suma=suma+ enteros[j];

                break;
            }
            if(enteros[j]>=enteros[j+1]) suma=suma +(enteros[j]);
            if(enteros[j]<enteros[j+1]){
                suma=suma+(enteros[j+1]-enteros[j]);
                j=j+1;
            }






    }
    cout<<"El numero ingresado fue: "<<romanos<<endl;
    delete romanos;
    cout<<"Que corresponde a: "<<suma<<endl;


    return 0;
}
*/
