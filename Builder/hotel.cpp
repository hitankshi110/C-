#include<iostream>
#include<conio.h>
using namespace std;

class hotel{
public:

    int hotel_id;
    char hotel_name[100];
    char hotel_type[100];
    char hotel_rating[100];
    char hotel_location[100];
    int hotel_est_year;
    int hotel_staff_qty;
    int hotel_room_qty;
    void getData();
    void putData();


};
 void hotel :: getData(){
        cout<<"Enter Hotel Id: ";
        cin>>this->hotel_id;
        cout<<"Enter Hotel Name: ";
        cin>>this->hotel_name;
        cout<<"Enter Hotel Type: ";
        cin>>this->hotel_type;
        cout<<"Enter Hotel Rating: ";
        cin>>this->hotel_rating;
        cout<<"Hotel Location: ";
        cin>>this->hotel_location;
        cout<<"Hotel Est. year: ";
        cin>>this->hotel_est_year;
        cout<<"Hotel Staff Qty.: ";
        cin>>this->hotel_staff_qty;
        cout<<"Hotel Room Qty.: ";
        cin>>this->hotel_room_qty;
 }
 void hotel :: putData(){
     cout<<hotel_id<<"\t\t";
     cout<<hotel_name<<"\t\t";
     cout<<hotel_type<<"\t\t";
     cout<<hotel_rating<<"\t\t";
     cout<<hotel_location<<"\t\t";
     cout<<hotel_est_year<<"\t\t";
     cout<<hotel_staff_qty<<"\t\t";
     cout<<hotel_room_qty<<"\t\t"<<endl;
}
int main(){
   hotel h1[50];

     int n,i;

    cout<<"Enter no. of Hotels ";
    cin>>n;

     for(i=0;i<n;i++){
        h1[i].getData();
     }
      cout<<"Hotel Id \tHotel Name\tHotel Type\tHotel Rating\tHotel Location\tEst. year\tStaff Qty.\t\tHotel Room Qty."<<endl;

       for(i=0;i<n;i++){
        h1[i].putData();
       }
    return 0;



}
