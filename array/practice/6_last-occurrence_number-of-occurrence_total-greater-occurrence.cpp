#include<bits/stdc++.h>
using namespace std;

int main() {
    int size; cout << "Array Size & Array: "; cin >> size;

    vector<int> v;

    for(int i=0; i<size; i++) {
        int element;
        cin >> element;
        v.push_back(element);
    }

    int x; cout << "Value of X = "; cin >> x;

    int index = -1, count = 0, greaterCount = 0;
    for(int i=0; i<v.size(); i++) {
        if(v.at(i)==x){
            index = i;
            count++;
        } else if(v[i] > x) {
            greaterCount++;
        }
    }

    cout << "Last Occurrence of X is : " << index << endl;
    cout << "Number of Occurrence of X is : " << count << endl;
    cout << "Number of Greater Element than X is : " << greaterCount << endl;



    return 0;
}