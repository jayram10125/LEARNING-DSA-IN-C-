/*Write a program to copy the contents of one 
array into another in the reverse order.*/
#include<iostream>
using namespace std;
int main()
{
    int arr1[5]={1,3,5,9,7};
    int arr2[5];
    for(int i=4;i>=0;i--)
    {
        arr2[4-i]=arr1[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr2[i]<<" ";
    }
    return 0;

}