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
        ll n;
    cin>>n;
    priority_queue<ll>pq;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll val;
        cin>>val;
        pq.push(val);
        if(!pq.empty())
        {
            if(val == 0)
            {
                ans += pq.top();
                pq.pop();
            }
        }
    }
    cout<<ans<<endl;
    }
    
    return 0;
}