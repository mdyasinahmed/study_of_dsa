#include<bits/stdc++.h>
using namespace std;

int print(int N){
    if(N==1) {
        cout << N << endl;
        return 0;
    }

    cout << N << endl;
    print(N-1);
    
}

int main() {
    int n;
    cin >> n;
    print(n);
    
    return 0;
}