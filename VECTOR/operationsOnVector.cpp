#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"size is : "  <<v.size()<<endl;
    cout<<"capacity is : "<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"size is : "  <<v.size()<<endl;
    cout<<"capacity is : "<<v.capacity()<<endl;
    v.push_back(7);
    cout<<"size is : "  <<v.size()<<endl;
    cout<<"capacity is : "<<v.capacity()<<endl;
    v.push_back(6);
    cout<<"size is : "  <<v.size()<<endl;
    cout<<"capacity is : "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"size is : "  <<v.size()<<endl;
    cout<<"capacity is : "<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"size is : "  <<v.size()<<endl;
    cout<<"capacity is : "<<v.capacity()<<endl;

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
} 