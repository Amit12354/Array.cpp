#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[]={1,3,5,5,6,0};
    int size = 6;
    int min  = INT_MAX;
    int index = min;
    for(int i = 0;  i < size; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
            index = i;
        }
    }
    cout<<min;
    cout<<" index is "<<index;
}