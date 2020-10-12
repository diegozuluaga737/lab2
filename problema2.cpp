#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

/*Problema 2. Elabore un programa que genere un arreglo de 200 letras mayúsculas aleatorias, imprima este arreglo
y luego imprima cuantas veces se repite cada letra en el arreglo.

Ejemplo: supóngase que se genera el arreglo de 10 elementos: ABARSECAAB. El programa debe imprimir: ABAR-
SECAAB

A: 4
B: 2
C: 1
Y así sucesivamente.*/

/*int main()

{

    srand(time(NULL));
    int num=rand();

    char arreglo[200];

    int contador[26] {};

    for (int i=0;i<200 ;i++) {

        num=65+rand()%(90-66);

        arreglo[i]=num;

        if (num==65)  contador[0]=contador[0]+1;
        if (num==66)  contador[1]=contador[1]+1;
        if (num==67)  contador[2]=contador[2]+1;
        if (num==68)  contador[3]=contador[3]+1;
        if (num==69)  contador[4]=contador[4]+1;
        if (num==70)  contador[5]=contador[5]+1;
        if (num==71)  contador[6]=contador[6]+1;
        if (num==72)  contador[7]=contador[7]+1;
        if (num==73)  contador[8]=contador[8]+1;
        if (num==74)  contador[9]=contador[9]+1;
        if (num==75)  contador[10]=contador[10]+1;
        if (num==76)  contador[11]=contador[11]+1;
        if (num==77)  contador[12]=contador[12]+1;
        if (num==78)  contador[13]=contador[13]+1;
        if (num==79)  contador[14]=contador[14]+1;
        if (num==80)  contador[15]=contador[15]+1;
        if (num==81)  contador[16]=contador[16]+1;
        if (num==82)  contador[17]=contador[17]+1;
        if (num==83)  contador[18]=contador[18]+1;
        if (num==84)  contador[19]=contador[19]+1;
        if (num==85)  contador[20]=contador[20]+1;
        if (num==86)  contador[21]=contador[21]+1;
        if (num==87)  contador[22]=contador[22]+1;
        if (num==88)  contador[23]=contador[23]+1;
        if (num==89)  contador[24]=contador[24]+1;
        if (num==90)  contador[25]=contador[25]+1;


    }
    cout<<arreglo<<endl;
    cout<<"A: "<<contador[0]<<endl<<"B: "<<contador[1]<<endl<<"C: "<<contador[2]<<endl<<"D: "<<contador[3]<<endl<<"E: "<<contador[4]<<endl
        <<"F: "<<contador[5]<<endl<<"G: "<<contador[6]<<endl<<"H: "<<contador[7]<<endl<<"I: "<<contador[8]<<endl<<"J: "<<contador[9]<<endl
        <<"K: "<<contador[10]<<endl<<"L: "<<contador[11]<<endl<<"M: "<<contador[12]<<endl<<"N: "<<contador[13]<<endl<<"0: "<<contador[14]<<endl
        <<"P: "<<contador[15]<<endl<<"Q: "<<contador[16]<<endl<<"R: "<<contador[17]<<endl<<"S: "<<contador[18]<<endl<<"T: "<<contador[19]<<endl
        <<"U: "<<contador[20]<<endl<<"V: "<<contador[21]<<endl<<"W: "<<contador[22]<<endl<<"X: "<<contador[23]<<endl<<"Y: "<<contador[24]<<endl<<"Z: "<<contador[25]<<endl;
    return 0;
}
*/
