//im_vyadaw//
#include <iostream>
using namespace std;
void brewchai(int cups){
    cout<<"Brewing "<<cups<<" cups of chai"<<endl;
}

int main() {
    int tea;
    cout<<"Enter number of cups of chai (1-100): ";
    cin>>tea;
    brewchai(tea);
    return 0;
}