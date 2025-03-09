//? TO CHECK AT WHICH INDEX IS THE KEY PRESENT 
//* Don't forget to write -1 at the end of your fn (if nothing is found)

#include <bits/stdc++.h> 
using namespace std;

int linSearch(int arr[], int size, int key){

    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return i; // here we return the index
        }
    }
    return -1; // nothing is found
}

int main(){
    int arr[] = {5,9,14,27,53};

    int key;
    cout << "Enter the key: ";
    cin >> key;

    int index = linSearch(arr, 5, key);

    cout << "The key is present at the index: " << index;
    return 0;
}

//*_________________________________________________________________________________________________________

//? TO CHECK WHETHER THE KEY IS PRESENT OR NOT (USING BOOL)

#include <bits/stdc++.h> 
using namespace std;

bool linearSearch(int arr[], int size, int key){ 

    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return 1; //TRUE STATEMENT
        }
    }
    return 0; //FALSE STATEMENT
}

int main(){
    int arr[] = {5,9,14,27,53};
    int key;
    cout << "Enter the key: ";
    cin >> key;

    bool search = linearSearch(arr, 5, key);

    if(search){
        cout << "The key is present ";
    }
    else{
        cout << "The key is not present ";
    }
}