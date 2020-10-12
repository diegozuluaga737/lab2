#include <iostream>

using namespace std;

void mayus(char *);

/*Problema 6. Escriba un programa que reciba una cadena de caracteres y cambie las letras minúsculas por ma-
yúsculas, los demás caracteres no deben ser alterados.

Ejemplo: se recibe Man-zana debe mostrar MAN-ZANA.
Nota: la salida del programa debe ser: Original: Man-zana. En mayuscula: MAN-ZANA.
Realice una versión en Arduino de este programa (en un Arduino físico o Tinkercad). Los datos deben ser ingresados
con la ayuda del serial. Use el monitor serial de Arduino o Tinkercad para ingresar los valores necesarios e imprimir.*/


/*
int main(){
    int n;
    char *palabra;

    cout<<"ingrese la cantidad de caracteres"<<endl;
    cin>>n;

    palabra=new char[n+1];

    cout<<"ingrese los caracteres"<<endl;
    fflush(stdin);
    gets(palabra);

    cout<<"Original: "<<palabra<<endl;

    mayus(palabra);
}


void mayus(char *palabra){

    for (int i=0;palabra[i]!='\0' ;i++ ) {

    if (palabra[i]>=97 && palabra[i]<=122) palabra[i]=palabra[i]-32;

   }
    cout<<"En mayuscula: "<<palabra<<endl;
    delete palabra;

}
*/
