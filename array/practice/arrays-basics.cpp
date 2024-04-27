#include<bits/stdc++.h>
using namespace std;

int main() {

    // array declaration
    // data-type arrayName[arraySize];

    // array literals
    int a[] = {1, 2, 3, 4, 5};

    // total size of array in Memory
    int size = sizeof(a);
    cout << "Size is: " << size << endl;

    // the length of array
    int length = size/sizeof(a[0]);
    cout << "Length is: " << length << endl;


    return 0;
}