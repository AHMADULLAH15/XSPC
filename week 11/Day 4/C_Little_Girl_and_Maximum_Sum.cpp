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

    int n, q; cin >> n >> q;
    vector<int> a(n);
    
    loop(i,0,n) cin>>a[i];

    vector<int> d(n + 1);
    for (int i = 1;i <= q;i++) 
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        d[l]++;
        d[r + 1]--;
    }

    for (int i = 1;i <= n;i++)
    {
        d[i] = d[i - 1] + d[i];
    }


    sort(a.rbegin(), a.rend());
    sort(d.rbegin(), d.rend());

    ll ans = 0;

    loop(i,0,n)
    {
        ans += (1LL * d[i] * a[i]);
    }

    cout << ans << endl;

    return 0;
}