#include<bits/stdc++.h>
using namespace std;


void message(){
    cout << "YOUR PROGRAM STARTS FROM HERE:\n\n";
}

bool isEven(int x){
    if(x&1) {
        return false;
    }
    return true;
}


void checkNumber(int N) {
    if(isEven(N)){
        cout << N << " is Even." << endl;
    } else {
        cout << N << " is Odd." << endl;
    }
}

int isDivisible(){
    
}


int main() {
    message();
    cout << "Enter A Number: ";
    int n;
    cin >> n;

    checkNumber(n);

    return 0;
}