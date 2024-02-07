#include<iostream>
#include<conio.h>
using namespace std;
class product{
        int pno;
        char name[100];
        float price, qty, tax, dis;
        public:
            void getproduct(){
                cout << "\nPlease Enter The Product No. of The Product ";
                cin >> pno;
                cout << "\n\nPlease Enter The Name of The Product ";
                cin>>name;
                cout << "\nPlease Enter The Price of The Product ";
                cin >> price;
                cout << "\nPlease Enter The Discount (%) ";
                cin >> dis;
            }
             void setproduct(){
            cout << "\nThe Product No. of The Product : " ;
            cin>>pno;
            cout << "\nThe Name of The Product : ";
            cin>>name;
            cout << "\nThe Price of The Product : ";
            cin>>price;
            cout << "\nDiscount : ";
            cin>>dis;
        }
};
int main(){

    return 0;
}
