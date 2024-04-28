#include<bits/stdc++.h>
using namespace std;


int main() {
    puts("Enter 5 Integer Values: ");
    vector<int> v;
    for(int i=0; i<5; i++) {
        int element;
        cin >> element;
        v.push_back(element);
    }

    // for LOOP
    puts("TRAVERSING VECTOR THROUGH FOR LOOP");
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;


    // for-each LOOP
    puts("TRAVERSING VECTOR THROUGH FOR-EACH LOOP");
    for(int ele : v) {
        cout << ele << " ";
    }
    cout << endl;


    // while LOOP
    puts("TRAVERSING VECTOR THROUGH WHILE LOOP");
    int index = 0;
    while(index < v.size()) {
        cout << v[index] << " ";
        index++;
    }


    return 0;
}