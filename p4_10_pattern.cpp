/*
    4 
    3 4 
    2 3 4 
    1 2 3 4    
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
            cout << n-i+j+1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}




/*
    D
    C D
    B C D
    A B C D
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
            cout << char('A' + n-i+j) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}