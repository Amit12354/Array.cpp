#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5};
    int size = 5;
    for(int i = 0; i <= size; i++)
    {
        int element  = arr[i];
        for(int j = i+1; j < size; j++)
        {
            int element1 = arr[j]; 
        cout<<"("<<element<<","<<element1<<")"<<endl;
    }
    cout<<"\n";
    }
}