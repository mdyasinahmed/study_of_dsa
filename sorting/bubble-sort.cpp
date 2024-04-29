#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> bubble = {6, 3, 8, 5, 2, 1};

    for(int i=0; i<bubble.size(); i++) {
        for(int j=i+1; j<bubble.size(); j++) {
            if(bubble[i] > bubble[j]){
                swap(bubble[i], bubble[j]);
            }
        }
    }

    for(int i=0; i<bubble.size(); i++) {
        cout << bubble[i] << " " ;
    }


    return 0;
}