/* QUESTION: 
Calculate how many 100, 50, 20, & 1 rupee notes are required to sum up the input number 

Expected Input = 1330

Expected Output:
The number of 100 rupee notes required are: 13
The number of 50 rupee notes required are: 0
The number of 20 rupee notes required are: 1
The number of 1 rupee notes required are: 10
*/

#include <bits/stdc++.h>
using namespace std;

int main(){ 
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;
    cout << endl;

    int rem_amount = 0;

    //FOR 100 RUPEE NOTES 
    rem_amount = amount/100; //1330/100 = 13
    cout << "The number of 100 rupee notes required are: " << rem_amount << endl; //13

    if(rem_amount == 0){
        amount = amount;
    }
    else{
        amount = amount - (rem_amount * 100); //amount = 1330 - 1300 = 30
    }
    
    //FOR 50 RUPEE NOTES
    rem_amount = amount/50; //30/50 = 0
    cout << "The number of 50 rupee notes required are: " << rem_amount << endl; //0
    if(rem_amount == 0){
        amount = amount; // amount = 30
    }
    else{
        amount = amount - (rem_amount * 50);
    }

    //FOR 20 RUPEE NOTES
    rem_amount = amount/20; //30/20 = 1
    cout << "The number of 20 rupee notes required are: " << rem_amount << endl; //1
    if(rem_amount == 0){ 
        amount = amount;
    }
    else{
        amount = amount - (rem_amount * 20); //amount = 30 - 20 = 10
    }

    //FOR 1 RUPEE NOTES
    rem_amount = amount/1; //10/1 = 10
    cout << "The number of 1 rupee notes required are: " << rem_amount << endl; //10
    if(rem_amount == 0){
        amount = amount;
    }
    else{
        amount = amount - (rem_amount * 1); // amount = 10 - 10 = 0
    }
    return 0;
}