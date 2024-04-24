#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(5);// vector<int> v(5)={1,5,6,7,8};  (aaise declare nahi kar sakte hai)
    //v={1,5,6,7,8};
    cout<<"size is : "<< v.size()<<endl;
    cout<<"enter the"<<v.size()<<" elements ";
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }

    cout<<"capacity is : "<< v.capacity()<<endl;
    v.push_back(1);
    cout<<"capacity is : "<< v.capacity()<<endl;
    v.push_back(3);
    cout<<"capacity is : "<< v.capacity()<<endl;
    v.push_back(7);
    cout<<"capacity is : "<< v.capacity()<<endl;
    v.push_back(9);
    cout<<"capacity is : "<< v.capacity()<<endl;
    v.push_back(8);
    cout<<"capacity is : "<< v.capacity()<<endl;
    v.push_back(5);
    cout<<"size is : "<< v.size()<<endl;//5+6=11
    cout<<"capacity is : "<< v.capacity()<<endl;
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    v.resize(15); //11+15
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //popping the element (it will happen from last)
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<"\n size is : "<<v.size()<<endl;
    cout<<"after popping elements are "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
//iserting the elements
    v.insert(v.begin()+5,565);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    
    v.clear();
    cout<<"size is : "<< v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }


    return 0;
}