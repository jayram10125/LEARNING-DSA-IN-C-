//addition and subtraction  of two matrices
#include<iostream>
using namespace std;
int main()
{
    int matrix1[3][3];
    int matrix2[3][3];
    int subresult[3][3];
    int addresult[3][3];
    cout<<"enter the elements of first matrix : \n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>matrix1[i][j];
        }
    }
    cout<<"enter the elements of second matrix : \n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>matrix2[i][j];
        }
    }
//addition
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            addresult[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
//subtraction
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            subresult[i][j]=matrix1[i][j]-matrix2[i][j];
        }
    }

    cout<<"first matrix is  : \n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"second matrix is : \n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"the sum of matrix1 and matrix 2 is : \n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<addresult[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"the difference of matrix1 and matrix 2 is : \n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<subresult[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}