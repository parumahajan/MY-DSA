#include <bits/stdc++.h>
using namespace std;
int main(){
    for(int i=0; i<15; i=i+2){
        cout << i << " ";

        if(i&1){
            continue; 
            //since yahan continue likha hai, so if its true, 
            //then neeche wala part won't be accessible
        }
        i++; //this is not accessible
    } 
    return 0;
}