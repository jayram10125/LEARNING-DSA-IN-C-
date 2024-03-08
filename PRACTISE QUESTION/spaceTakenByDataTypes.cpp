//accordiing to 64 bit artitecture
//int = 4bytes
//float = 4bytes
//char = 1bytes

#include<iostream>
using namespace std;
int main()
{
    int a;
    float b;
    char c;
    cout<<sizeof(a)<<"bytes"<<endl;
    cout<<sizeof(b)<<"bytes"<<endl;
    cout<<sizeof(c)<<"bytes"<<endl;
    return 0;
}