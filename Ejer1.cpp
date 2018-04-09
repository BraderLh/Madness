#include <iostream>
using namespace std;
//Ejercicio 1.
int alCuadrado(int a)
{
    //cout<<a<<endl;
    return a*a;
}
int alCuadrado2(int &a)
{
    a=a*a;
    //cout<<a<<endl;
}
int main()
{
    int x=2,y=0;
    cout<<"Paso por valor: "<<endl;
    y=alCuadrado(x);
    cout<<y<<" "<<x<<endl;
    cout<<"Paso por referencia: "<<endl;
    y=alCuadrado2(x);
    cout<<x<<endl;
}
