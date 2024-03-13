#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter number of terms that you want to print : ";
    cin>>n;
    int a=1 ,d=2;
    int an=a+(n-1)*d;
    for(int i=a;i<=an; i=i+d)
    {
        cout<<i<<" ";
    }


}