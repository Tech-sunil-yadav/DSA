// SELECTION SORT
//
//
// HOW TO FIND MINIMUM ELEMENT IN ARRAY
// #include<iostream>
// using namespace std;
// int main()
// {
// int s,min; 
// int arr[] = {10,3,8,62};
// min = arr[0];
// s = sizeof(arr)/4;

//     for(int i=1; i<s; i++)
//     { 
//     if(arr[i]<min)
//     {
//         min=arr[i];

//     }
    
    
//    }
//    cout<<"minimum value   is "<<min;
  
// }




// selection sort

#include<iostream>
using namespace std;
void selectionSort(int arr[],int size)
{
     int min,i,j,c=0;
     for(i=0; i<size-1; i++)
     { 
         min=i;
         for(j=i+1; j<size; j++)
         {     c++;
            if(arr[min]>arr[j])
            {
                min = j;

            }
         }
         if(i!= size)
         {
            swap(arr[min], arr[i]);

         }
     }
     int k;
     for(k=0; k<size ; k++)
     {
        cout<<arr[k]<<"\t";
     }
     cout<<"comparison "<<c<<endl;
}
int main()
{
    int arr[5] = {10,3,8,6,2};
    int size = sizeof(arr)/ sizeof(arr[0]);
    selectionSort(arr,size);
}
