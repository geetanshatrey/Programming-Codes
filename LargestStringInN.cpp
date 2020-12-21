#include<iostream>
#include<string>

using namespace std;

int main() {
    char largest[1000];
    int N;
    cin >> N;
    cin.get();
    for(int i = 0; i < N; i++) {
        char current[1000];
        cin.getline(current, 1000);
        if(strlen(current) > strlen(largest)) {
            strcpy(largest,current);
        }
    }
    cout << largest << endl;
    cout << "Size : " << strlen(largest);
}
