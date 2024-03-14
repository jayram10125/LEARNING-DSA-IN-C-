#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter a number : ";
    cin>>n;
    int sum=0;
    for(int i=0;n>0;i++)
    {
        m=m%10;
        n=n/10;
        sum=sum+m;
    }
    cout<<"the sum digit : "<<sum;
}