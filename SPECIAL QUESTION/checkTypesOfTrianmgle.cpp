#include<iostream>
using namespace std;
int main()
{
        int side1,side2,side3;
        cout<<"enter the side 1 : ";
        cin>>side1;
        cout<<"enter the side 2 : ";
        cin>>side2;
        cout<<"enter the side 3 : ";
        cin>>side3;
        if ((side1==side2)&&(side2==side3))
        {
            cout<<"it is an equilateral triangle";
        }
        else if((side1==side2) || (side2==side3) || (side1==side3))
        {
            cout<<"it is an isosceles triangle";
        }
        else
        {
            cout <<"it is a scalen triangle ";
        }
    return 0;
}
