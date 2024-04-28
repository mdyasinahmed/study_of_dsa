#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n], i, maximum, minimum;

    // Array Input
    for(i=0; i<n; i++) {
        cin >> arr[i];
    }

    // minimum
    minimum = arr[0];
    for(i=0; i<n; i++) {
        if(arr[i] < minimum) {
            minimum = arr[i];
        }
    }
    cout << "Minimum Value is: " << minimum << endl;

    // maximum
    maximum = arr[0];
    for(i=0; i<n; i++) {
        if(arr[i] > maximum) {
            maximum = arr[i];
        }
    }
    cout << "Maximum Value is: " << maximum << endl;

    return 0;
}