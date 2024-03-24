/*Find the second largest element in the given
Array.*/
#include<iostream>
using namespace std;
int main()
{
    int arr[50];
    int n,max,secondmax,p;
    cout<<"enter the size of array : ";
    cin>>n;
    cout<<"enter the elements of array : \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max=arr[0];
    for(int i=1;i<n;i++)
    {   
        p=0;
        if(max<arr[i])
        {
            max=arr[i];
            p=i;
        }
    }
    arr[p]=-23256589;
    secondmax=arr[0];
    for(int i=1;i<n;i++)
    {
        if(secondmax<arr[i])
        {
            secondmax=arr[i];
        }
    }
    cout<<"second max is : "<<secondmax;
    

    return 0;
}
