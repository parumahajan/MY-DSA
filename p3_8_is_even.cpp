//IS NO. EVEN OR ODD

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if(n&1){ // or n%2==0
        cout << "ODD";
    }
    else{
        cout << "EVEN";
    }
    return 0;
}