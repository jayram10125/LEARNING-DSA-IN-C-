//Two Pointers : Write a program to reverse the array without using any extra array.
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> & v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(2);
    cout<<"orignal array is : ";
    display(v);
    cout<<endl;
    int i=0;
    int j=v.size()-1;
    while(i<=j)
    {
        int temp=v[j];
            v[j]=v[i];
            v[i]=temp;
            i++;
            j--;
    }

    // for(int i=0,j=v.size()-1;i<=j;i++,j--)
    // {
    //     int temp=v[j];
    //         v[j]=v[i];
    //         v[i]=temp; 
    // }

    cout<<"reversed array is : ";
    display(v);
    return 0;
}