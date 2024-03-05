#include <iostream>
#include <set>
using namespace std;

//sets

int main() {
    set<char> s;
    s = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    s.insert('k');
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    s.erase('k');
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    cout << s.size() << endl;
    cout << s.empty() << endl;
    s.clear();
    cout << s.size() << endl;
    cout << s.empty() << endl;
    return 0;
}

