//NORMAL WAY
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int add, subt, mult, div, mod;
//     int a = 3;
//     int b = 4;

//     add = a+b;
//     subt = a-b;
//     mult = a*b;
//     div = a/b;
//     mod = a%b;
    
//     cout << "The addition of 3 and 4 is: " << add << endl;
//     cout << "The subtraction of 3 and 4 is: " << subt << endl;
//     cout << "The multiplication of 3 and 4 is: " << mult << endl;
//     cout << "The division of 3 and 4 is: " << div << endl;
//     cout << "The modulus of 3 and 4 is: " << mod << endl;

//     return 0;
// }

//__________________________________________________________________________

// USING SWITCH CASE 
#include <bits/stdc++.h>
using namespace std;
int main(){

    int a;
    cout << "enter the value of a: ";
    cin >> a;
    cout << endl;

    int b;
    cout << "enter the value of b: ";
    cin >> b;
    cout << endl;

    char op;
    cout << "enter the value of op: ";
    cin >> op;
    cout << endl;

    switch(op){
        case '+':
            cout << a + b;
            break;

        case '-':
            cout << a - b;
            break;

        case '*':
            cout << a * b;
            break;
        
        case '/':
            cout << a / b;
            break;
        
        case '%':
            cout << a % b;
            break;
        
        default:
        cout << "ERROR!!!";
    }
    return 0;
}