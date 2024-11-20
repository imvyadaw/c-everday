//im_vyadaw//
//pass by value//
#include <iostream>
using namespace std;
void serveChai(int cups){
    cups= cups+1;
    cout<<"Serving "<<cups<<" cups chai"<<endl;
}
int main() {
    int Chai_cups=2;
    serveChai(Chai_cups);
    cout<<"Serving total "<<Chai_cups<<" cups chai"<<endl;
    return 0;
}


