#include<iostream>
#include<climits>

using namespace std;

int main(){
    int arr[5]= {4,2,8,3,1};
    int smallest = INT_MIN;
    int largest = INT_MAX;
    for(int i = 0; i < 5; i++) {
        smallest = min(smallest, arr[i]);
        largest = max(largest, arr[i]);
    }
    cout << "Smallest :" << smallest <<endl; 
    cout << "Largest :" << largest <<endl; 
}