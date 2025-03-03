//Sum of first 5 no's

//WHILE LOOP
#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum = 0;
    int i=1;
    while(i<=5){
        sum = sum + i;
        i++;
    }
    cout << "The sum of first 5 no.'s is: " << sum << endl;
    return 0;
}

//FOR LOOP
#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum = 0;
    for(int i=1; i<=5;i++){
        sum = sum + i;
    }

    cout << "The sum of first 5 no.'s is: " << sum << endl;
    return 0;
}