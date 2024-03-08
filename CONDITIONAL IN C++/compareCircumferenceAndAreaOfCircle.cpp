#include<iostream>
using namespace std;
int main(){
    float r,area,circumference;
    cout<<"enter the radius of circle : ";
    cin>>r;
    area=3.14*r*r;
    circumference=2*3.14*r;
    if (area>circumference)
    {
        cout<<" area of this circle is larger than the circumference";
    }
    else{
        cout<<" area of this circle is not larger than the circumference";
    }
    
    return 0;
    
}