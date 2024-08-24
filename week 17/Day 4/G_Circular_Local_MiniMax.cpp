#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
const int mod = 1e9 + 7;
#define loop(i, s, n) for (int i = s; i < n; i++)
#define all(v) v.begin(), v.end()
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using pbds_mul = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    loop(i, 0, n) cin >> arr[i];

    sort(all(arr));

    vector<ll> ans(n);
    ll x = 0;
    ll y = 1;
    ll i = 0, j = n / 2;

    while (i < n / 2 && j < n)
    {
        ans[x] = arr[i];
        ans[y] = arr[j];
        i++;
        j++;
        x += 2;
        y += 2;
    }

    if (n % 2)
        ans[n - 1] = arr[n - 1];

    loop(i, 0, n) cout << ans[i] << " ";
    cout << endl;

    for (int i = 1; i < n - 1; i++)
    {
        if ((ans[i] > ans[i + 1] && ans[i] > ans[i - 1]) || (ans[i] < ans[i + 1] && ans[i] < ans[i - 1]))
        {
            
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
    loop(i, 0, n) cout << ans[i] << " ";
    cout << endl;
}

int main()
{
    // Author : AHMAD
    // Never Give UP AHMAD
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
