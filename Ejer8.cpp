#include <iostream>
#include <stdio.h>
using namespace std;

int Tama(char cade[])
{
    char *punt=cade;
    int ta=0;
    while(*punt!='\0')
    {
        punt++;
        ta++;
    }
    return ta;
}
void leerCadena(char cad[])
{
    for(int i=0;i<Tama(cad);i++)
        cout<<cad[i];
    cout<<endl;
}

void Invierte(char arre[])
{
    int n=Tama(arre);
    char invertido[n];

    for (int i=0, j=n-1; i<n && j>=0; i++, --j)
    {
        invertido[i]=arre[j];
    }
    invertido[n] = '\0';

    return leerCadena(invertido);
}
char* invprtcad(char *cad)
{
    char *aux=cad,inter,*inicio=cad;
    while(*aux)
        aux++;
    aux--;
    while(aux>cad)
    {
        inter=*cad;
        *cad=*aux;
        *aux=inter;
        aux--;
        cad++;
    }
    return inicio;
}
int main()
{
    char A[20];
    char e1,e2;
    char *cad=new char[20];
    cout<<"Metodo por vectores: "<<endl;
    cout<<"Ingrese una cadena: ";
    cin.getline(A,20);
    cout<<"La Cadena invertida es: ";
    Invierte(A);
    cout<<"\nMetodo por punteros: "<<endl;
    cout<<"Ingrese una cadena: ";
    cin.getline(cad,20);
    cout<<"La Cadena invertida es: ";
    cout<<invprtcad(cad)<<endl;

}
