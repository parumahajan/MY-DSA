/*STAR-1
    ***
    ***
    ***
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the length of pattern: ";
    cin >> n;

    int i=0; 
    while(i<n){
        int j=0; //initializes value of j back to 0
        while(j<n){
            cout << '*';
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

//?-------------------------------------------------------------------------

/*STAR-2
    *
    **
    ***
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the length of pattern: ";
    cin >> n;

    int i=1;
    while(i<=n){
        int j=0;
        while(j<n && j<i){
            cout << '*';
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}


//?-------------------------------------------------------------------------


/*STAR-3
    ***
    **
    *
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the length of pattern: ";
    cin >> n;

    int i=0;
    while(i<n){
        int j=i;
        while(j<n){
            cout << '*';
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}

//?-------------------------------------------------------------------------

/*STAR-4
   *
  **
 ***
****
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the length of the pattern: ";
    cin >> n;
    int i=0;

    while(i<=n){
        int s=0;
    while(s<n-i){
        cout << " ";
        s++;
    }
        int j=0;
        while(j<n && j<i){
            cout << '*';
            j++;
        }
        cout << endl;
        i++;
        }
        return 0;
}

//?-------------------------------------------------------------------------

/*STAR-5
****
 ***
  **
   *
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the length of the pattern: ";
    cin >> n;

    int i=0;
    while(i<n){

        int s=0;
    while(s<i){
        cout << " ";
        s++;
    }

        int j=i;
        while(j<n){
            cout << '*';
            j++;
        }
        cout << endl;
        i++;
        }
        return 0;
}

//?-------------------------------------------------------------------------

/*STAR-6
****
 ***
  **
   *
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the length of the pattern: ";
    cin >> n;

    int i=0;
    while(i<n){

        int s=0;
    while(s<i){
        cout << " ";
        s++;
    }

        int j=i;
        while(j<n){
            cout << '*';
            j++;
        }
        cout << endl;
        i++;
        }
        return 0;
}