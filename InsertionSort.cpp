#include<iostream>

using namespace std;

void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int j = i - 1;
        int x  = arr[i];
        while(arr[j] > x && j >= 0) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
    }
}
int main() {
    int arr[5] = {4,5,1,3,2};
    int n = 5;
    insertionSort(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } 
}