#include<iostream>
#include<conio.h>
using namespace std;

class A{
protected:
    int a,b;
    void add(){
        cout<<"Enter a & b : ";
        cin>>a>>b;
    }
    void printData(){
        cout<<"Addition is "<<a+b<<endl;
    }
};
class B:protected A{
public:
    void setData(){
        add();
        printData();
    }
};
class C:private A{
public:
    void multiple(){
        cout<<"Enter a & b : ";
        cin>>a>>b;
        cout<<"Multiplication is : "<<a*b;
    }
};
int main(){
    B obj;
    C objC;

    obj.setData();
    objC.multiple();
    return 0;

}
