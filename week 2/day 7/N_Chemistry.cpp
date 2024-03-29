#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;cin>>t;
    while (t--)
    {
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,ll> mp;

    for (ll i = 0; i < n; i++)
    {
        // cin>>s[i];
        mp[s[i]]++;
    }
    ll sum = 0;
    for(auto &x : mp)
    {
        // cout<<x.first<<" "<<x.second<<endl;
        // if(x.second % 2 == 1)
        // {
        //     sum+=x.second;
        // }
        sum += (x.second % 2 == 1);
    }
    // cout<<sum;
    if(sum <=k+1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    
    return 0;
}