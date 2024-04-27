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

    // TRAVERSING ARRAY THROUGH LOOPS
    cout << "\nTRAVERSING ARRAY THROUGH LOOPS" << endl;

    // TRAVERSING ARRAY THROUGH FOR LOOP
    cout << "For LOOP: " << endl;

    int arraySize;
    cout << "Enter Array Size: ";
    cin >> arraySize;
    int array[arraySize];

    for(int index=0; index<arraySize; index++) {
        cin >> array[index];
    }

    for(int index=0; index<arraySize; index++) {
        cout << array[index] << " ";
    } cout << endl;
    cout << "Ends of For Loop.\n\n\n";


    // TRAVERSING ARRAY THROUGH FOR-EACH LOOP
    cout << "For-each LOOP: " << endl;
    char vowels[5];
    cout << "Enter Vowels: ";
    for(char &c : vowels){
        cin >> c;
    }

    for(char c : vowels){
        cout << c << " ";
    } cout << endl;
    cout << "Ends of For-each Loop.\n\n\n";



    return 0;
}