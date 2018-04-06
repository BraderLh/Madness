#include <iostream>
using namespace std;

void crearMatrix(int A[2][2])
{
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            cin>>A[i][j];
}
void verMatrix(int A[2][2])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
}
void multiplicar(int A[2][2],int B[2][2])
{
    int C[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            C[i][j]=0;
            for(int k=0;k<2;k++)
                C[i][j]=C[i][j]+A[i][k]*B[k][j];
        }
    }
    verMatrix(C);
}
/*int multiply(int A[][],int B[][])
{
    if(a==)
}
*/

int main()
{
    int A[2][2],B[2][2];
    crearMatrix(A);
    verMatrix(A);
    cout<<endl;
    crearMatrix(B);
    verMatrix(B);
    multiplicar(A,B);
    /*
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cin>>A[i][j];
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }*/
}
