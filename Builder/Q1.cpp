#include<iostream>
#include<conio.h>
using namespace std;

class Employee
{
public:
        int id;
        char name[100];
        char role[100];
        int salary;
        char exp[100];
        char address[100];
        char email[100];
        long int contact;
        void getdata();
        void putdata();
};
void Employee::getdata()
{
  cout << "Enter Id : ";
  cin >> id;
  cout << "Enter Name : ";
  cin >> name;
  cout << "Enter Role : ";
  cin >> role;
  cout << "Enter Salary : ";
  cin >> salary;
  cout << "Enter Experience : ";
  cin >> exp;
  cout << "Enter Address : ";
  cin >> address;
  cout << "Enter Email : ";
  cin >> email;
  cout << "Enter Contact : ";
  cin >> contact;
}

void Employee::putdata()
{
  cout << id <<"\t";
  cout << name <<"\t";
  cout << role <<"\t";
  cout << salary <<"\t";
  cout << exp <<"\t";
  cout << address <<"\t";
  cout << email <<"\t";
  cout << contact <<"\t";
  cout << endl;
}


int main()
{

  Employee emp[30];
  int n, i;
  cout << "Enter Number of Employees - ";
  cin >> n;

  for(i = 0; i < n; i++)
    emp[i].getdata();

  cout << "Employee Data - " << endl;


  for(i = 0; i < n; i++)
    emp[i].putdata();

    return 0;
}
