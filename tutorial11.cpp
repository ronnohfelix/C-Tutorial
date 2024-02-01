#include <iostream>
using namespace std;

// more on while, do while loops and break/continue
int main() {
    // while (condition) { ... }
    int i = 0;
    while (i < 10) {
        cout << i << endl;
        i++;
    }

    // do { ... } while (condition);
    int j = 0;
    do {
        cout << j << endl;
        j++;
    } while (j < 10);

    // break and continue
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break;
        }
        cout << i << endl;
    }

    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}