#include <iostream>
#include <vector>
using namespace std;
// vectors
int main() {
    vector<int> numbers(0);
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);
    numbers.push_back(6);
    numbers.push_back(7);
    numbers.push_back(8);
    numbers.push_back(9);
    numbers.push_back(10);
    cout << numbers[0] << endl;
    cout << numbers[2] << endl;
    cout << numbers[4] << endl;
    cout << numbers[6] << endl;
    cout << numbers[8] << endl;
    cout << numbers.size() << endl;
    numbers.pop_back();
    cout << numbers.size() << endl;
    return 0;
}