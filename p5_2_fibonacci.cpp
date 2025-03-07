// 0,1,1,2,3,5,8,13,21,...
// the next no. adds with the previous no.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int limit;
    cout << "Enter the limit till which the series will print the output: ";
    cin >> limit;
    cout << endl;

    int p, n, nn;
    p = 0;
    n = 1;
    cout << p << " " << n << " ";
    int i=2;
    while(i<limit){
        nn = p+n;
        p = n;
        n = nn;
        cout << nn << " ";
        i++;
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int main(){
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;

    int prev = 0;
    int next = 1;
    int nextnum = 0;
    cout << prev << " " << next <<  " ";

    for(int i=0; i<=limit; i++){

        nextnum = prev + next;
        prev = next;
        next = nextnum;
        
        cout << nextnum << " ";
    }
    return 0;
}




// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout << "Till what no. will the fibonacci series work: ";
//     cin >> n;
//     cout << endl;

//     int prev = 0;
//     int next = 1;
//     int i;

//     for(i=0; i<=n; i++){ //we have taken i as the counter 
//         cout << prev << endl; //prev = 0
//         next = prev+next; //next = 0+1 = 1
//         prev = next; //prev = 1
//     }
   
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n = 1, p = 0, temp,

//     cout << "Enter the number of terms in the Fibonacci series: ";
//     cin >> limit;

//     cout << "Fibonacci Series: " << p << " " << n << " ";  // Printing first two terms

//     for (int i = 2; i < limit; i++) {
//         temp = n;       // Store current 'n' in a temporary variable
//         n = p + n;      // Calculate the next Fibonacci number
//         p = temp;       // Update 'p' to the previous 'n' (stored in temp)
//         cout << n << " ";
//     }

//     return 0;
// }
