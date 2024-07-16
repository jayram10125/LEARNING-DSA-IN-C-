//Find the second largest element in the given Array
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,index;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            index=i;
        }
    }
    arr[index]=INT_MIN;
    int smax=INT_MIN+1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>smax)
        {
            smax=arr[i];
        }
    }
    cout<<"second largest element is : "<<smax;

    return 0;
}