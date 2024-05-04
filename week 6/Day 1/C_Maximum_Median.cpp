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

    int n,k;cin>>n>>k;vector<int> v(n);loop(i,0,n) cin>>v[i];
    sort(v.begin(),v.end());

    //lemta function 
    auto ok = [&](ll mid)
    {
        ll cnt = 0;
        loop(i,n/2,n)
        {
            cnt += (v[i] < mid ? (mid - v[i]) : 0);
        }
        return cnt <=k;
    };

    ll l = 1,r = 2e9,mid , ans = 0;

    while (l <= r)
    {
        mid = l + (r -l)/2;
        if(ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid -1;
        }
    }
    cout<<ans<<endl;

    return 0;
}