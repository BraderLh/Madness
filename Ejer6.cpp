#include <iostream>
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
//Con Arreglos
void Copea1(char t[],char s[])
{
    if(Tama(t)>Tama(s))
    {
        for(int i=0;i<Tama(t);i++)
        {
            s[i]=t[i];
        }
        cout<<"La cadena S ahora es: ";
        leerCadena(s);
    }
    else
    {
        cout<<"El tamaño de la cadena s es muy pequeña para copiar los elementos de t. "<<endl;
    }
}
//Con Punteros
void Copea2(char t[],char s[])
{
    if(Tama(t)>Tama(s))
    {
        for(int i=0;i<Tama(t);i++)
        {
            *(s+i)=*(t+i);
        }
        cout<<"La cadena S ahora es: "<<endl;
        leerCadena(s);
    }
    else
    {
        cout<<"El tamaño de la cadena s es muy pequeña para copiar los elementos de t. "<<endl;
    }
}
int main()
{
    char t[20];
    char s[20]={};
    cout<<"Ingrese un texto: ";
    cin.getline(t,30);
    //cout<<"El tamaño de la cadena T es: "<<Tama(t)<<endl;
    //cout<<"El tamaño de la cadena S es: "<<Tama(s)<<endl;
    cout<<endl;
    cout<<"El texto ingresado en la cadena T es: ";
    leerCadena(t);
    Copea1(t,s);
    //Copea2(t,s);
}
