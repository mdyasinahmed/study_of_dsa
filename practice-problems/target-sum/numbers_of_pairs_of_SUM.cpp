#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cout << "Enter Size: "; cin >> n;

    int arr[n]; cout << "Enter Elements: "; for(int i=0; i<n; i++) cin >> arr[i];

    int targetSum; cout << "Enter Target Sum: "; cin >> targetSum;
    
    int Pairs = 0;
    for(int i=0; i<n; i++) {
        for(int j=1; j<n; j++){
            if(arr[i]+arr[j] == targetSum){
                Pairs++;
            }
        }
    }

    cout << "Total Pairs: " << Pairs << endl;

    return 0;
}