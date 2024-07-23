//Find the last occurrence of x in the array.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(8);
    v.push_back(9);
    v.push_back(5);
    v.push_back(6);
    v.push_back(8);

    int x;
    cout<<"enter x : ";
    cin>>x;
    int index;

    for(int i=0 ; i<v.size();i++)
    {
        if(v[i]==x)
        {
            index=i;
        }
    }
    cout<<"the index with last occurance of "<<x<<" is : "<<index;



    return 0;
}