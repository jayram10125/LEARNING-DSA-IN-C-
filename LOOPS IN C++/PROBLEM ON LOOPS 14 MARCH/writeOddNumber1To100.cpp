#include<iostream>
using namespace std;
int main()
{
    
    cout<<"odd numbers between 1 to 100 are : ";
    for(int i=0;i<=100;i++)
    {
        if(i%2!=0)
        {
            cout<<" "<<i;
        }
    }
}