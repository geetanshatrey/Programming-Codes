#include<iostream>
#include<vector>

using namespace std;

int binarySearch(int arr[], int l, int r, int key) {
    if(l > r) {
        return -1;
    }

    int m = (l+r)/2;
    if(arr[m] == key) {
        return m+1;
    } 
    else if(arr[m] > key) {
        return binarySearch(arr,l,m-1,key);
    }
    else {
        return binarySearch(arr,m+1,r,key);
    }
    return -1;
}
int main() {
    int arr[5] = {1,2,3,4,5};
    int key = 1;
    int pos = binarySearch(arr,0,4,key);
    if(pos == -1) {
        cout << "Not Found !";
    }
    else 
        cout << "Key : "<< key << " found at position : " << pos;
}