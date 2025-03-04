//? A PRIME NO. IS A NO. WHICH ONLY HAS TWO DIVISORS (1 AND ITSELF)
//* To check whether a number is Prime or not
#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n; //prime no
    cout << "Enter the number: ";
    cin >> n;
    
    int i=2;

    if (n <= 1){
        cout << n << " is not a prime number" << endl;
        return 0;
    }

    while(i<n){ 
        if(n % i == 0){
            cout << n << " is not a prime number" << endl; 
            return 0;
        }
        i++;
    }
    cout << n << " is a prime number " << endl;
    return 0;
}

//______________________________________________________________

// METHOD 1: BRUTE FORCE
#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n; 
    cout << "Enter the number: ";
    cin >> n;
    
    int i=2;

    if (n < 2){  //to check for edge cases 
        cout << n << " is not a prime number" << endl;
        return 0;
    }

    while(i<n){ 
        if(n % i == 0){
            cout << n << " is not a prime number" << endl; 
            return 0; //due to this, if its true, then only it will be printed, and nothing else 
        }
        i++;
    }
    cout << n << " is a prime number " << endl;
    return 0;
}

// __________________________________________________

//METHOD 2: i*i
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (n < 2) {  // Handle edge cases
        cout << n << " is not a prime number" << endl;
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {  // Loop up to sqrt(n)
        if (n % i == 0) {
            cout << n << " is not a prime number" << endl;
            return 0;
        }
    }

    cout << n << " is a prime number" << endl;
    return 0;
}

// __________________________________________________

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (n < 2) {  // Handle edge cases
        cout << n << " is not a prime number" << endl;
        return 0;
    }

    for (int i = 2; i <= sqrt(n); i++) {  // Loop up to sqrt(n)
        if (n % i == 0) {
            cout << n << " is not a prime number" << endl;
            return 0;
        }
    }

    cout << n << " is a prime number" << endl;
    return 0;
}


//     for(int i=2; i<n; i++){ //Ideally, While loop should be used, since isme final value unknown hai
//         if(n % i == 0){
//             cout << n << " is not a prime number" << endl;
//             return 0; //V IMP -> If we don't add this, then it would not return this, if it comes true. Also, once it comes true, then only this print statement will be returned, and not the next one
//         } //we can also use break statement here, which is much more suitable, since agar pehle number se hi nhi hua, toh baak
//     }
//     cout << n << "is a prime number" << endl;
//     return 0;
// }