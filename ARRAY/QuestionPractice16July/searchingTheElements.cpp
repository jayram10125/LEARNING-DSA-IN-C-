//Find the element x in the array . Take array and x as input
#include<iostream>
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
    int search;
    cout<<"enter the srearching element : ";
    cin>>search;
    int f=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            f=1;
            break;
        }
        
    }
    if(f==1)
    {
        cout<<"element is found";
    }
    else
    {
        cout<<"element is not found";
    }

    return 0;
}