/*Count the number of elements in given array
greater than a given number x.*/

#include <iostream>
using namespace std;
int main()
{
    int n,count=0,x;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array : \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the value of x :";
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>x)
        {
            count++;
        }
    }
    cout<<"total element(s) that is grater than "<<x<<" is/are : "<<count;
    return 0;
}