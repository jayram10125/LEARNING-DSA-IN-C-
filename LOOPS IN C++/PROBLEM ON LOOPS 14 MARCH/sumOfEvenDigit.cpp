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
       m=n%10;
       n=n/10;
       
       if(m%2==0)
       {
       sum=sum+m;
       }
    
     }
     
     cout<<"the sum of even digits is : "<<sum;

}
