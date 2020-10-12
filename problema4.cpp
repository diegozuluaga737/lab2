#include <iostream>

using namespace std;
int conver();

/*Problema 4. Haga una función que reciba una cadena de caracteres numéricos, la convierta a un número entero
y retorne dicho número. Escriba un programa de prueba.
Ejemplo: si recibe la cadena “123”, debe retornar un int con valor 123.*/


/*int main()
{
    int x;
   x=conver();
   cout<<"El entero es: "<<x<<endl;

    return 0;
}

int conver(){
    int n;
    cout<<"ingrese la cantidad de caracteres"<<endl;
    cin>>n;
    char *numero;
    numero=new char[n+1];
    cout<<"ingrese los caracteres"<<endl;
    cin>>numero;
    int convertido;
    int entero=0;
    for (int i=0;numero[i]!='\0' ;i++ ) {

        int a= (numero[i])-48;

        entero=(entero+a)*10;
    }
    convertido=entero/10;
    delete numero;

return convertido;

}
*/




