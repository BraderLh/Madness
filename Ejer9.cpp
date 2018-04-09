#include <iostream>
using namespace std;
#include <string.h>

void creartext(char frase[])
{
    cout<<"Introducir una frase: ";
    cin.getline(frase,50);
}
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
int esPalindo(char frase[])
{
 int i, l;
 for (i = 0, l=Tama(frase); i<=l/2 && frase[i]==frase[l-1-i]; i++);
 return i>l/2;
}

int main (){
  char palindroma[50];
  creartext(palindroma);
  if(esPalindo(palindroma))
  {
    cout<<"Dicha frase es palindroma";
  }
  else
  {
    cout<<"Dicha frase no es palindroma";
  }
  return 0;
}
