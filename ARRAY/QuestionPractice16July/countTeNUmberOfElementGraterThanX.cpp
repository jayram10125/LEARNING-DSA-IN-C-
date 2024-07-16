//Count the number of elements in given array greater than a given number x
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"enter the value of x : ";
    cin>>x;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>x)
        {
            count++;
        }
    }
    cout<<"the total number i.e grater than "<<x<<" is : "<<count;

    return 0;
}