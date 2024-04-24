#include<bits/stdc++.h>
using namespace std;


int maxAmongThree(int a, int b, int c){
    if(a>b) {
        if(a>c){
            return a;
        }
    } 
    if(a<b) {
        if(b>c) {
            return b;
        }
    }
    return c;
}


int main() {
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;

    cout << "Numbers Are: " << a1 << " " << a2 << " " << a3 << endl;

    cout << "Maximum -> " << maxAmongThree(a1, a2, a3);

    return 0;
}