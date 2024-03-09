#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter first number : ";
    cin>>a;
    cout<<"enter second number : ";
    cin>>b;
    cout<<"enter third number : ";
    cin>>c;
    if(a>b && a>c)
    {
        cout<<a<<" is grater";
    }
    else if(b>c && b>a)
    {
        cout<<b<<" is grater";
    }
    else{
        cout<<c<<" is grater";
    }
    
    return 0;
}
