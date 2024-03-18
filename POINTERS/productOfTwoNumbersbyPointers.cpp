//Write a program to find the product of two numbers using pointers.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers : ";
    cin>>a>>b;
    int* ptr1=&a ,*ptr2=&b;
    cout<<"the product of "<<*ptr1<<" and "<<*ptr2<<" is : "<<*ptr1 * *ptr2;
    return 0;
}