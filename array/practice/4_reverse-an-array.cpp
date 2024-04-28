#include<bits/stdc++.h>
using namespace std;

int main() {
    puts("Array Size: ");
    int n;
    cin >> n;

    int a[n], sum=0;

    puts("Array Input: ");
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    puts("Reverse of Array: ");
    for(int i=n-1; i>=0; i--) {
        cout << a[i] << " ";
    }

    return 0;
}