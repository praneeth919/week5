#include<iostream>

using namespace std;

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
 
int partition (int array[], int start, int end)
{
    int pivot = array[end];    
    int i = (start - 1);
 
    for (int j = start; j <= end- 1; j++)
    {
    if (array[j] <= pivot)
    {
        i++;    
        swap(&array[i], &array[j]);
    }
    }
    swap(&array[i + 1], &array[end]);
    return (i + 1);
}

void quickSort(int array[], int start, int end)
{
    if (start < end)
    {
    int p = partition(array, start, end);
 
    quickSort(array, start, p - 1);
    quickSort(array, p + 1, end);
    }
}
 
int main()
{  
    int n,array[100];
    cout<<"Enter number of Elements: "; cin>>n;

    for(int i=0;i<n;i++) cin>>array[i];
 
    quickSort(array, 0, n-1);

    for(int j=0;j<n;j++)
     cout<<array[j]<<" ";
     
    return(0);
}
