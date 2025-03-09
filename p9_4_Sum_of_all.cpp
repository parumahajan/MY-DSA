//? SUM OF ALL ELTS OF AN ARRAY 

#include <bits/stdc++.h>
using namespace std;

int sum(int num[], int size){
    int next = 0;

    for(int i=0; i<size; i++){
    next = num[i] + next;
    }

    return next;
}

int main(){
    int arr[4] = {1,2,3,4};

    int size;
    cout << "Enter the size: ";
    cin >> size; //4

    int answer = sum(arr,size);

    cout << "The sum of all elts of an array are: " << answer;
    return 0;
}

//* CORRECT!!! ^ ^