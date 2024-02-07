#include<iostream>
#include<conio.h>
using namespace std;

class railway{
public:
    int train_no;
    char name[100];
    char srce[100];
    char dest[100];
    char time[100];
    void getData();
    void putData();

};
    void railway::getData(){
    cout<<"Enter Train No. : ";
    cin>>train_no;
    cout<<"Enter Train Name : ";
    cin>>name;
    cout<<"Enter Train Source : ";
    cin>>srce;
    cout<<"Enter Train Destination : ";
    cin>>dest;
    cout<<"Enter Train Time : ";
    cin>>time;

}
    void railway::putData(){
    cout<<train_no<<"\t";
    cout<<name<<"\t";
    cout<<srce<<"\t";
    cout<<dest<<"\t";
    cout<<time<<"\t"<<endl;

}
int main(){
    railway r1[50];
    int n,i,search_train;
    cout<<"Enter Train: ";
    cin>>n;

    for(i=0;i<n;i++){
        r1[i].getData();
    }
    cout<<"Train Information: "<<endl;
    cout<<"train_no\tname\tsrce\tdest\ttime"<<endl;

    for(i=0; i<n; i++){
        if(r1[i].train_no==search_train){
            r1[i].putData();
        }
    }
    cout<<"Your Train Ticket"<<endl;

    while (1){
        cout<<"Search Train By Number: "<<endl;
        cin>>search_train;
        if(search_train==0){
            break;
        }
        cout<<"Search Train: "<<endl;
        cout<<"train_no\tname\tsrce\tdest\ttime"<<endl;

        for(i=0; i<n; i++){
            if(r1[i].train_no==search_train){
                r1[i].putData();
            }
        }
        cout<<"This is Your Train Ticket "<<endl;
    }

    return 0;

}

