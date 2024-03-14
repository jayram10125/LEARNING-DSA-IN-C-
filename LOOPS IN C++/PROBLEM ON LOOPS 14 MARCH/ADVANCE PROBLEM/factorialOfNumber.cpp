#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number of which you want to find factorial : ";
    cin>>n;
    int factorial=1;
    if(n==0||n==1)
    {
        cout<<"factorial of "<<n <<" is : "<<factorial;
    }
    else
    {
        for(int i=n;i>0;i--)
        {
            factorial=factorial*i;
        }
            cout<<"factorial of "<<n <<" is : "<<factorial;
    }
    return 0;
}
