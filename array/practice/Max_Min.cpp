#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n], i, maximum;

    for(i=0; i<n; i++) {
        cin >> arr[i];
        maximum = arr[0];
        if(arr[i] > maximum) {
            maximum = arr[i];
        }
    }

    cout << maximum << endl;

    return 0;
}