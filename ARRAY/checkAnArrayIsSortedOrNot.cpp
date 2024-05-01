//GIVEN AN ARRAY FIND ITS SORTED OR NOT
#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,2,13,4,5,6};
    int f=1;
    for(int i=0;i<6;i++)
    {
        if(arr[i]<=arr[i+1])
        {
            f++;
        }
    }
    if(f==6)
    {
        cout<<"sorted";
    }
    else
    {
        cout<<"not sorted";
    }
    return 0;
}