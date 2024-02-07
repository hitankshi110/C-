#include<iostream>
#include<conio.h>
using namespace std;

class highschool{
public:
           int id;
           char name[100];
           long int contact;
           char inst_name[100];
           char address[100];
           void getData();
           void setData();


};
void highschool :: getData(){
    cout<<"High School student: "<<endl;
        cout<<"Enter Student Id: ";
        cin>>id;
         cout<<"Enter Student Name: ";
        cin>>name;
         cout<<"Enter Student Contact: ";
        cin>>contact;
         cout<<"Enter Student Inst. Name: ";
        cin>>inst_name;
         cout<<"Enter Student Address: ";
        cin>>address;
}
void highschool :: setData(){
     cout<<id<<"\t\t";
     cout<<name<<"\t\t";
     cout<<contact<<"\t\t";
     cout<<inst_name<<"\t\t";
     cout<<address<<endl;
}
class college{
public:
           int id;
           char name[100];
           long int contact;
           char inst_name[100];
           char address[100];
           void getData();
           void setData();


};

        void college :: getData(){
            cout<<"College student: "<<endl;
        cout<<"Enter Student Id: ";
        cin>>id;
         cout<<"Enter Student Name: ";
        cin>>name;
         cout<<"Enter Student Contact: ";
        cin>>contact;
         cout<<"Enter Student Inst. Name: ";
        cin>>inst_name;
         cout<<"Enter Student Address: ";
        cin>>address;
        }
        void college :: setData(){
        cout<<id<<"\t\t";
        cout<<name<<"\t\t";
        cout<<contact<<"\t\t";
        cout<<inst_name<<"\t\t";
        cout<<address<<endl;
        }
int main(){
        highschool h1;
        college c1;





        h1.getData();
        h1.setData();
        c1.getData();
        c1.setData();

    return 0;
}
