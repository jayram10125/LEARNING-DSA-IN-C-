/*Calculate the sum of all the elements in the
given array.*/
#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,5,7,18,34,65,34,23,22,8};
    int sum=0;
    cout<<"sum of  the elements of array is :  ";
    for(int i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
}
