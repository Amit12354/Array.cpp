#include<iostream>
using namespace std;
int main()
{
    int arr[5]={20,30,40,50,60};
    int size=sizeof(arr)/sizeof(arr[0]);
    int start= 0; //this is index repersentant not values of array.
    int end= size-1;
    while(start <= end)//
    {
       
     if(start == end)
    {
        cout<<arr[start]<<" ";
    }
    else{
        cout<<arr[start];
        cout<<arr[end];
        }
        start++;
        end--;            
}
        return 0;
    }