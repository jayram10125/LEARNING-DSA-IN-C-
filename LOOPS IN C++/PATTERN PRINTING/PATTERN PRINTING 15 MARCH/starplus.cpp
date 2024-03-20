/*
star plus
     *
     *
 * * * * *
     * 
     * 
*/
#include<iostream>
using namespace std;
int main()
{
    int n,z;
    cout<<"enter size (odd) of star plus pattern : ";
    cin>>n;
    z=(n/2)+1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==z || i==z)
            {
                cout<<"*";
            }
            else
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;

}