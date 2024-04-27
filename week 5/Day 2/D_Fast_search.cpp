#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i < n; i++)
using namespace std;
int main()
{
    //Author : AHMAD
    //Never Give UP AHMAD
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;cin>>n;
    vector<ll>v(n);loop(i,0,n) cin>>v[i];
    sort(v.begin(), v.end());
    ll k;cin>>k;
    while (k--)
    {
        ll l,r;cin>>l>>r;
        auto it1 = lower_bound(v.begin( ), v.end(  ) , l);
        auto it2 = upper_bound(v.begin( ), v.end(  ) , r);

        cout<<it2 - it1<<" ";
    }

    return 0;
}