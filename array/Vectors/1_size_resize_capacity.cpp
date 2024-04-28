#include<bits/stdc++.h>
using namespace std;

int main() {
    // declaration of vector
    // vector<data_type> vector_name;
    // vector<data_type> vector_name(size);

    vector<int> v = {1, 2, 3, 4, 5};

    // size operation 
    cout << v.size() << endl;


    // CHECKING SIZE & CAPACITY of A Vector:
    
    vector<int> vct;
    cout << "Size: " << vct.size() << endl;
    cout << "Capacity: " << vct.capacity() << endl;

    vct.push_back(1);
    cout << "Size: " << vct.size() << endl;
    cout << "Capacity: " << vct.capacity() << endl;

    vct.push_back(2);
    cout << "Size: " << vct.size() << endl;
    cout << "Capacity: " << vct.capacity() << endl;

    vct.push_back(3);
    cout << "Size: " << vct.size() << endl;
    cout << "Capacity: " << vct.capacity() << endl;

    vct.push_back(4);
    cout << "Size: " << vct.size() << endl;
    cout << "Capacity: " << vct.capacity() << endl;

    vct.push_back(5);
    cout << "Size: " << vct.size() << endl;
    cout << "Capacity: " << vct.capacity() << endl;

    vct.push_back(6);
    cout << "Size: " << vct.size() << endl;
    cout << "Capacity: " << vct.capacity() << endl;

    vct.push_back(7);
    cout << "Size: " << vct.size() << endl;
    cout << "Capacity: " << vct.capacity() << endl;

    vct.push_back(8);
    cout << "Size: " << vct.size() << endl;
    cout << "Capacity: " << vct.capacity() << endl;

    vct.push_back(9);
    cout << "Size: " << vct.size() << endl;
    cout << "Capacity: " << vct.capacity() << endl;
    
    vct.resize(10);
    cout << "Size: " << vct.size() << endl;
    cout << "Capacity: " << vct.capacity() << endl;


    return 0;
}