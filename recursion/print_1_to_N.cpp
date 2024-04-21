#include<bits/stdc++.h>
using namespace std;


int solve(int N) {
    if(N==0) return 0;

    solve(N-1);
    cout << N << endl;

}

int main() {
    int n;
    cin >> n;

    solve(n);

    return 0;
}