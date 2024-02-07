#include<iostream>
#include<conio.h>
using namespace std;

class student{
public:
    int x=20,y;

    student(){
        cout<<"Default constructor called "<<endl;

    }
    student(int a, int b){//parametrized
        cout<<"X is "<<x<<endl;
        cout<<"Y is "<<y<<endl;
    }
    student(student& s1){//copy
        y=x+s1.x;
        cout<<"X is "<<x<<endl;
        cout<<"Y is "<<y<<endl;
    }
    void disp(int x, int y){
        cout<<"x is "<<x<<endl;
        cout<<"Y  is "<<y<<endl;
    }
    ~student(){
        cout<<"Object Deleted "<<endl;
    }

};
int main(){
    student s1;

    student s2(20,30);
    student s4=s2;
    s1.disp(22,33);
    student s3(s1);

    return 0;
}
