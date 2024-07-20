//: Count the number of elements in given array greater than a given number x.
#include<iostream>
using namespace std;
int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int x;
    cout<<"enter x : ";
    cin>>x;
    int count=0;
    for(int i=0;i<8;i++)
    {
        if(arr[i]>x)
        {
            count++;
        }
    }
    cout<<"the number of elements that is grater then "<<x<<" is : "<<count;
    return 0;
}