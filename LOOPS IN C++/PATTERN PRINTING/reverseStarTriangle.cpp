/*Print the reverse star triangle pattern
****
***
**

*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of reverse star triangle : ";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            cout<<"*";
        }
     
        cout<<endl;
    }
}