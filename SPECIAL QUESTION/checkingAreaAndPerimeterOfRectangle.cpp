#include<iostream>
using namespace std;
int main()
{
    int l,b,perimeter,area;
    cout<<"enter length of rectangle : ";
    cin>>l;
    cout<<"enter breadth of rectangle : ";
    cin>>b;
    perimeter = 2*(l+b);
    area = l*b;
    if (perimeter>area)
    {
        cout<<"perimeter is grater";
    }
    else{
        cout<<"area is grater";
    }
    return 0;
}