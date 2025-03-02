/* **NOTES**
If input inside the if bracket of case statement isn't mentioned clearly, 
then it just checks the order in which the case statement comes, 
and returns the answer in that orderly way

INT or CHAR value can only be inserted (we can't insert a string or float value in it)

We can use multiple switch statements within a switch statement



**SYNTAX**

switch(var){ // CURLY BRACKETS AFTER WRITING SWITCH
    case 1:  // CASE IS WRITTEN IN SMALL LETTERS "case" , AND SPACE IS LEFT BETWEEN CASE AND NUMBER
    statement;
    break;

    case 2: 
    statement;
    break;

    default:
    statement;
}
*/



// **CODE** 
#include <bits/stdc++.h>
using namespace std;
int main(){

    int day;
    cout << "Enter the day number: ";
    cin >> day;

    cout << endl;

    switch(day){
        case 1: 
        cout << "Monday" << endl;
        break;

        case 2: 
        cout << "Tuesday" << endl;
        break;

        case 3: 
        cout << "Wednesday" << endl;
        break;

        case 4: 
        cout << "Thursday" << endl;
        break;

        case 5: 
        cout << "Friday" << endl;
        break;

        case 6: 
        cout << "Saturday" << endl;
        break;

        case 7: 
        cout << "Sunday" << endl;
        break;

        default:
        cout << "Today is no fucking day, you dumb";
    }
}

// More qns practiced in P8