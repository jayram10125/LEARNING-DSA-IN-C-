//Display this GP - 3,12,48,.. upto ‘n’ terms

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,x,power,an;
    cout<<"enter number of terms : ";
    cin>>n;
    int a=3 ,r=4;
    //an=ar^(n-1)
    x=(n-1);
    power=pow(r,x);
    an=a*power;
    for(int i=a;i<=an;i=i*r)
    {
        cout<<" "<<i;
    }


}