#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i <=n; i++)
using namespace std;
const ll N = 10000000+5;
vector<ll> v[N];
vector<ll> ans;
void dfs(ll src,ll par)
{
    // cout<<src<<endl;
    bool child = false;
    for(auto a : v[src])
    {
        if(a == par) continue;
        child = true;
        dfs(a,src);
        ans[src] += ans[a];
    }

    if(!child)
    {
        ans[src] = 1;
    }
}
int main()
{
    //Author : AHMAD
    //Never Give UP AHMAD
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        loop(i,0,n)
        {
            v[i].clear();
        }
        
        ans.assign(n+2,0);

        loop(i,1,n-1)
        {
            ll a,b;cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        
        
        dfs(1,-1);
        ll q;cin>>q;
        while (q--)
        {
            ll x,y;cin>>x>>y;
            ll ans1 = ans[x]*ans[y];
            cout<<ans1<<endl;
        }
    }
    
    
    return 0;
}