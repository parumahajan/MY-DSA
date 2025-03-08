// POWER QNS
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int a = 2;
//     int b = 3;
//     int ans = 1;
    
//     for(int i = 0; i < 3; i++){
//         ans = ans * a;
//     }
//     cout << ans;
//     return 0;
// }

//LOGIC
/* //a=2, b=3, ans=1
    for(int i = 0; i < 3; i++){ i=0
        ans = ans * a; //1*2 = 2
    }
        for(int i = 0; i <= 3; i++){ i=1
        ans = ans * a; 2*2=4
    }
        for(int i = 0; i <= 3; i++){ i=2
        ans = ans * a; 4*2=8
    }
    ANSWER : 8
*/

//NOW SUPPOSE I WANT TO DO THE SAME THING, BUT MULTIPLE TIMES, THEN I WOULD USE FUNCTIONS

#include <bits/stdc++.h>
using namespace std;

void power(int a, int b){
    cout << "The power of " << a << " and " << b << " equals to " <<  pow(a,b);
}

int main(){
    int a, b;
    cout << "The value of a and b is: ";
    cin >> a >> b;
    cout << endl;

    for(int i = 0; i<3; i++){
        power(a,b);
        cout << endl;
    }
    return 0;
}

// _____________________________________________________________________________________ 

//THERE'S ALSO ANOTHER WAY OF DEFINING A FN
// Rather than defining parameters within the fn, we can define the variables directly within the fn, 
//and hence we can avoid writing the variables again within the int main

#include <bits/stdc++.h>
using namespace std;

void power(){ // we can also leave the function parameters empty
    int a,b; // we can input values within the function
    cout << "Enter the values of a and b: ";
    cin >> a >> b;
    cout << "The power of " << a << " and " << b << " equals to " <<  pow(a,b);
}

int main(){
    power(); //and we can call it as it is
    return 0;
}