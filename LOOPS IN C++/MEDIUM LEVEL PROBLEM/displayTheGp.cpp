#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    int n ;
    cout<<"enter the number of terms : ";
    cin>>n;
    int a=1,r=2;
    int x=(n-1);
    int power= pow(r,x);
    int an=a*power;
   for(int i=1;i<=an;i=i*r)
   {
        cout<<" "<<i;
   }
    


}