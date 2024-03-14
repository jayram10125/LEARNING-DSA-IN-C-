#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter a number : ";
    cin>>n;
    int reverse=0;
    for(int i=0;n>0;i++)
    {
        m=n%10;
        n=n/10;
        
        reverse=reverse*10;
        reverse=reverse+m;

    }
   cout<<reverse;
}