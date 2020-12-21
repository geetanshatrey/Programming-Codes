#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
    char s[1000];
    cin.getline(s, 1000);

    int l = strlen(s);
    if(l == 0 or l == 1) {
        cout << s << endl;
    }
    else {
        int prev = 0;
        for(int current  = 0; current < l; current++) {
            if(s[current] != s[prev]) {
                prev += 1;
                s[prev] = s[current];
            }
        }
        s[prev + 1] = '\0';
    }
    cout << s << endl;
}