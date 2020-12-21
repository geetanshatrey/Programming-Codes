#include<iostream>
#include<string>

using namespace std;

int main() {
    char s[1000] = "Today is a rainy day, I know right";
    // char *ptr = strtok(s, " ");
    // while(ptr != NULL) {
    //     cout << ptr << endl;
    //     ptr = strtok(NULL, " ");
    // }
    char *q = strtok(s, ",");
    while(q != NULL) {
        cout << q << endl;
        q = strtok(NULL, ",");
    }
}
