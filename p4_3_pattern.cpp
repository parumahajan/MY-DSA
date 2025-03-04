/*
    1 2 3 
    4 5 6 
    7 8 9 
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the length of the pattern: ";
    cin >> n;
    
    int i=1;
    int j=0;
    while(i<=n){
        while(j < n*i){
            cout << 1+j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}