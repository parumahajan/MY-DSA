#include <bits/stdc++.h>
using namespace std;
//DUPLICATE ELTS OF ARRAY
int main(){
    int arr[5] = {1,2,3,4,3};

    int size = sizeof(arr)/sizeof(arr[0]);

    int ans = 0;

    for(int i=0; i<size; i++){
        ans = ans ^ arr[i];
    }

    for(int i=1; i<size; i++){
        ans = ans ^ i;
    }

    cout << ans; 
    
    return 0;
}

/** LOGIC:
We first calculated the XOR of all the elts, then we calculated the XOR of elts from 1 to N-1, 
and XOR'd it with the total XOR that we calculated earlier

Full XOR of array - XOR from 1 to (N-1)  //? (DIFFERENCE)
*/