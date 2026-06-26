#include <iostream>
using namespace std;

int main() {
    double power, time, total = 0;

    for (int i = 1; i <= 8; i++) {
        cout << "Enter power (W) and time (h) for appliance " << i << ": ";
        cin >> power >> time;
        total += power * time;
    }

    cout << "Total energy consumed = " << total << " Wh";
    return 0;
}

