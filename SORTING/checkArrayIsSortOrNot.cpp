#include<iostream>
using namespace std;
int main()
{
    int arr[5]={4,5,6,7,8};
    bool flag=true;
    for(int i=1;i<5;i++)
    {
        if(arr[i]<=arr[i-1])
        {
            flag=false;
        }
    }
    cout<<flag;


    return 0;
}