/*
Print the alphaber square pattern
A B C D 
A B C D
A B C D
A B C D
*/
#include<iostream>
using namespace std;
int main()
{
    int size;
    
    cout<<"enter the size of alphabet square : ";
    cin>>size;
    for(int i=1;i<=size;i++)
    {
        char ch = 'A';
        for(int j=1;j<=size;j++)
        {
            cout<<ch;
            ch++;
            
        }

        cout<<endl;
    }
}