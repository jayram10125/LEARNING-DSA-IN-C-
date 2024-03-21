/*
Print the following pattern
Input n = 4
Output:
*
**
***
****
***
**
*
*/
#include<iostream>
using namespace std;
int main()
{
    int n,z,p,l;
    cout<<"enter size of combined triangle : ";
    cin>>n;
    z=(2*n-1);
    p=z/2+1;
    l=p;
    for(int i=1;i<=z;i++)
    {
        if(i<=p)
        {
          for(int j=1;j<=i;j++)
          {
            cout<<"*";
          }
          cout<<endl;
        }
        
        if(i>p)
        {
          for(int k=1;k<l;k++)
          {
            cout<<"*";    
          }
          l--;
          cout<<endl;
        }
        
    }

}