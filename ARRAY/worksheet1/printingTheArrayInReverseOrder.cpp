//Question 10: Write a program that declares an array of size 5, takes input from the user to fill the array, and prints the array elements in reverse order
#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"enter the elements of array : ";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    
    }
    cout<<"elements in revers order : ";
    for(int i=4;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}