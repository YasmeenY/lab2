//Asks for 2 numbers then will print all the numbers given that are between the 2 numbers given.

#include <iostream>
using namespace std;

int main() {
    int L, U; 
    cout << "Please enter L: ";
    cin >> L; // input L
    cout << "Please enter U: ";
    cin >> U; //input U
    for(int i = L; i < U; ++i) { //for printing the numbers in between 
        cout << i << " ";
    }
    cout << endl; //ending line
}
