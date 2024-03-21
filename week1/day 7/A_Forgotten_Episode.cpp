#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int> mp;

    for (int i = 1; i <=n; i++)
    {
        int val;
        cin>>val;
        mp[val]++;
    }
    // for(auto v : mp) cout<<v.first<<" "<<v.second<<endl;
    for (int i = 1; i <=n; i++)
    {
        if(mp[i]==0) cout<<i;
    }
    
    return 0;
}