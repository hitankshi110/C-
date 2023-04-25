#include<iostream>
using namespace std;


class abc{
public:
    void getData(){
        cout<<"Base Class "<<endl;
    }
};
class xyz:public abc{
public:
    void putData(){
        cout<<"Derived Class "<<endl;
    }
};
class pqr:public xyz{
public:
    void setData(){
        cout<<"pqr - derived class "<<endl;
    }
};
int main(){
    pqr x1;

    x1.getData();
    x1.putData();
    x1.setData();

    return 0;
}
