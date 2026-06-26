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

        cout << "Power = " << voltage * current << " W" << endl;

        cout << "Do you want to perform another calculation? (Y/N): ";
        cin >> cont;
    } while (cont == 'Y' || cont == 'y');

    return 0;
}

