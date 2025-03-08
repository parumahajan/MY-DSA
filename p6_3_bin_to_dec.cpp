#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the binary number: ";
    cin >> n;
    cout << endl;
    
    int i = 0;
    int digit = 0;
    int ans;

    while(n!=0){
        int digit = n % 10;
        
        if(digit == 1){
            ans = pow(2,i) + ans;
        }
        n=n/10;
        i++;
    }
    return 0;
}