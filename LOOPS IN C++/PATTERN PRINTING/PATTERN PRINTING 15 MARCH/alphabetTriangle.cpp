/*
Print the following pattern
Input: n = 4
Output:
A
A B
A B C
A B C D
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of alphabet triangle : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        char ch ='A';
        for(int j=1;j<=i;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
