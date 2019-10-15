#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> s;
    vector<int> :: iterator it;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        s.push_back(input);
    }
    sort(s.begin(),s.end());
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }

}
