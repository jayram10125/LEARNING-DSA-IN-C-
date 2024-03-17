/* Write a function that takes the radius of 
a circle as an argument and returns its area.*/
#include<iostream>
using namespace std;
float area(float r)
{
    return 3.14*r*r;
}
int main()
{
    float r,Area;
    cout<<"enter the radius of circle : ";
    cin>>r;
    Area=area(r);
    cout<<"the area of radius is : "<<Area;
    return 0;
}