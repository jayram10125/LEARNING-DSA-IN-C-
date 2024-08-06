//given an integers array 'a', return the prifix sum/running sum in the same array without creating a new array.
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,4,5,7,9};
    int sum=0;
    for(int i=1;i<6;i++)
    {
        arr[i]=arr[i]+arr[i-1];
    }

    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

    return 0;
}