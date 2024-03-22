#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n>>a;
    vector<int> v;

    for (int i = 1; i <=n; i++)
    {
        int val;
        cin>>val;
        if(val == a)
        {
            continue;
        }
        else
        {
            v.push_back(val);
        }
    }
    for(auto  x:v)cout<<x<<" ";
    return 0;
}