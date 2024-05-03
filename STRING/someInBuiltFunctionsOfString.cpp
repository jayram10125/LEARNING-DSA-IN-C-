//Inbuilt functions of string
#include<iostream>
#include<cstring>
#include <algorithm>
using namespace std;
int main()
{
    string str="hippopotamous";
    //reverse()
    reverse(str.begin(),str.end());
    cout<<"reverse of given string is : ";//suomatopoppih
    cout<<str<<endl;
    //substr()
    str.substr(0,5);
    cout<<"substring is : "<< str.substr(0,5)<<endl;//suoma
    cout<<str<<endl;
    //concatinate
    string s1="jay";
    string s2=" Ram";
    cout<<"concatinated string : "<< s1+s2<<endl;//jay ram
    s1+=s2;
    cout<<"concatinated string : "<< s1<<endl;//jay ram
    // s1=s1+s2;
    // cout<<"concatinated string : "<< s1<<endl;
      
      
    //strcat()
    char str1[]="jay";
    char str2[]="ram";
    strcat(str1,str2);
    cout<<str1<<endl;
    
    //push_back()
     
     string abc="ram";
     //char ch='u';
     //abc.push_back('u');
     abc.push_back('u');
     cout<<abc<<endl;

     //size()
     cout<<abc.size()<<endl;
     cout<<abc.length()<<endl;

     //strlen()   for character array
     cout<<strlen(str2)<<endl;
    


    //to-string()
    int num=21;
    
    string strng = to_string(num);
    cout<<strng<<endl;
    strng+="5";
    cout<<strng<<endl;
    cout<<strng[2];



    return 0;
}