//im_vyadaw//
#include <iostream>
using namespace std;
int globleChaiCups=100;
void serve(){
    int tea;
    cout<<"Enter you want to serve cups chai: ";
    cin>>tea;
    int localCups=tea;
    globleChaiCups-=localCups;
    cout<<globleChaiCups<<" cups in serving "<<localCups<<" cups chai"<<endl;
 }
int main() {
    serve();
    cout<<"Globle chai stock after serving... "<<globleChaiCups<<endl;
    return 0;
}