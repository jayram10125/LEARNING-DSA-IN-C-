
/*Print the following pattern
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
*/
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<" enter the size of number square : ";
    cin>>size;
    for(int i=1;i<=size;i++)
    {
        for(int j=1;j<=size;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}