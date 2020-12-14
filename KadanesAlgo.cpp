// Time Complexity : O(N)
// Problem : Maximum Subarray Sum Using Kadane's Algorithm
#include<iostream>
#include<climits>
#include<vector>

using namespace std;

void maximumSubarray(int arr[], int n) {
    int cs = 0, ms = 0;
    for(int i = 0; i < n; i++) {
        cs += arr[i];
        if(cs < 0) {
            cs  = 0;
        }
        if(cs > ms) {
            ms = cs;
        }
    }
    cout << "Maximum Subarray Sum : "<< ms << endl;
}

int main() {
    int arr[9] = {-4,1,3,-2,6,2,-1,-4,-7};
    int n = 9;
    maximumSubarray(arr, n);
}
