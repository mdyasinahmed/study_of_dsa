#include<bits/stdc++.h>
using namespace std;

bool isEven(int x){
    if(x&1) {
        return false;
    }
    return true;
}




int main() {
    int n;
    cin >> n;

    if(isEven(n)){
        cout << "Even";
    } else {
        cout << "Odd";
    }

    return 0;
}