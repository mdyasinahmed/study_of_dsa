#include<bits/stdc++.h>
using namespace std;


void arrayInput(int n, int arr[]){
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
}

int maxInArray(int s, int arr[]){
    int maximum;
    for(int i=0; i<s; i++) {
        maximum = arr[i];
        if(arr[i]>arr[i-1]){
            maximum = arr[i];
            cout << "yes" << endl;
        }
    }

    return maximum;
}


void arrayOutput(int n, int arr[]){
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    int arr[n];
    arrayInput(n, arr);

    int m = maxInArray(n, arr);
     cout << m;
    
    arrayOutput(n, arr);

    return 0;
}