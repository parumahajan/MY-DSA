//FACTORIAL --> nCr = n!/(r! * (n-r)!)

#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r){
    int num = fact(n);
    int denom = fact(r) * fact(n-r);
    int answer = num/denom;
    return answer;
}
int main(){
    int n,r;
    cout << "Enter the values of n and r: " << endl;
    cin >> n >> r;

    int factorial = fact(n);
    cout << "The factorial of " << n << " is " << factorial << endl;

    int ncr = nCr(n,r);
    cout << "The combination of " << n << " and " << r << " is " << ncr;
    return 0;
}