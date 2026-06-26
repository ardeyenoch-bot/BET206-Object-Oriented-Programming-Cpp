#include <iostream>
using namespace std;

int main() {
    double resistance;

    for (int i = 1; i <= 10; i++) {
        cout << "Enter insulation resistance (MO): ";
        cin >> resistance;

        if (resistance < 1) {
            cout << "Insulation failure detected. Test stopped.";
            break;
        } else {
            cout << "Insulation reading acceptable." << endl;
        }
    }

    return 0;
}

