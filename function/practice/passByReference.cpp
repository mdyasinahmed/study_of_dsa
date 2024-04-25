#include<bits/stdc++.h>
using namespace std;

void changeValue(int &x) {
    x = 100;
}

int main() {
    int n = 5;

    changeValue(n);

    cout << n << endl;

    return 0;
}