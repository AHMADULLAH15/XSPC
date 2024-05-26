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

    ll t;cin>>t;
    while (t--)
    {
        ll n,k;cin>>n>>k;
        vector<ll> v,nonpos;

        ll mx = 0,ans = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;cin>>x;
            if(x > -1)
            {
                v.push_back(x);
            }
            else
            {
                x *= -1;
                nonpos.push_back(x);
            }
            mx = max(x,mx);
        }
        
        sort(v.begin(),v.end(),greater<int>());
        sort(nonpos.begin(),nonpos.end(),greater<int>());

        for (int i = 0; i < v.size(); i+=k)
        {
            ans +=(v[i] * 2);
        }
        for (int i = 0; i < nonpos.size(); i+=k)
        {
            ans +=(nonpos[i] * 2);
        }
        

        ans -=mx;
        cout<<ans<<endl;
    }
    

    return 0;
}