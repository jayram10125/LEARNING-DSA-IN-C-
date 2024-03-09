#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter a number : ";
    cin>>n;
    if(n>99 && n<1000)
    {
        cout<<"the entered number is a three digit number";
    }
    else{
        cout<<"the entered number is not a three digit number";
    }
    return 0;
}