
#include <iostream>
using namespace std;

int main() { // DECLARING variables
    int a[10], i, v;
    // appending 1 to each element in a
    for(i=0; i<10; i++) {
        a[i] = 1;
    }
    
    // looping
    do{
        // printing array
        for(i=0; i<10; i++) {
            cout << a[i] << " ";
        }
        cout << endl << endl;
        // taking user input
        cout << "Input index: ";
        cin >> i;
        cout << "Input value: ";
        cin >> v;
        // if i is valid, appending value to the index
        if(i>=0 && i<=9) {
            a[i] = v;
        }
        // printing a line
        cout << endl;
        // looping if i is valid
    }
    while(i>=0 && i<=9);
}
