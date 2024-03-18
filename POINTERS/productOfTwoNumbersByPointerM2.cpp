// Write a program to find the product of two numbers using pointers.
#include<iostream>
using namespace std;
int add(int* a,int*b)
{
    return *a * *b;
}
int main()
{
    int a,b;
    cout<<"enter two numbers : ";
    cin>>a>>b;
    cout<<"the product of "<<a <<" and "<<b<<" is : "<< add(&a,&b);
    
}