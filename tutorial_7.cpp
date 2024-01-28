#include <iostream>
#include <string>
using namespace std;
// logic operators, and , or, not
int main() {
    bool x = 5 > 3 && 5 > 2;
    cout << x << endl;
    bool y = 5 > 3 || 5 < 2;
    cout << y << endl;
    bool z = !(5 > 3);
    cout << z;
}