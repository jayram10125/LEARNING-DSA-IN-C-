/*write a function to calculate the 
Combination and Permutation*/
#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for (int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int permutation(int n,int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int combination(int n,int r)
{
    return factorial(n)/(factorial(n-r));
}

int main()
{
    int n,r;
    cout<<"enter n : ";
    cin>>n;
    cout<<"enter r : ";
    cin>>r;
    cout<<"permutation ncr is : "<<permutation(n,r)<<endl;
    cout<<"combination npr is : "<<combination(n,r)<<endl;

return 0;
}
