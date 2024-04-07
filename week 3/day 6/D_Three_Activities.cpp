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

    int t;cin>>t;
    while (t--)
    {
        ll n;cin>>n;
    vector<pair<ll,ll>>a;
    vector<pair<ll,ll>>b;
    vector<pair<ll,ll>>c;
    loop(i , 0 , n)
    {
        ll x;
        cin>>x;
        a.push_back({x,i});
    }
    loop(i , 0 , n)
    {
        ll x;
        cin>>x;
        b.push_back({x,i});
    }
    loop(i , 0 , n)
    {
        ll x;
        cin>>x;
        c.push_back({x,i});
    }
    sort(a.begin(),a.end(),greater<>());
    sort(b.begin(),b.end(),greater<>());
    sort(c.begin(),c.end(),greater<>());
    // for(auto x : c) cout<<x.first<<" "<<x.second<<endl;
    ll ans = 0;
    loop(i,0,3)
    {
        loop(j,0,3)
        {
            loop(k,0,3)
            {
                if(a[i].second != b[j].second && b[j].second != c[k].second && c[k].second  != a[i].second )
                    ans = max(ans,(a[i].first + b[j].first +  c[k].first));
            }
        }
    }
    cout << ans<<endl;
    }
    
    return 0;
}