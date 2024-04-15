//PRINT THE STAR CROSS PATTERN
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter the size (odd) of star cross pattern : ";
    cin>>n;
     for(int i=1;i<=n;i++)
     {
        for(int j=1;j<=n;j++)
        {
            if(i==j || (i+j)==(n+1))
            {
                cout<<"*";
            }
            else
                cout<<" ";
        }
        cout<<endl;
     }
}