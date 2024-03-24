/*Given an array of marks of students, if the
mark of any student is less than 35 print its roll
number. [roll number here refers to the index of the
array.]*/
#include<iostream>
using namespace std;
int main()
{
    int marks[10]={40,55,75,32,95,26,88,34,42,67};
    cout<<"roll number : ";
    for(int i=0;i<10;i++)
    {
        if(marks[i]<35)
        {
            cout<<i+1<<",";
        }
    }
}