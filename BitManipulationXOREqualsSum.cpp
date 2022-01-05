// Example of Bit Manipulation -> Given a positive integer n, find count of positive integers i such that 0 <= i <= n and n+i = n^i 
// Time Complexity : O(log(n))

// We know that (n + i) = (n ^ i) + 2 * (n & i), so n + i = n ^ i implies n & i = 0.

#include<iostream>
using namespace std;

int countValues(int n) {

    int count = 1;
    while(n) {
        if((n & 1) == 0)
            count *= 2;
        n = n >> 1;
    }
    return count;
}


int main() {
    int n = 12;
    cout << countValues(n);
    return 0;
}
