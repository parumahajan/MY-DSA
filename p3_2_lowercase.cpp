#include <bits/stdc++.h>
using namespace std;
//  WRITE A PROGRAM TO PRINT IF THE INPUT IS LOWERCASE, UPPERCASE, OR NUMERIC 
int main(){
    char ch;
    cout << "Enter the character: ";
    cin >> ch;

    cout << endl;

    if(ch >= 'a' && ch <= 'z'){
        cout << "THIS IS LOWERCASE " << endl;
    }

    else if (ch >= 'A' && ch <= 'Z'){
        cout << "THIS IS UPPERCASE " << endl;
    }
    
    else if (ch >= '1' && ch <= '9'){
        cout << "THIS IS NUMERIC " << endl;
    }
    return 0;
}