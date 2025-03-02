#include <bits/stdc++.h>
using namespace std;
int main(){

    for(int i=1; i<5; i++){

        cout << "Hey" << endl;
        cout << "Hi" << endl;
        // only these lines above continue statement will be iterated and printed 
        continue;
        
        cout << "Reply toh krde" << endl; // this line will be skipped, and won't be printed at all
    }
    return 0;
}
// It is used to skip the iterations
// It will skip the next parts after its written, and will only iterate the statements written before it 
// Anything written below the continue won't be included
// And if it written within an if statement, then t
// It is used to to skip unnecessary computations, which we don't want to include in the output 


//Continue does not work in Switch Case statements
// --------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 5; i++) {

        if (i == 3) {
            continue; // Skip the iteration when i is 3
        }
// If continue is used within an if statement with a condition, then it will not include that statement in the result 

        cout << "i = " << i << endl;
    }
    return 0;
}