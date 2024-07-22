/*Implement a program that takes n integers as input from the user, stores them in a vector, and 
sorts the vector in ascending order using the sort function.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    int n,x;
    cout<<"enter the size of vector ";
    cin>>n;
    cout<<"enter the elements of vector : ";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    //sorting in ascinding order
    sort(v.begin(),v.end());
    cout<<"sorted vector in ascinding order : ";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    //sorting in descending order
    cout<<endl;
    sort(v.begin(),v.end(),greater<int>());
    cout<<"sorted vector in descinding order : ";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}