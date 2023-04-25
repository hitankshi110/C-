#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using namespace std;
class emp{
public:
    int emp_id;
    char name[100];
    long int salary;
    int age;
};
int main(){
    emp e1;
    cout<<"Enter name";
    cin>>e1.name;
    cout<<"Enter id";
    fflush(stdin);
    cin>>e1.emp_id;
    cout<<"Enter salary";
    fflush(stdin);
    cin>>e1.salary;
    cout<<"Enter age";
    fflush(stdin);
    cin>>e1.age;

    cout<<"Employee name is "<<e1.name<<endl;
    cout<<"Employee id is "<<e1.emp_id<<endl;
     cout<<"Employee age is "<<e1.age<<endl;
    cout<<"Employee salary is "<<e1.salary;



    getch();
return 0;
}
