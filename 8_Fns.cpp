/* FUNCTIONS
?yeh cheez function ke ander honi chaiye ek saath
void ke saath cout (VC)
int ke saath return (IR)
*/

#include <iostream>
using namespace std;

void inc(int num){ //function
    for(int i=0; i<3; i++){ //repeat
        cout << num << endl;
        num = num + 5;
    }
}

int main(){
    int num = 5;
    inc(num);
}