#include <iostream>
#include <string>
using namespace std;
// input from user and operators
int main() {
    int x, y;
    cout << "Type a number: ";
    cin >> x;
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Type another number: ";
    cin >> y;
    int sum = x + y;
    cout << "Sum is: " << sum;
    return 0;
}