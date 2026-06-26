
#include <iostream>
using namespace std;

int main() {
    double resistance;
    
    cout << "Enter earth resistance reading (ohms): ";
    cin >> resistance;
    
    while (resistance <= 5) {
        cout << "Enter earth resistance reading (ohms): ";
        cin >> resistance;
    }
    
    cout << "EARTH RESISTANCE IS TOO HIGH.IMPROVE EARTHING SYSTEM" << endl;
    
    return 0;
}
