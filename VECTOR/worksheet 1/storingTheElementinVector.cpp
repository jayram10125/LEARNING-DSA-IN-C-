/*Write a program that takes n integers as input from the user and stores them in a vector.
Print the vector using a loop.*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n,x;
    cout<<"enter the size of vector : ";
    cin>>n;
    cout<<"enter the "<<n<<" elements of vector : ";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cout<<"the vector is : ";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }


    return 0;
}
