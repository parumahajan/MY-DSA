#include <bits/stdc++.h>
using namespace std;

int getMin(int arr[], int n){ //n is the size
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i]; //update min value with array's value and iterate
        }
    }
    return min;
}

int main(){
    int size;
    cout << "Enter the size: " <<endl;
    cin >> size;

    int arr[10]; //array is of 10 size 
    //? Don't input the parameter in form of a variable (like size) (VERY BAD PRACTICE)
    
    cout << "Enter the array elements as per the size: " <<endl;

    for(int i=0; i < size; i++){

        cin >> arr[i];
    }

    cout << "The minimum value is: " << getMin(arr,size) << endl;

    return 0;
}

//*-----------------------------------------------------------------------------------
//? ANOTHER WAY OF DOING IT IS BY USING PRE-DEFINED FNS (LIKE min and max)

#include <bits/stdc++.h>
using namespace std;

int getMin(int arr[], int n){ //n is the size
    int mini = INT_MAX;

    for(int i=0; i<n; i++){

        mini = min(mini, arr[i]);
    }
    return mini;
}

int main(){
    int size;
    cout << "Enter the size: " <<endl;
    cin >> size;

    int arr[10]; //array is of 10 size 
    //? Don't input the parameter in form of a variable (like size) (VERY BAD PRACTICE)
    
    cout << "Enter the array elements as per the size: " <<endl;

    for(int i=0; i < size; i++){

        cin >> arr[i];
    }

    cout << "The minimum value is: " << getMin(arr,size) << endl;

    return 0;
}
//* ----------------------------------------------------------------------------------------------