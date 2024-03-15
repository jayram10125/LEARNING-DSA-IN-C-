/*Print the odd Number Triangle pattern

1 
1 3 
1 3 5 
1 3 5 7
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of odd number triangle : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(2*i-1);j++)
        {
            if(j%2!=0)
            {
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}