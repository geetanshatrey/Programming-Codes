// Time Complexity : O(N^2)
// Problem : Maximum Subarray Sum 
#include<iostream>
#include<climits>
#include<vector>

using namespace std;

void maximumSubarray(int arr[], int n) {
    int cumulativeSum[n];
    cumulativeSum[0] = arr[0];
    for(int i = 1; i < n; i++) {
        cumulativeSum[i] = cumulativeSum[i-1] + arr[i];
    }
    int maxSum = INT_MIN, left = -1, right = -1;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(cumulativeSum[j] - cumulativeSum[i-1] > maxSum) {
                maxSum = cumulativeSum[j] - cumulativeSum[i-1];
                left = i;
                right = j;
            }
        }
    }
    cout << "Maximum Subarray Sum : "<< maxSum << endl;
    for(int i  = left; i <= right; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[9] = {-4,1,3,-2,6,2,-1,-4,-7};
    int n = 9;
    maximumSubarray(arr, n);
}