#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 3, 2, 3, 1, 4, 5 , 4};

    for(int i=0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            if(v[i] == v[j]) {
                v[i] = v[j] = -1;
            }
        }
    }

    int ans=0;
    for(int i=0; i<v.size(); i++) {
        if(v[i] > 0) {
            ans = v[i];
        }
    }

    cout << ans << endl;

    return 0;
}