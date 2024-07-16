//Find the maximum value out of all the elements in the array.
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=INT_MIN;
    cout<<"maximum element is : ";
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }

    }
    cout<<max;
    return 0;
}