#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    if(n<0)
    {
        cout<<"absolute value is : "<<(-1)*n;
    }
    else{
        cout<<"absolute value is : "<<n;
    }
    
    return 0;
}