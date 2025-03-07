#include <bits/stdc++.h>
#include <cmath>
using namespace std;

string toBinary(int n) {
    string binary = "";

    if (n >= 0) {
        // Handle positive integers
        while (n > 0) {
            binary = to_string(n & 1) + binary;
            n = n >> 1;
        }
    } else {
        // Handle negative integers using two's complement
        n = ~(-n) + 1; // Convert to two's complement
        for (int i = 0; i < 32; i++) { // Assuming 32-bit integers
            binary = to_string(n & 1) + binary;
            n = n >> 1;
        }
    }

    return binary.empty() ? "0" : binary; // Return "0" for input 0
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << endl;

    string binary = toBinary(n);
    cout << "Its binary form is " << binary;
    return 0;
}
