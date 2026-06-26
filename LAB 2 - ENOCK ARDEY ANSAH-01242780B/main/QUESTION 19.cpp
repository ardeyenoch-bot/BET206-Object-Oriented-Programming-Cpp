#include <iostream>
using namespace std;

int main() {
    double reading, sum = 0;
    int validCount = 0;

    for (int i = 1; i <= 12; i++) {
        cout << "Enter sensor reading: ";
        cin >> reading;

        if (reading == 999) {
            cout << "Faulty sensor value skipped." << endl;
            continue;
        }

        sum += reading;
        validCount++;
    }

    if (validCount > 0) {
        cout << "Average of valid readings = " << sum / validCount;
    } else {
        cout << "No valid readings entered.";
    }

    return 0;
}

