class emp_data{
public:
    int ID;
    char name[100];
    int Salary;
    void getData();
     void putData();

public:

		void getData(){
            cout<<"Enter ID no. ";
            cin>>ID<<endl;
            cout<<"Enter name ";
            cin>>name<<endl;
            cout<<"Enter Salary ";
            cin>>Salary<<endl;

		}
};
void emp_data :: putData(){
     cout<<"Employee Details:"<<endl;


}
int main(){
   employee e1[10];

    int n,i;

    cout<<"Enter no. of Employee";
    cin>>n;

    for(i=0;i<n;i++){
        e1[i].getData();
    }
     cout<<"ID\tName\tSalary"<<endl;

      for(i=0;i<n;i++){
        e1[i].putData();
    }
    return;
}
