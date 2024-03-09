#include<iostream>
using namespace std;
int main(){
float a = 5, b = 2; 
int c; 
c=a%b;  // will give an error because we dont calculate the reminder of floating point number
cout<<c;
return 0;
}