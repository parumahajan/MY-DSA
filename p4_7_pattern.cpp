/*
    1
    1 2
    1 2 3
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
            cout << j+1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}


/*
    A
    A B
    A B C
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
            cout << char('A'+j) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}