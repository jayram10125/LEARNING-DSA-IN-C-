#include<iostream>
using namespace std;
int main()
{
    int n ,k=0;
    cout<<"enter a number : ";
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"number is not prime ";
            k++;
            break;
        }   
    }
    if(k==0){
    cout<<"number is prime";
    }
    return 0;
}