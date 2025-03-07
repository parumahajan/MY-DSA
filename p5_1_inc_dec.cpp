#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=10, b=1;
    if(++a){
        cout << b;
    }
    else{
        cout << ++b;   
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=1, b=2;
    if(a-- > 0  || ++b > 2){ 
        //If first statement is True, 
        //then the second statement won't be evaluated/considered
        //That's why b won't be incremented
        cout << "Stage1 - Inside If ";
    }
    else{
        cout << "Stage2- Inside else ";
    }
    cout << a << " " << b << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    int num = 3;
    cout << (25 * (++num));
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
int main(){
    int a = 1;
    int b = a++; //a=1 
    //ab issi a ko jb agli baar use krenge tb iski value increment ho jaegi
    int c = ++a; //a=2+1 =3
    cout << b << c;
    return 0;
}