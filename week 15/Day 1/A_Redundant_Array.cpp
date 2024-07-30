#include<iostream>
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
#define loop(i,s,n) for(ll i = s; i < n; i++)
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

    ll t;cin>>t;
    while (t--)
    {
        ll n;cin>>n;
    
    vector<ll> v;
    unordered_map<ll,ll> umap;

    ll space = INT_MAX;

    loop(i,0,n)
    {
        ll val;cin>>val;
        v.push_back(val);
        umap[val]++;
    }

    for(auto val: umap)
    {
        space = min(space,val.first*(n-val.second));
    }

    cout<<min(space,n)<<endl;
    }
    

    return 0;
}