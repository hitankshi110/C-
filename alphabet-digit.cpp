#include<iostream>
using namespace std;

int main(){
    char input;
    cout<<"Enter any Character:";
    cin>>input;
//||-both true=1, both false=0, either true=1
//&&-returns true if both are true
    if ((input >=  'A' && input <= 'Z')
        || (input >= 'a' && input <= 'z')){
        cout <<input<< " is an Alphabet";

        }else if(input>='0' && input<='9'){
        cout<<input<<"is a Digit";
        }
    return 0;

}
