#include <iostream>

using namespace std;

void separarpalabras(int n, char *);

/*Problema 8. Escriba un programa que reciba una cadena de caracteres y separe los números del resto de caracteres,
generando una cadena que no tiene números y otra con los números que había en la cadena original.

Ejemplo: Si se recibe abc54rst el programa debe imprimir las cadenas: abcrst y 54.
Nota: la salida del programa debe ser:
Original: abc54rst.
Texto: abcrst. Numero: 54.*/


/*
int main()
{
     int n;

          cout<<"ingrese cual es la cantidad de caracteres"<<endl;
          cin>>n;
          char *palabra;
          cout<<"ingrese los caracteres"<<endl;
          palabra=new char[n+1];
          fflush(stdin);
          gets(palabra);

          separarpalabras(n,palabra);

    return 0;
}

 void separarpalabras(int n, char *palabra){

     int conum=0,conpal=0;
     //char texto[n+1],numeros[n+1];
     char *texto,*numeros;
     texto=new char[n];
     numeros=new char[n];


     for (int i=0;palabra[i]!='\0' ;i=i+1 ) {
         if (palabra[i]>=48 && palabra[i]<=57) {
             numeros[conum]=palabra[i];
             conum = conum+1;
         }

         else {
             texto[conpal]=palabra[i];
             conpal=conpal+1;
         }

     }
     cout<<"original: "<<palabra<<endl;
     cout<<"Texto: ";
     for (int j=0;j<conpal ;j++ ) {
       cout<<texto[j];
     }
     cout<<" Numero: ";
     for (int k=0;k<conum ;k++ ) {
       cout<<numeros[k];
     }
     cout<<endl;

     delete palabra;
     delete texto;
     delete numeros;


 }

*/
