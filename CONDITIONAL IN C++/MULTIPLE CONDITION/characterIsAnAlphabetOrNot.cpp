#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter a character : ";
    cin>>ch;
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        cout<<ch<<" is a character";
    }
    else
    {
        cout<<ch<<" is not a character";  
    }
    return 0;
}