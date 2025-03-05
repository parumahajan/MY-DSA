/*
   1
   2 2
   3 3 3
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the length of the pattern: ";
    cin >> n;

    int i=1;
    while(i<=n){
        int j=0;
        while(j<n && j<i){
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}





/*
   A
   B B
   C C C
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the length of the pattern: ";
    cin >> n;

    int i=1;
    while(i<=n){
        int j=0;
        while(j<n && j<i){
            cout << char('A'+i-1) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

//ANOTHER LOGIC

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     char n;
//     cout << "Enter the length of the pattern: ";
//     cin >> n; //D (kyunki sb meh ek bada hai)

//     char i='B';
//     while(i<=n){
//         char j='A';
//         while(j<n && j<i){
//             cout << char(i-1) << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }