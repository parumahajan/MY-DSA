#include <bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout << "Enter the age " << endl;
    cin >> age;
    
    if(age<18){
        cout << "Not eligible for job " << endl;
    }
    else if(age<=54){
         cout << "eligible for job " << endl; //we can also make a nested a loop for this, by just assigning <=57, and then making a nested-if condition within it for >55
    }
    else if(age<=57){
         cout << "eligible for job, but retirement soon" << endl;
    }
    else if(age > 57){
        cout << "retirement time";
    }
    return 0;
}