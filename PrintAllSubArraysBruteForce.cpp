// Time Complexity : O(N^3)

#include<iostream>
#include<vector>

using namespace std;

vector< vector<int> > printAllSubArrays(int arr[], int n) {
    int length, k;
    vector< vector<int> > res;
    for(int i = 1; i <= n; i++) {
        length = i; 
        for(int j = 0; j < n; j++) {
            vector<int> temp;
            for(k = j; k < length + j && k < n; k++) {
                temp.push_back(arr[k]);
            }
            if(temp.size() == length) 
                res.push_back(temp);
        }
    }
    return res;
}

int main() {
    int arr[4] = {1,2,3,4};
    int n = 4; // Size of array.
    vector< vector<int> > res;
    res = printAllSubArrays(arr, n);
    for(int i = 0; i < res.size(); i++) {
        for(int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}
