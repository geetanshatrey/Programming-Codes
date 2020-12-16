// Time Complexity : O(N)
// Problem : Pair Sum Problem if the array is sorted.

#include<iostream>
#include<algorithm>
#include<climits>
#include<map>
#include<vector>

using namespace std;

void pairSum(int arr[], int n, int k) {
    vector< vector<int> > res;
    int i = 0; 
    int j = n - 1;
    while (i < j) {
        if(arr[i] + arr[j] == k) {
            vector<int> t;
            t.push_back(arr[i]);
            t.push_back(arr[j]);
            res.push_back(t);
            i++;
            j--;
        }
        else if(arr[i] + arr[j] > k) {
            j--;
        }
        else {
            i++;
        }
    }
    for(int i = 0; i < res.size(); i++) {
        cout << "[" <<  res[i][0] << "," << res[i][1] << "]" << endl;
    }
}

int main() {
    int arr[12] = {1,1,3,3,5,8,8,11,12,13,13,15};
    int k = 16;
    int n = 12;
    pairSum(arr, n, k);
}
