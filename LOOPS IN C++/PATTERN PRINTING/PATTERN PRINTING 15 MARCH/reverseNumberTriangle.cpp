/*
Print the following pattern
Input: n = 4
Output:
1 2 3 4
1 2 3
1 2
1
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of reverse number triangle : ";
    cin>>n;
    int z=n;
    for(int i=1;i<=n;i++)
    {
        
        for(int j=1;j<=z;j++)
        {
            cout<<j<<" ";
        }
        z--;
        cout<<endl;
      
    }
}
