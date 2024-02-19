#include <iostream>
#include <tuple>
using namespace std;

// tuples

int main() {
    tuple<string, int, int> person = make_tuple("John", 20, 30);
    cout << get<0>(person) << endl;
    cout << get<1>(person) << endl;
    cout << get<2>(person) << endl;
    // change the value of the second element
    get<1>(person) = 30;
    cout << get<1>(person) << endl;
    // swap
    tuple<string, int, int> person2 = make_tuple("Ron", 22, 23);
    person.swap(person2);
    cout << get<0>(person) << endl;
    cout << get<1>(person) << endl;
    cout << get<2>(person) << endl;

    return 0;
}