#include<iostream>

using namespace std;
 
int main()
{  
    int array[100],size,temp;
    cout<<"Enter the size of array: "; 
	cin>>size;
 
    for(int i=0;i<size;i++){
	cin>>array[i];
    }

    for(int i=1;i<size;i++)
    {
    for(int j=0;j<(size-i);j++) if(array[j]>array[j+1])
        {
        temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
        }
    }

    for(int i=0;i<size;i++){
    cout<<" "<<array[i];
    }
    return(0);
}
