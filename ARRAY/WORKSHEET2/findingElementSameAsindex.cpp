//Given an array arr. Your task is to find the elements whose value is equal to that of its index value
#include<iostream>
using namespace std;
int main()
{
    int arr[8]={1,5,2,6,4,3,6,8};
    for(int i=0;i<8;i++)
    {
        if(arr[i]==i)
        {
            cout<<arr[i]<<" ";
        }
    }


    return 0;
}