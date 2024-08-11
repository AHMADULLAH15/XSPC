#include<iostream>
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
const int mod = 1e9+7;
#define loop(i,s,n) for(int i = s; i < n; i++)
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using pbds_mul = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{
    //Author : AHMAD
    //Never Give UP AHMAD
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;cin>>t;
    while(t--)
    {
        ll n,k;cin>>n>>k;

        vector<ll> v(n*k);

        for (ll i = 0; i < n*k; i++)
        {
            cin>>v[i];
        }
        
        sort(v.begin(),v.end());

        ll ans = 0,x = n * k,y = (n/2);

        for (ll i = x-1-y, j = 0; i>= 0 && j <k; j++ , i-=y+1)
        {
            ans += v[i];
        }

        cout<<ans<<endl;
    }
    

    return 0;
}