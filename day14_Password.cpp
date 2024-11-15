//im_vyadaw//
#include <iostream>
using namespace std;
int main() {
    int passs,time=0;
    while(time<5){
        cout<<"enter your password: ";
        cin>>passs;
        if(passs==98765){
            cout<<"login successfully";
            return 0;
        }else{
            time++;
            cout<<"wrong password. try again.\n";
        }
    }
    cout<<"account locked. please try again later.\n";
    return 0;
}