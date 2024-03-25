/*Calculate the product of all the elements in the given array.*/
#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,2,3,4,6,5,8,7,9,10};
    int product=1;
    cout<<"product of  the elements of array is :  ";
    for(int i=0;i<10;i++)
    {
        product=product*arr[i];
    }
    cout<<product;
}