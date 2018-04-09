#include <iostream>
using namespace std;
void llenar(int cad[],int tam)
{
    for(int i=0;i<tam;i++)
        cin>>cad[i];
}
void leerCadena(int cad[],int tam)
{
    for(int i=0;i<tam;i++)
        cout<<cad[i]<<" ";
    cout<<endl;
}
void InsertSort(int cad[],int tam)
{
    int numeac,pos;
    for(int i=0;i<tam;i++)
    {
        pos=i;
        numeac=cad[i];
        while((pos>0)&&(cad[pos-1]>numeac))
        {
            cad[pos]=cad[pos-1];
            pos--;
        }
        cad[pos]=numeac;

    }
    leerCadena(cad,tam);
}

/*int MergeSort(int cad[])
{

}*/
int QuickSort(int cad[],int izq,int der)
{
    int i,j,nuse;
    i=izq;
    j=der;
    int p=cad[(izq+der)/2];
    do{
        while( (cad[i] < p) && (j <= der) )
        {
            i++;
        }
        while( (p<cad[j]) && (j > izq) )
        {
            j--;
        }

        if( i<=j)
        {
            nuse = cad[i];
            cad[i] = cad[j];
            cad[j] = nuse;
            i++;
            j--;
        }

    }while( i <= j );

    if( izq < j )
        QuickSort( cad, izq, j );
    if( i < der )
        QuickSort( cad, i, der );
}
void Merge(int *a, int low, int high, int mid)
{
	// We have low to mid and mid+1 to high already sorted.
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;

	// Merge the two parts into temp[].
	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}

	// Insert all the remaining values from i to mid into temp[].
	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}

	// Insert all the remaining values from j to high into temp[].
	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}


	// Assign sorted data stored in temp[] to a[].
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}
}
void MergeSort(int *a, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		// Split the data into two half.
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);

		// Merge them to get sorted output.
		Merge(a, low, high, mid);
	}
}

int main()
{
    int tam;
    cout<<"Tamño de la cadena: ";
    cin>>tam;
    int caden[tam];
    cout<<"Llene la cadena con numeros: ";
    llenar(caden,tam);
    cout<<"La cadena inscrita es: ";
    leerCadena(caden,tam);
    cout<<"Ordenamieto por Insercion o Insertion Sort: ";
    InsertSort(caden,tam);
    cout<<"Ordenamiento por Division o Quick Sort: ";
    QuickSort(caden,0,tam-1);
    leerCadena(caden,tam);
    cout<<"Ordenamiento por Merger Sort: ";
    MergeSort(caden,0,tam-1);
    leerCadena(caden,tam);
}
