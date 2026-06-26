#include <iostream>
using namespace std;

int main() {
    double reading, total = 0;

    for (int i = 1; i <= 10; i++) {
        cout << "Enter power reading (W): ";
        cin >> reading;

        if (reading < 0) {
            cout << "Invalid reading skipped." << endl;
            continue;
        }

        total += reading;
    }

    cout << "Total of valid power readings = " << total << " W";
    return 0;
}

