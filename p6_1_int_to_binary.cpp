// TO PRINT A NUMBER'S BINARY FORM
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n; //10
    cout << endl;

    int bit = 0;
    int ans = 0;
    int i = 0;

    while (n!=0){
            bit = n & 1; //1010 & 1 = 0
            ans = (bit * pow(10, i)) + ans; // (0 * (10)^0) + 0) = 0
            i++; //i=1
            n = n >> 1; //0101
    }
    cout << "Its binary form is " << ans;
    return 0;
}

// ------------------------------------------------------------------------
//LOGIC
    // while (n!=0){
    //         bit = n & 1; //1010 & 1 = 0
    //         ans = (bit * pow(10, i)) + ans; // (0 * (10)^0) + 0) = 0
    //         i++; //i=1
    //         n = n >> 1; //0101
    // }
    //     while (n!=0){
    //         bit = n&1; //0101 & 1 = 1
    //         ans = (bit * pow(10, i)) + ans; // (1 * (10)^1) + 0) = 11
    //         i++; //i=2
    //         n = n >> 1; //0010
    // }

    //     while (n!=0){
    //         bit = n&1; //0010 & 1 = 0
    //         ans = (bit * pow(10, i)) + ans; // (0 * (10)^2) + 11) = 11
    //         i++; //i=3
    //         n = n >> 1; //0001
    // }

    //     while (n!=0){
    //         bit = n&1; //0001 & 1 = 1
    //         ans = (bit * pow(10, i)) + ans; // (1 * (10)^3) + 11) = 1011
    //         i++; //i=4
    //         n = n >> 1; //0000
    // }