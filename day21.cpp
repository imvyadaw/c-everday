#include <iostream>
using namespace std;

// Function with default parameter
void serveChai(string teaType = "Masala Chai") {
    cout << "Serving " << teaType << endl;
}

int main() {
    serveChai();
    // serveChai("Green Chai");
    return 0;
}