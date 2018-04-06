#include <iostream>
#include <stdio.h>
using namespace std;
//Forma Recursiva
int suma(int arre[],int tam)
{
    int s=0;
    if(tam==0)
    {
        return 0;
    }
    else
    {
        s=arre[tam-1]+suma(arre,--tam);
        return s;
    }
}
int main()
{
    int sz;
    cin>>sz;
    int a[sz];
    cout<<"Llene su array: "<<endl;
    for(int i=0;i<sz;i++)
        cin>>a[i];
    cout<<"El array es: "<<endl;
    for(int j=0;j<sz;j++)
        cout<<a[j]<<" ";
    cout<<endl;
    cout<<"La suma del array es: "<<endl;
    cout<<suma(a,sz);
}
//Forma Iterativa
/*int sumArre(int A[])
{
    int i=0,suma=0;
    for(int i=0;i<8;i++)
    {
        suma=suma+A[i];
    }
    return suma;
}
int main()
{
    int A[]={1,2,3,4,5,6,7,8};
    cout<<sumArre(A);
}*/
