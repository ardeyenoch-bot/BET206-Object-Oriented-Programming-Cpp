#include <iostream>
using namespace std;

int main() {
    int result, pass = 0, fail = 0;

    for (int i = 1; i <= 15; i++) {
        cout << "Enter result (1=pass, 0=fail) for component " << i << ": ";
        cin >> result;
        if (result == 1) {
            pass++;
        } else {
            fail++;
        }
    }

    cout << "Passed: " << pass << ", Failed: " << fail;
    return 0;
}


