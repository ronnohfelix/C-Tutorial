#include <iostream>
#include <string>
using namespace std;
// if else statements with comparison operators and logical operators
int main() {
    //students grading system
    int marks;
    char grade;
    cout << "Enter Your Marks"<<endl;
    cin >> marks;
    if (marks>= 80) {
        grade = 'A';
        cout << "Your Grade is "<<grade;
    }
    else if (marks>=70 && marks<80) {
        grade = 'B';
        cout << "Your Grade is "<<grade;
    }
    else if (marks>=50 && marks<70) {
        grade = 'C';
        cout << "Your Grade is "<<grade;
    }
    else if (marks>=30 && marks<50) {
        grade = 'D';
        cout << "Your Grade is "<<grade;
    }
    else{
        grade = 'E';
        cout << "Your Grade is "<<grade;
    }
}