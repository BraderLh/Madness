#include <iostream>
using namespace std;
//Usando Arreglos
/*int tama(char cad[])
{
    int i=0;
    while(cad[i]!='\0')
    {
        i++;
    }
    return i;
}
int main()
{
    char cad[20];
    cout<<"Escriba algo: ";
    cin.getline(cad,20);
    cout<<"El tamaño de la cadena introducida es: "<<tama(cad);
}*/
//Usando Punteros
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
int main()
{
    char cade[30];
    cout<<"Ingrese un texto: ";
    cin.getline(cade,30);
    cout<<"El tamaño de la cadena es: "<<Tama(cade);

}


