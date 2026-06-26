#include <iostream>
using namespace std;

int main() {
    double power, total = 0;

    for (int i = 1; i <= 20; i++) {
        cout << "Enter appliance power (W): ";
        cin >> power;
        total += power;

        if (total > 5000) {
            cout << "Maximum load exceeded. Stop adding appliances." << endl;
            break;
        }
    }

    cout << "Final total load = " << total << " W";
    return 0;
}

