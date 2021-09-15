//Number input must be between 0 and 100 else will ask for a re-enter then squares number with the same number.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Please enter an integer: "; //asks for input
    while(true) { //check number input
        cin >> num;
        if(num > 0 && num < 100) { //must be between 0 and 100
            break;
        }
        cout << "Please re-enter: "; // if not between will ask for re-entering input
    }
    cout << "\nNumber squared is " << num*num << endl; //number squared
}
