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

    ll n,x,cnt = 0; cin>>n>>x;

    vector<int> v(n);
    loop(i,0,n) cin>>v[i];

    ll l = 0;

    while (l < n)
    {
        ll r = 0;
        for(int i = l; i < n; i++)
        {
            r += v[i];
            if(r == x) cnt++;
        }
        l++;
    }

    cout<<cnt<<endl;
    

    return 0;
}