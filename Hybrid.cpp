#include<iostream>
#include<conio.h>
using namespace std;
class A{
public:
    virtual void disp(){
        cout<<"Class A called  "<<endl;
    }
};
class B:virtual public A{
public:
    void disp(){
    cout<<"Class B called  "<<endl;
    }
};
class C:virtual public A{
public:
    void disp(){
        cout<<"Class c called  "<<endl;
    }
};
class D:public B,public C{
public:
    void disp(){
        cout<<"Class D called "<<endl;
    }
};
int main(){

    D objD;
    C objC;
    B objB;
    A *objA;
    objD.B::disp();
    objD.C::disp();
    objD.A::disp();
    objD.disp();

    return 0;
}
