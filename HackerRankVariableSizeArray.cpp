#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int noOfArray,noOfQueries,i,j;
    cin>>noOfArray>>noOfQueries;
    int** a = new int*[noOfQueries];
    for(i=0;i<noOfArray;i++)
    {
        int sizeOfArray;
        cin>>sizeOfArray;
        a[i] = new int[sizeOfArray];
        for(j=0;j<sizeOfArray;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<noOfQueries;i++)
    {
        int arrayNo,indexOfCheck;
        cin>>arrayNo>>indexOfCheck;
        cout<<a[arrayNo][indexOfCheck]<<endl;
    }
    return 0;
}

