/*
    1 2 3 
    2 3 4
    3 4 5
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the length of the pattern: ";
    cin >> n;

    int i=0;
    while(i<n){
        int j=0;
        while(j<n){
            cout << i+j+1 << " ";
            j++;
        }
        cout << endl;
        i++;
    } 
    
    return 0;
}









/*
    A B C
    B C D
    C D E 
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the length of the pattern: ";
    cin >> n;

    int i=0;
    while(i<n){
        int j=0;
        while(j<n){
            cout << char(i+j+'A') << " ";
            j++;
        }
        cout << endl;
        i++;
    } 
    
    return 0;
}