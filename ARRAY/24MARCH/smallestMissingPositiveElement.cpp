/*WAP to find the smallest missing positive element in the sorted Array that contains only
positive elements.*/
#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,9,10,12,15,18,20};
    int min=arr[0];
    for(int i=0;i<20;i++)
    {
        if(arr[i]!=(i+1))
        {
            cout<<"smallest missing element is : "<<i+1;
            break;
        }
    }

    return 0;
}