// Write a program to find the sum of two numbers using pointers
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers : ";
    cin>>a>>b;
    int *ptr1=&a,*ptr2=&b;
    cout<<"the sum of "<<a<<" and "<<b<<" is : "<<*ptr1 + *ptr2;  
}