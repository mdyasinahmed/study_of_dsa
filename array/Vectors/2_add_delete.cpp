#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;

    // add element
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    puts("Result After push_back(): ");
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }

    v.insert(v.begin()+2, 3);
    puts("\nResult After insert(): ");
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }


    // delete element
    v.pop_back();
    puts("\nResult After pop_back(): ");
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }

    v.erase(v.begin()+2);
    puts("\nResult After erase(): ");
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }

    v.clear();
    puts("\nResult After clear(): ");
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }


    return 0;
}