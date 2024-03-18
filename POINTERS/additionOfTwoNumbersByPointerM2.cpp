// Write a program to find the sum of two numbers using pointers
#include<iostream>
using namespace std;
int add(int*ptr1,int*ptr2)
{
    return *ptr1 + *ptr2;
}
int main()
{
    int a,b;
    cout<<"enter two numbers : ";
    cin>>a>>b;
    int*ptr1=&a;
    int*ptr2=&b;
    cout<<"the sum of "<<*ptr1<<" and "<<*ptr2<<" is  : "<<add(&a,&b);

    return 0;
}