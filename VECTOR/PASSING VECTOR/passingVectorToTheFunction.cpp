//passing vector to the array
#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> &v1)
{
    v1[2]=7;
}
int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(8);
    v.push_back(2);
    v.push_back(3);
    v.push_back(9);
    cout<<"the elements of orignal array : ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    change(v);
    cout<<"\n the elements after calling the change function : ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }


    return 0;
}