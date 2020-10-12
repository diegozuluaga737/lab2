#include <iostream>

using namespace std;

int factorial(int n);

int main(){

    int n,caminos;
    cout<<"Ingrese un numero n para la malla"<<endl;
    cin>>n;
    caminos=(factorial(n+n))/(factorial(n)*factorial(n));
    cout<<"Para una malla de "<<n<<'x'<<n<<" puntos hay "<<caminos<<" caminos"<<endl;
    return 0;
}

int factorial(int n){

    int factorial=1;
    for (int i=0;i<n ;i++ ) {
        factorial=factorial+(factorial*i);

    }
    return factorial;
}
