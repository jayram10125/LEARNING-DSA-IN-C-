//Given an array, predict if the array contains duplicates or not.
#include<iostream>
using namespace std;
int main()
{
    bool flag=false;
    
    int arr[8]={1,6,3,4,5,6,7,8};
    for(int i=0;i<7;i++)
    {
        for(int j=i+1;j<8;j++)
        {
            if(arr[i]==arr[j])
            {
               flag=true;
               
            }
        }
    }
    if(flag==true)
    {
        cout<<"duplicate elements are availabel";
    }
    else
    {
        cout<<"duplicate elements are not available";
    }

    return 0;
}