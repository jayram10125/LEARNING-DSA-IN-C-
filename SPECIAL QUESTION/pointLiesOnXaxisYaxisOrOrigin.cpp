#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter the value of x : ";
    cin>>x;
    cout<<"enter the value of y : ";
    cin>>y;
    if(x==0 && y!=0)
    {
        cout<<"the point lies on Y axis ";
    }
    else if(y==0 && x!=0)
    {
        cout<<"the point lies on x axis ";
    }
    else if(x==0 && y==0)
    {
        cout<<"the point lies on origin ";
    }
    else{
        cout<<"the point lies in between the axis";
    }
    return 0;
}