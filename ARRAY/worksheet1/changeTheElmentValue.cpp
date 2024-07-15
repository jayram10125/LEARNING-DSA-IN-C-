//Question 7: Change the second element of the array arr to 25 and print the updated array.
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,32,45,67,33};
    cout<<"before update value of second element is : "<<arr[1]<<endl;
    arr[1]=25;
    cout<<"after updating value of second element is : "<<arr[1];

    return 0;
}