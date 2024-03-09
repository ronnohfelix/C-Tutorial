#include <iostream>
using namespace std;

//functions

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

void test () {
    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }
}

int main() {
    int result = add(5, 3);
    cout << "5 + 3 = " << result << endl;
    result = subtract(5, 3);
    cout << "5 - 3 = " << result << endl;
    test();
    return 0;
}
