// // divide conquer rule
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {4,7,3,5};
//     int brr[] = { 7,5,9,12,11,17};
//     int s1 = sizeof(arr)/4;
//     int s2 = sizeof(brr)/4;
//     int s = s1+s2;
//     int crr[s];
//     for(int i=0; i<s1; i++)
//     {
//         crr[i] = arr[i];
//     }
//     for(int j=s1; j<s; j++) 
//     {
//         crr[j] = brr[j-s1];
//     }
//     for(int k=0; k<s; k++)
//     {
//         cout<<crr[k]<<" ,";
//     }
// }


#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {2,3,5,6,8,9,10,11,12,15};
    int even[10]={0};
    int odd[10]={0};
    int i;
    for(i=0; i<10; i++)
    {
        if(arr[i]%2==0)
        {
            even[i] = arr[i];
        }
        else
        {
            odd[i] = arr[i];
        }
    }
    int j,k;
    for(j=0; j<10;j++)
    {
        cout<<even[j]<<"\t";
    }
    cout<<endl;
    for(k=0; k<10                                   ; k++)
    {
        cout<<odd[k]<<"\t";
    }
}