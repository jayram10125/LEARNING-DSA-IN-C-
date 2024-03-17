/* Write a function to count the number */
#include<iostream>
using namespace std;
void  count(int n)
{
    int Count=0;
    int m;
    for(int i=1;n>0;i++)
    {
        m=n%10;
        n=n/10;
        Count++;
    }
    cout<<"the number of digit is : "<<Count<<endl;
       
}
int main()
{
    int n;
    cout<<"enter a number : ";
    cin>>n;
    count(n);
    

    return 0;
}