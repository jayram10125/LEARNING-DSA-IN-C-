/*Given an array of marks of students, if the mark of any student is less than 35 print its roll number.
 [roll number here refers to the index of the array.*/
 #include<iostream>
 using namespace std;
 int main()
 {
    int n;
    cout<<"enter number of students : ";
    cin>>n;
    int marks[n];
    cout<<"enter marks of student : ";
    for(int i=0 ;i<n ;i++)
    {
        cin>>marks[i];
    }
    cout<<"roll no(s) that get less then 35 marks is/are : ";
    for(int i=0;i<n;i++)
    {
        if(marks[i]<35)
        {
            cout<<i<<" ";
        }
    }


    return 0;
 }