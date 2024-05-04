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

    int n,t;cin>>n>>t;
    vector<int> v(n);loop(i,0,n) cin>>v[i];

    //lemta/lenta function jeita main funtion er modde r akta function

    auto ok = [&](ll mid)
    {
        ll total = 0;
        loop(i,0,n)
        {
            total += (mid / v[i]);
            if(total >= t) return true;
        }
        return false;
    };

    ll l = 1, r = 1e18, mid, ans;
    while(l <= r)
    {
        mid = l + (r - l) / 2;
        if(ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }

    cout<<ans<<endl;

    return 0;
}