#include <iostream>
using namespace std;

// switch statement

int main() {
    int age = 2;
    switch (age) {
        case 16:
            cout << "You can drive now!" << endl;
            break;
        case 18:
            cout << "You can vote now!" << endl;
            break;
        case 21:
            cout << "You can drink now!" << endl;
            break;
        default:
            cout << "Sorry, you get nothing." << endl;
    }

    return 0;
}