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

    int t;cin>>t;
    while (t--)
    {
        ll n,ans = 0;cin>>n;
        vector<ll> v(n);
        
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        vector<ll> feq(n+1,0);

        for(auto val : v)
        {
            if(val > n) continue;
            feq[val]++;
        }

        for (int i = 1; i <=n; i++)
        {
            ll cnt = 0;
            for (int j = 1; j*j <=i; j++)
            {
                if(i%j == 0)
                {
                    cnt += feq[j];
                    if(j*j != i) cnt += feq[i/j];
                }
            }
            ans = max(ans,cnt);
        }
        cout<<ans<<endl;
    }
    

    return 0;
}