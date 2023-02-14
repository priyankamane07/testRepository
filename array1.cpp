#include<iostream>
using namespace std;

int main()
{   
    //defined input
    int marks[5] = {1, 2, 3, 4, 5};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;

    //change value of elements
    cout<<"change value of elements:"<<endl;
    marks[2]=9;
    cout<<marks[2];

    //input from user
    int num[5];
    cout<<"Enter number:"<<endl;
    cin>>num[0];
    cin>>num[1];
    cin>>num[2];
    cin>>num[3];
    cin>>num[4];
    cout<<"numbers in num array:"<<endl;
    cout<<num[0]<<endl;
    cout<<num[1]<<endl;
    cout<<num[2]<<endl;
    cout<<num[3]<<endl;
    cout<<num[4]<<endl;

    int number[2][2];
    cin>>number[0][0]>>number[0][1]>>number[1][0]>>number[1][1];
    cout<<number[0][0]<<endl<<number[1][0]<<endl<<number[0][1]<<endl<<number[1][1]<<endl;

    return 0;
}