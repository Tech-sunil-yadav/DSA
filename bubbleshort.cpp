#include<iostream>
using namespace std;
int main()
{
    // pass -- HOW many times comparison = n-1 -- because 1 element already sorted
    // no of comparison = n*(n-1)/2
    // time complexity  --- O(n)-- best case
    // O(n*n) = worst case
    int i,j, cmp=0, swap=0;   
     int arr[] = {17,1,8,6,10,89};
     int size = sizeof(arr)/sizeof(arr[0]);
    for(i=1; i<size; i++)
    {
        for(j=0; j<size-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
               int temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;
               swap++;
            }
            
            cmp++;
            
        }
          
     monu
     chanchal
     subham
     
        
        

    }
    cout<<"Data in sorted Array order :"<<endl;
    int k;
    for(k=0; k<size; k++)
    {
        cout<<arr[k]<<" ";
    }
    cout<<"No of comparison "<<" \t "<<cmp<<endl;
    cout<<"No of swap "<<swap<<endl;
}