#include <iostream>
using namespace std;

int main() {
    double voltage, current;
    char cont;

    do {
        cout << "Enter voltage (V): ";
        cin >> voltage;
        cout << "Enter current (A): ";
        cin >> current;

        cout << "Resistance = " << voltage / current << " ohms" << endl;

        cout << "Do you want to continue? (Y/N): ";
        cin >> cont;
    } while (cont == 'Y' || cont == 'y');

    return 0;
}

