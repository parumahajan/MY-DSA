//F TO C
// C = 5/9 * (F-32)
#include <bits/stdc++.h>
using namespace std;
int main(){
    double c, f; //its better to intialise their datatype as double/float, becoz temp comes in point
    cout << "Enter the value of temperature in fahrenheit: ";
    cin >> f;
    cout << endl;
    c = (double)5/9 * (f-32); //Don't miss to add double here, o/w it will return 0
    cout << "The value of temperature in celsius is: " << c;
    return 0;
}
