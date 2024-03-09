#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number : " ;
    cin>>n;
    if(n%3==0 && n%5==0)
    {
        cout<<"the entered number is divisible by 3 and 5";
    }
    else
    {
         cout<<"the entered number is not divisible by 3 and 5";
    }
    return 0;
}
