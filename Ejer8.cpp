#include <iostream>
using namespace std;
int tama(char cad[])
{
    int i=0;
    while(cad[i]!='\0')
    {
        i++;
    }
    return i;
}
void intercamb(char a[])
{
    for(int i=0;i<tama(a);i++)
    {
        a[i]='c';
    }
    for(int j=0;j<tama(a);j++)
    {
        cout<<a[j];
    }

}
int main()
{
    char ele;
    char b[10];
    cin.getline(b,10);
    intercamb(b);
}
