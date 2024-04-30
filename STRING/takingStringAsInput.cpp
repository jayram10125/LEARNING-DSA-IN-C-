//taking iinput of string
#include<iostream>
#include<string>
using namespace std;
int main()
{
    // string str;
    // cout<<"enter a string : ";
    // cin>>str;   //  cin ke through bass ek word hi print hoga pura sentence nahi jaise hi sentence me space dikhega wo terminate ho jayega
    // cout<<str;


    string str;
    cout<<"enter a string : ";
    getline(cin,str);
    cout<<str<<endl;


    
    return 0;
}