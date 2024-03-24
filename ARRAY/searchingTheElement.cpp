/*Find the element x in the array . Take array and
x as input.*/
#include<iostream>
using namespace std;
int main()
{
    int arr[50];
    int n,x,p,f=0;
    cout<<"enter size of array : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"elements of array are : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nenter the search element : ";
    cin>>x;
    for(int i=0;i<n;i++)
    {
        p=i;
        if(arr[i]==x)
        {
            f=1;
            break;
        }
        
    }
    if(f==1)
    cout<<"\nelement is found at position : "<<p+1;
    else
    cout<<"element is not found at position ";


}
