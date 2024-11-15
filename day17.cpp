//im_vyadaw//
#include <iostream>
using namespace std;
int checkTemperature(int temperature){
    return temperature;
}
int main() {
    int newtemp;
    cout<<"Enter a new temperature: ";
    cin>>newtemp;
    int temp=checkTemperature(newtemp);
    cout<<"The temperature is: "<<temp<<endl;
    return 0;
}