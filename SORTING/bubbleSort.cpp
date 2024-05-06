//program for bubble sort
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array : \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Before sorting array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
           
            if(arr[j]>arr[j+1])
            {
            swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"After sorting array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;




    // total swapping = n(n-1)/2
    //Worst time complexity =O(n^2)
    //space complexity=O(1)
    // it is a stable sorting algorithm
}