#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"enter a number for which you want to print the table : ";
   cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<n*i<<endl;
    }
    return 0;
}