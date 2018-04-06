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
void Concat(char t[],char s[])
{
    for(int i=0;i<=Tama(s);i++)
    {
        for(int j=0;j<Tama(t);j++)
        {
            s[i]=t[j];
        }
    }
    leerCadena(s);
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
}
int main()
{
    char t[30];
    char s[30];
    cout<<"Ingrese un texto para la cadena T: ";
    cin.getline(t,30);
    cout<<"Ingrese un texto para la cadena S: ";
    cin.getline(s,30);
    cout<<endl;
    cout<<"El texto ingresado en la cadena T es: ";
    leerCadena(t);
    cout<<"El texto ingresado en la cadena S es: ";
    leerCadena(s);

    Concat(t,s);
    //Copea2(t,s);
}
