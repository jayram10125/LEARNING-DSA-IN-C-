//Write a C++ program to find the largest element of a given 2D array of integers
#include<iostream>
using namespace std;
int main()
{
    int r,c,max;
    cout<<"enter size of row : ";
    cin>>r;
    cout<<"enter size of column : ";
    cin>>c;
    int arr[r][c];
     cout<<"elements "<<r*c<<" of array : \n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"the elements of array :\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    max=arr[0][0];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            if(max<arr[i][j])
            {
                max=arr[i][j];
            }
        }
    }
    cout<<"maximum element is : "<<max;
    return 0;
}
    