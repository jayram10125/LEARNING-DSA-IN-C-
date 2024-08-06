//Sort a string in decreasing order of values associated after removal of values smaller than x.
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string str="AZYZBDXJK";
    string  s;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='X')
        {
            s.push_back(str[i]);
        }
    }
   
    //sort(s.begin(),s.end());
    for(int i=0;i<s.length();i++)     
    {
        for(int j=0;j<s.length()-1-i;j++)
        {
            if(s[j]<s[j+1])   //condition to arrange in descending order
            {
                char temp=s[j];
                    s[j]=s[j+1];
                    s[j+1]=temp;
            }
        }
    }
    for(int i=0;i<s.length();i++)
    {
        cout<<s[i];
    }

    


    return 0;
}