//Sum of even numbers upto n

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n; //n=10
    cout << endl;

    int sum = 0;
    int i = 2;

    while(i<=n){
        sum = sum + i;
        i = i+2;
    }

    cout << "The sum of even numbers upto n is: " << sum << endl;
    return 0;
}
// ----------------------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << endl;

    int i = 0;
    int sum = 0;

    while(i % 2 == 0 && i <= n){
        sum = sum + i;
        i = i+2;
    }
    cout << "The sum of even no's upto n is: " << sum;
    return 0;
}

// TO KNOW WHETHER A NUMBER IS ODD, WE USE (n&1) 
//if it returns 1, then its ODD, else EVEN