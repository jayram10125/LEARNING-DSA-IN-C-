/*Find the minimum value out of all elements in the array.*/
#include<iostream>
using namespace std;
int main()
{
    int arr[50];
    int n,min;
    cout<<"enter the size of array : ";
    cin>>n;
    cout<<"enter the elements of array  :\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    min=arr[0];
    for(int i=1;i<n;i++)
    {
         
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    cout<<"\nmin = "<<min;
}
