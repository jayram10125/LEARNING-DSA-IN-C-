//Calculate the sum of all the elements in the given array
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of elements of array : ";
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"sum of all the elements of array is : ";
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;

    return 0;
}