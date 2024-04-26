#include<bits/stdc++.h>
using namespace std;

bool isEven(int x){
    if(x&1) {
        return false;
    }
    return true;
}


void checkNumber(int N) {
    if(isEven(N)){
        cout << N << " is Even." << endl;
    } else {
        cout << N << " is Odd." << endl;
    }
}


int main() {
    int n;
    cin >> n;

    checkNumber(n);

    return 0;
}