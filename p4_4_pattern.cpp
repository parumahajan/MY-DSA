/*
    1 
    2 3 
    3 4 5 
    4 5 6 7 
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
            cout << i+j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}






/*
    A 
    B C 
    C D E 
    D E F G 
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
            cout << char('A'+i+j-1) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}