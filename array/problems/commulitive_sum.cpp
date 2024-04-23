#include<bits/stdc++.h>
using namespace std;


vector<int> 

int main() {
    int n;
    cin >> n;

    while(n--) {
        int s;
        cin >> s;

        int arr[s];
        for(int i=0; i<s; i++) {
            cin >> arr[i];
        }


        for(int i=1; i<s; i++){
            arr[i] = arr[i]+arr[i-1];
        }

        for(int i=0; i<s; i++){
            cout << arr[i] << " ";
        }
        cout << endl;

    }
    

    return 0;
}

scenario 
