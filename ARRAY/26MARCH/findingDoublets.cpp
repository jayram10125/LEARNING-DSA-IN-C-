/*Find the doublet in the Array whose sum is 
equal to the given value x (LEETCODE TWO SUM)*/
#include<iostream>
using namespace std;
int main()
{
    int n,pairs=0;
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    cout<<"enter a number : ";
    cin>>n;
    cout<<"total pairs are : ";
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(arr[i]+arr[j]==n)
            {
                pairs++;
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            }
        }
    }
    
    cout<<"total pairs whose sum is "<<n<<" are "<<pairs;
    return 0;
    
}