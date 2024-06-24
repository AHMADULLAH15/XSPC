#include<iostream>
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
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

    ll n;cin>>n;
    vector<ll> v(n);

    loop(i,0,n) cin>>v[i];

    int cnt = 0;

    for (int i = 0; i < n-1; i++)
    {
        if(v[i] > v[i+1])
        {
            cnt += abs(v[i]-v[i+1]);
            v[i+1] = v[i];
        }
    }

    cout<<cnt;

    return 0;
}