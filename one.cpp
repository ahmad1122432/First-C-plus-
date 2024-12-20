#include<iostream>
using namespace std;

int main()
{
    // this is Grading marks program
    int marks;
    cout<<"Enter your marks"<<endl;
    cin>>marks;
    
    if((marks>=80) && (marks<=100))
    cout<<"Your Grade is A+"<<endl;
    
    else if((marks<80) && (marks>=60))
    cout<<"your Grade is B+"<<endl;

    else if((marks<60) && (marks>=40))
    cout<<"your Grade is C"<<endl;

    else if((marks<40) && (marks>=20))
    cout<<"your Grade is E"<<endl;

    else if((marks<20) && (marks>=0))
    cout<<"your grade is F"<<endl;

    else 
    cout<<"you enter ivaild marks"<<endl;
    return 0;
}
