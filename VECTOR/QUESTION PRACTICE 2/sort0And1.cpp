//Ques: Sort the array of 0’s and 1’s.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v={0,1,1,0,1,0};
    //method 1 : two pass method
    int n=v.size();
    cout<<"before sorting : ";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    
    int count0=0;
    int count1=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==0)
        count0++;
        else
        count1++;
    }
    for(int i=0;i<n;i++)
    {
        if(i<count0)
        v[i]=0;
        else
        v[i]=1;
    }
    cout<<"\nafter sorting : ";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
