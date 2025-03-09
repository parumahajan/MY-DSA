#include <bits/stdc++.h>
using namespace std;

void fn(int num[]){
    // cout << "Enter the value of the elts in the array of the fn: ";
    // for(int i=0; i < 3; i++){
    //     cin >> num[i];
    // }
    num[1] = 20; 

    cout << "PRINTING INSIDE FN" << endl;
    cout << num[0] << " " << num[1] << " " << num[2] << endl;
}

int main(){
    int arr[3] = {1,2,3};

    arr[1] = 120; //Updating value of 2 to 120 within main

    
    // ? If the fn is called first then it will only update the values which are provided before calling the fn
    // fn(arr); 1 20 3

    arr[2] = 30; //Updating value of 3 to 30 within main

    cout << "PRINTING INSIDE MAIN" << endl;
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl; // 1 120 30

    fn(arr); // 1 20 30
    //? if its called later, then it will include updations of array from main, and then 
    //? it will also include updations of array done within the fn

    return 0;
}