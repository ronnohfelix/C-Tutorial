#include <iostream>
using namespace std;

// references

int main() {
    string food = "Pizza";
    string &meal = food;

    cout << food << endl;
    cout << meal << endl;

    return 0;
}