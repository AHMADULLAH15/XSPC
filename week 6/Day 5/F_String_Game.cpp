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

    string t,p;cin>>t>>p;
    // cout<<t<<" "<<p;
    int n = t.size(),m = p.size();
    vector<int> v(n);loop(i,0,n) cin>>v[i];

    auto ok = [&](int mid)
    {
        vector<bool> bad(n + 1);
        for (int i = 0; i < mid; i++)
        {
            bad[v[i]] = true;
        }
        int j = 0;bool found = false;
        for (int i = 0; i < n; i++)
        {
            if(t[i] == p[j] && !bad[i + 1]) j++;
            if(j == m) 
            {
                found = true;
                break;
            }
        }
        return found;
    };

    int l = 0,r = n , mid , ans = 0;
    while(l <= r)
    {
        mid = l + (r-l) /2;
        if(ok(mid))
        {
            ans = mid ;l = mid+1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout<<ans<<endl;
    return 0;
}