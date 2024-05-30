#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(ll i = s; i < n; i++)
using namespace std;
int main()
{
    //Author : AHMAD
    //Never Give UP AHMAD
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;cin>>n;
    ll arr[n];
    ll m1 = 1;
    map<ll ,ll > mp;
    loop(i,0,n)
    {
        cin>>arr[i];
        mp[arr[i]]++;
        if(arr[i] != 1) m1 = max(mp[arr[i]], m1);
    }

    if(n==1) cout<<1;
    else
    {
        loop(i,0,n)
        {
            for (ll j = 2; j<= sqrt(arr[i]); j++)
            {
                if(arr[i]%j == 0)
                {
                    mp[j]++;
                    m1 = max(m1,mp[j]);

                    if(arr[i] / j != j)
                    {
                        mp[arr[i]/j]++;
                        m1 = max(m1,mp[arr[i] / j]);
                    }
                }
            }
            
        }
        cout<<m1;
    }

    return 0;
}