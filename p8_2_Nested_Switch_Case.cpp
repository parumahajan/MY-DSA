//NESTED SWITCH CASE

//We can use multiple switch statements within a switch statement (just like if else)

#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch = '1';
    int  num = 2;

    switch(ch) {

        case '1': 

        switch(num){
            case 1:
            cout << "Value of num is: " << num << endl;
            break;
            }

            cout << "Monday";
            break;

        case '2':

        switch(num){
            case 2:
            cout << "Value of num is: " << num << endl;
            break;
            }

            cout << "Tuesday";
            break;

        default:
            cout << "Invalid input";
    }
    return 0;
}

// We can also combine these into one single expression 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int  num = 2;

    switch(1 * num) {     // <--------- CLUBBED EXPRESSION //(This means 1*2 = 2)
        
        case 1: 
        switch(num){
            case 1:
            cout << "Value of num is 1 " << endl;
            break;
            
            case 2:
            cout << "Value of num is 2 " << endl;
            break;
        }
            cout << "Monday";
            break;

        case 2:
        switch(num){
            case 1:
            cout << "Value of num is 3: " << num << endl;
            break;

            case 2:
            cout << "Value of num is 4: " << num << endl;
            break;
            }

            cout << "Tuesday";
            break;

        default:
            cout << "Invalid input";
    }
    return 0;
}