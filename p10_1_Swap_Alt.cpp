#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;

    for(int i=0; i<size; i = i+2){
        swap(arr[i], arr[i+1]);
    }

    cout << "The alternate swapped array is: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}