#include<iostream>
#include<conio.h>
using namespace std;

#define PI 3.14

float area(float r){
    return PI*r*r;
}
float area(float l, float h){
    return l*h;
}
float area(float l, float h, float b){
    return l*h*b;
}

int main(){
    cout<<"Area of Circle is "<<area(2.5)<<endl;
    cout<<"Area of Rectangle is "<<area(4,3,5)<<endl;
    cout<<"Area of Triangle is"<<area(15,5)<<endl;

    return 0;
}
