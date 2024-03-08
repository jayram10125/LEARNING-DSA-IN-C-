#include<iostream>
using namespace std;
int main(){
    int m1,m2,m3,m4,m5;
    cout<<"enter the marks of 1st subject : ";
    cin>>m1;
    cout<<"enter the marks of 2nd subject : ";
    cin>>m2;
    cout<<"enter the marks of 3rd subject : ";
    cin>>m3;
    cout<<"enter the marks of 4th subject : ";
    cin>>m4;
    cout<<"enter the marks of 5th subject : ";
    cin>>m5;
    float avg;
    avg=(m1+m2+m3+m4+m5)/5.0;
    cout<<"average of 5 subject is : "<<avg;
}