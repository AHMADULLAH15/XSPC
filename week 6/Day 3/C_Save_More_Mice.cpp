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
        ll n,k;
        cin>>n>>k;
        vector<ll>v(k);
        for(int i=0;i<k;i++)
        {
            cin>>v[i];
        }
        
        sort(v.rbegin(),v.rend());
        
        ll c=0;
        ll ans=0;
        for(int i=0;i<k;i++)
        {
            if(c < v[i])
            {
                c+=(n-v[i]);
                ans++;
            }
            else break;
        }
        cout<<ans<<endl;
    }
    

    return 0;
}