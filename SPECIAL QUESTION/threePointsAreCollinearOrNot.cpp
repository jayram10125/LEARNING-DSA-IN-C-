#include<iostream>
using namespace std;
int main()
{
    int x1,y1,x2,y2,x3,y3;
    cout<<"enter x1 : ";
    cin>>x1;
    cout<<"enter y1 : ";
    cin>>y1;
    cout<<"enter x2 : ";
    cin>>x2;
    cout<<"enter y2 : ";
    cin>>y2;
    cout<<"enter x3 : ";
    cin>>x3;
    cout<<"enter y3 : ";
    cin>>y3;
    int m1 = (y1-y2)/(x1-x2);
    int m2 = (y2-y3)/(x2-x3);
    if(m1=m2)
    {
        cout<<"the points lies on straigh line or points are collinear ";
    }
    else
    {
        cout<<"the points does not lies on straigh line or points are non-collinear ";
    }

    return  0;
}