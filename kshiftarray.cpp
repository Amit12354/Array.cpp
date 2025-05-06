#include<iostream>
using namespace std;
void R_shift(int arr[], int length)
{
    int k = 3;
    for(int i = 0; i < k/2; i++)
    {
        swap(arr[i],arr[k-1-i]);
    }
    for(int i = 0; i < (length-k)/2; i++)
    {
        swap(arr[i+k],arr[length-1-i]);
    }
    for(int i = 0; i < length/2; i ++)
    {
        swap(arr[i],arr[length-1-i]);
    }
    for(int i = 0; i < length; i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int arr[] = {10,20,30,40,50,60};
    int length = sizeof(arr)/sizeof(arr[0]);
    R_shift(arr,length);

}