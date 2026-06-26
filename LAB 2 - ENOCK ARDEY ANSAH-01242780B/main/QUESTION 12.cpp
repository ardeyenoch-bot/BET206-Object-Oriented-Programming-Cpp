
#include <iostream>
using namespace std;

int main() {
    double voltage;
    cout << "Enter solar panel voltage: ";
    cin >> voltage;
    
    

    while (voltage >= 18.0) {
        cout << "Voltage is acceptable." <<endl;
        cout << "Enter solar panel voltage: ";
        cin >> voltage;
    }

    cout << "Solar panel voltage below operating level." <<endl;

    return 0;
}
