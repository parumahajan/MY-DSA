/*
    1 
    2 1 
    3 2 1 
    4 3 2 1 
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
            cout << i-j << " ";
            j++;
        }
        cout << endl;
        i++;
    }


    return 0;
}