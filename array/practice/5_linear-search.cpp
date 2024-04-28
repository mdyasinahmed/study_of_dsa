#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cout << "Array Size: "; cin >> n;

    int a[n]; cout << "Array Elements: "; for(int i=0; i<n; i++) cin >> a[i];

    int x; cout << "Searching Value: "; cin >> x;

    int ans = -1;

    for(int i=0; i<n; i++) if(a[i]==x) ans = i;

    cout <<"Value Found At Index: " << ans;

    return 0;
}