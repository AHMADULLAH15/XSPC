#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i < n; i++)
using namespace std;
int main()
{
    //Author : AHMAD
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;cin>>t;
    while (t--)
    {
        int n,q;
    cin>>n>>q;
    vector<ll> v;
    map<int,vector<int>>mp;
    loop(i,0,n)
    {
        int x;
        cin>>x;
        v.push_back(x);
        mp[v[i]].push_back(i);
    }
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        if(mp[a].empty() || mp[b].empty())
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(a == b or mp[a].front() < mp[b].back()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    }
    
    return 0;
}