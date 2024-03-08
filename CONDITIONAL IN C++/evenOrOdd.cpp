#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a positive number : ";
    cin>>n;
    if(n%2==0)
    {
        cout<<"the entered number is even";
    }
    else{
        cout<<"the entered number is odd";
    }
    return 0;
}