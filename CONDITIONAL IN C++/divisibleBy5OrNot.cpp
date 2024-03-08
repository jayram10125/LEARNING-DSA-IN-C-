#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a positive number : ";
    cin>>n;
    if(n%5==0)
    {
        cout<<"the entered number is divisible by 5 ";
    }
    else{
        cout<<"the entered number is not divisible by 5";
    }
    return 0;
}