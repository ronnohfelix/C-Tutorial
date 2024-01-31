#include <iostream>
#include <string>
using namespace std;
// for loops, while loops, do while loops

int main() {
    // for (initialization; condition; increment) {
    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }

    // using arrays
    int arr[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }

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

    return 0;
}