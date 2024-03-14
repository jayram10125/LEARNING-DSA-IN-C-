#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the term of faboncaai series : ";
    cin>>n;
    int a=0 , b=1 ,c;
    if(n==1)
    {
        cout<<"term is : "<<a;
    }
    else{
        for(int i=2;i<=n;i++)
        {
            c = a + b;
            a = b;
            b = c;   
        }
        cout<<"term is :  "<<a;
    }
    
    
    return 0;
}
