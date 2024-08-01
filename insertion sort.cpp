// insertion sort

#include<iostream>
using namespace std;
void insertionSort(int arr[], int size)
{
    int i,j,key;
    for(i=1; i<size; i++)
    {
        key = arr[i];
        j=i-1;
        while(j>=0 && arr[j] > key)
        {
           arr[j+1] = arr[j];
           j=j-1;
        }
        arr[j+1] = key;

    }
    int main()
    {
        int a[5] = {20,30,2,50,5};
        int s= sizeof(a)/ sizeof(arr[0]);
        insertionSort(a,s)
    }
}