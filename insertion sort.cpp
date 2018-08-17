#include<iostream.h>
#include<conio.h>

void ISort(int Ar[], int s)
{
    int temp, j;
    for(int i=1;i<s;i++)
    {
        temp=Ar[i];
        j=i-1;
        while((j>=0)&&(temp<Ar[j]))
        {
            Ar[j+1]=Ar[j];
            j--;
        }
        Ar[j+1]=temp;
    }
}

void main()
{
    clrscr();
    int array[50];
    int n, i=0;
    cout<<"Enter number of elements in the array";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
    }
    ISort(int array[], int n);

}
