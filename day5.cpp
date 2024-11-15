//im_vyadaw//
#include <iostream>
using namespace std;
int main() {
    int score;
    cout<<"enter your score: ";
    cin>>score;
    if(score==100){
        cout<<"your score is : "<<score<<" Super"<<endl;
    }
    else if(score>=90){
        cout<<"your score is: "<<score<<" Excllent"<<endl;

    }
    else if(score>=80){
        cout<<"your score is: "<<score<<" very good"<<endl;
    }
    else if(score>=70){
        cout<<"your score is: "<<score<<" Good"<<endl;
    }
    else if(score>=60){
        cout<<"your score is: "<<score<<"ok"<<endl;
    }else{
        cout<<"padho yaar"<<endl;
    }
    return 0;
}