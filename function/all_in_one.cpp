#include<bits/stdc++.h>
using namespace std;

// function with no return type
void message(){
    cout << "Hi there!\n";
    cout << "YOUR PROGRAM STARTS FROM HERE:\n\n";
}

// function with return type
bool isEven(int x){
    if(x&1) {
        return false;
    }
    return true;
}

// function to print message of confirmation of even and odd
void checkNumber(int N) {
    if(isEven(N)){
        cout << N << " is Even." << endl;
    } else {
        cout << N << " is Odd." << endl;
    }
}

int isDivisible(){
    
}

// main function
int main() {
    message();
    cout << "Enter A Number: ";
    int n;
    cin >> n;

    checkNumber(n);

    return 0;
}