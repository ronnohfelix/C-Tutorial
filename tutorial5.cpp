#include <iostream>
using namespace std;
// arithmetic operators
int main () {
    float x, y;
    cout << "Type a number: ";
    cin >> x;
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Type another number: ";
    cin >> y;
    float div = x / y;
    if (y == 0) {
        cout << "You can't divide by zero!" << endl;
        cout << "Type another number: ";
        cin >> y;
        div = x / y;
        cout << "Division is: " << div << endl;
        cout << "The Remainder is: " << (int)x % (int)y;
    } else {
        cout << "Division is: " << div << endl;
        cout << "The Remainder is: " << (int)x % (int)y;
    }
    return 0;
}