#include<bits/stdc++.h>
using namespace std;


int gcd(int x, int y) {
    if(x==y) {
        return x;
    }
    if(x>y) {
        return gcd(x-y, y);
    } else {
        return gcd(x, y-x);
    }
}


int main() {
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b);


    return 0;
}