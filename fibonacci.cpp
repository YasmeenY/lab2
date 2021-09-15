//Prints all fibonacci numbers from F(0) to F(59)

#include <iostream>
using namespace std;

int main() {
    int fib[60]; //Array Declaration unsigned integer type
    int i;
    fib[0] = 0; // first fib number
    fib[1] = 1;
    for (i = 2; i < 60; i++) { //loop for setting array
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (i = 0; i < 60; i++) { //prints numebr of array
        cout << fib[i] << endl;
    }
    return 0;
}
