// Example of Bit Manipulation : Calculate XOR from 1 to n.

#include<iostream>
using namespace std;

int calculateXOR(int n) {
    if(n % 4 == 0) {
        return n;
    }
    else if(n % 4 == 1) {
        return 1;
    }
    else if (n % 4 == 2) {
        return n + 1;
    }
    else {
        return 0;
    }
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << "XOR : "<< calculateXOR(n);
    return 0;
}
