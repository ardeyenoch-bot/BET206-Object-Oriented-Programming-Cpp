#include <iostream>
using namespace std;

int main() {
    double l1, l2, l3;

    for (int i = 1; i <= 6; i++) {
        cout << "Set " << i << " - Enter L1, L2, L3 currents: ";
        cin >> l1 >> l2 >> l3;
        cout << "Average current = " << (l1 + l2 + l3) / 3 << endl;
    }

    return 0;
}

