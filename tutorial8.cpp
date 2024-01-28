#include <iostream>
#include <string>
using namespace std;
// if, else & else if statements
int main() {
    int x = 3;
    cout << "Type a number: ";
    cin >> x;
    if (x > 3) {
        cout << "It is greater than 3";
    }
    else if (x < 3) {
        cout << "It is less than 3";
    }
    else {
        cout << "It is equal to 3";
    }
    return 0;
}
