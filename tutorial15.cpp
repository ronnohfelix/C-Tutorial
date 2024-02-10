#include <iostream>
using namespace std;

// pointers

int main() {
    string food = "Pizza";
    string* ptr = &food;

    cout << food << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    int x[] = {1, 2, 3};
    int* p = x;

    for (int i = 0; i < 3; i++) {
        cout << *p << endl;
        cout << p << endl;
        p++;
    }

    return 0;
}