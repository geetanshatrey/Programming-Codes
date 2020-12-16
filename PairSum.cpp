// Time Complexity : O(N)
// Problem : Pair Sum Problem

#include<iostream>
#include<algorithm>
#include<climits>
#include<map>
#include<vector>

using namespace std;

void pairSum(int arr[], int n, int k) {
    vector< vector<int> > res;
    map<int, int> vals;
    map<int, int>::iterator itr, temp; 
    for(int i = 0; i < n; i++) {
        itr = vals.find(arr[i]);
        if(itr == vals.end()) {
            vals.insert(make_pair(arr[i], 1));
        }
        else {
            itr->second++;
        }
    }
    for(itr = vals.begin(); itr != vals.end(); itr++) {
        int x = itr->first;
        if(k - x == x) {
            int y = itr->second;
            while(y >= 2) {
                vector<int> t;
                t.push_back(itr->first);
                t.push_back(itr->first);
                res.push_back(t);
                itr->second -= 2;
                y = y - 2;
            }
            continue;
        }
        temp = vals.find(k-x);
        if(temp != vals.end()) {
            int minimum = min(itr->second, temp->second);
            while(minimum > 0) {
                vector<int> t;
                t.push_back(itr->first);
                t.push_back(temp->first);
                res.push_back(t);
                itr->second--;
                temp->second--;
                minimum--;
            }
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
