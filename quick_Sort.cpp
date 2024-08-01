#include<iostream>
using namespace std;

void quick_sort(int low , int high)
{
    int pivot, i, j;
       // pivot returns min or max value depend which side keeping 
    if(low > high )
     return;



    i=low+1;
    j=high;

    pivot= arr[low];

    while(i<=j)
    {    // search for an element greater then pivot
        while((arr[i] <= pivot) && (i<=high))
        i++;
     //cmp_count++;
    }

    while((arr[j] > pivot)&& (j>=low))
    {
        j--;
        // cmp_count++
    }
    // cmp

    if(i<j)
    {
        swap(i,j);
        //mov_count++;
    }
    quick_sort(low,j-1);
    quick_sort(j+1,high);

}
int main()
{
    int arr[] = {6,7,8,9,3,4,5};
    quick_sort()

}