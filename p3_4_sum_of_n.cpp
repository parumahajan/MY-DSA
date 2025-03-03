//Sum of n no's

//FORMULA TO FIND THE SUM OF N NO'S
// sum = n(n+i)/2

//Using While Loop
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << endl;
    int i=1;
    int sum=0;
    while(i<=n){
        sum = sum + i;
        i++;
    }
    cout << "The sum of n no.s is: " << sum << endl;
    return 0;
}

//FOR LOOP
#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << endl;

    int sum = 0;

    for(int i=1; i<=n; i++){
        sum = sum + i;
    }

    cout << "The sum of n no.'s is: " << sum << endl;
    return 0;
}