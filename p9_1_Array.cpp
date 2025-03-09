#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4};  
    //cout << arr[0]; //1 --> address of first block + (index * number of bytes of datatype)
    //cout << arr[2]; //2 --> 100 + 1 * 4 = 104
    //cout << arr[7]; //any random garbage value 

    int all_zero[5] = {0}; //all boxes will be stored with 0's
    for(int i=0; i<5; i++){
        cout <<all_zero[i];
    }
    return 0;
}

//* ------------------------------------------------------------
// We can also make fns to make our multiple arrays print faster 

#include <bits/stdc++.h>
using namespace std;

int PrintArray(int arr[], int size){
    
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

int main(){
    int a[3] = {1,2,3};

    PrintArray(a,3);
    
    return 0;
}