/* 
    1 1 1
    2 2 2
    3 3 3
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the length of the pattern: ";
    cin >> n;

    int i=0;    
    while (i<n){
    int j=0; 
    while (j<n){
        cout << 1 + i << " ";
        j++;
    }
    cout << endl;
    i++;
   }
    return 0;
}










/*
    A A A
    B B B
    C C C
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the length of the pattern: ";
    cin >> n;

    int i=0;    
    while (i<n){
    int j=0; 
    while (j<n){
        cout << char('A' + i) << " ";
        j++;
    }
    cout << endl;
    i++;
   }
    return 0;
}