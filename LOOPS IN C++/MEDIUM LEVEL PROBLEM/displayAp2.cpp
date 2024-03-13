//Display this AP - 4,7,10,13,16.. upto ‘n’ terms.


#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter number of terms that you want to print : ";
    cin>>n;
    int a=4 ,d=3;
    int an=a+(n-1)*d;
    for(int i=a;i<=an; i=i+d)
    {
        cout<<i<<" ";
    }


}