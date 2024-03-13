#include<iostream>
using namespace std;
int main()
{
    cout<<"even numbers are : ";
    for(int i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            cout<<" "<<i;
        }
    }
    return 0;
}