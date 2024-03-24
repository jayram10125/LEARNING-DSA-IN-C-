/*Find the maximum value out of all the elements
in the array.*/
#include<iostream>
using namespace std;
int main()
{
    int arr[50];
    int n,max;
    cout<<"enter the size of array : ";
    cin>>n;
    cout<<"enter the elements of array  :\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max=arr[0];
    for(int i=1;i<n;i++)
    {
         
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    cout<<"\nmax = "<<max;
}
