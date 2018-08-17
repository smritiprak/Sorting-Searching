#include<iostream.h>
#include<conio.h>

void merge(int arr[], int l, int m, int u)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  u - m;

    int A[30], B[30];

    for (i = 0; i < n1; i++)
    A[i] = arr[l + i];
    for (j = 0; j < n2; j++)
    B[j] = arr[m + 1+ j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
    if (A[i] <= B[j])
    {
        arr[k] = A[i];
        i++;
    }
    else
    {
        arr[k] = B[j];
        j++;
    }
    k++;
    }

    while (i < n1)
    {
    arr[k] = A[i];
    i++;
    k++;
    }

    while (j < n2)
    {
    arr[k] = B[j];
    j++;
    k++;
    }
}

void mergeSort(int arr[], int l, int u)
{
    if (l < u)
    {
    int m =l+(u-l)/2;

    mergeSort(arr, l, m);
    mergeSort(arr, m+1, u);

    merge(arr, l, m, u);
    }
}


void main()
{   clrscr();
    int array[50],n;
    cout<<"Enter the number of elements (MAX 50): "; cin>>n;

    for(int i=0;i<n;i++) { cin>>array[i];
    }


    mergeSort(array, 0, n-1);

    cout<<"\n Array after sorting : ";

    for(i=0;i<n;i++)
     cout<<array[i]<<" ";


    getch();
}
