/* 1234
   1234
   1234
   1234  */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the side length of square : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int i=1;i<=n;i++)
        {
            cout<<i;
        }
        cout<<endl;
    }
   return 0;
}