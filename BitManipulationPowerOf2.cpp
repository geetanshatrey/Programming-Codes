// Example of Bit Manipulation -> How to know if a number is a power of 2? 
// Time Complexity : O(1)
// n is a power of 2 if it has only one bit set to 1. Thus, n & (n - 1) == 0 is the case for the same. 

#include<iostream>
using namespace std;

int powerOfTwo(int n) {
    if(n <= 0)
        return false;
    return !(n & (n-1));
}

int main() {
    int n = 8;
    cout << powerOfTwo(n);
    return 0;
}
