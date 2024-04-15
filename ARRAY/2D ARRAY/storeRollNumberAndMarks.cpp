/*Write a program to store roll number and 
marks obtained by 4 students side by side in a 
matrix*/
#include<iostream>
using namespace std;
int main()
{
    cout<<"roll no. "<<"       C++ "<<"       DSA "<<endl;
    int arr[4][3]={{1323409,90,85},{1323401,95,80},{1323406,85,92},{1323407,76,85}};
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<"         ";
        }
        cout<<endl;
    }
}