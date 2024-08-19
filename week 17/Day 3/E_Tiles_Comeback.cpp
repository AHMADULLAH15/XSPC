#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
const int mod = 1e9 + 7;
#define loop(i, s, n) for (int i = s; i < n; i++)
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using pbds_mul = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{
    // Author : AHMAD
    // Never Give UP AHMAD
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        vector<int> a(n);
        
        loop(i,0,n) cin>>a[i];

        vector<int> vec(n, 0);
        vec[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--) vec[i] = vec[i + 1] + (a[i] == a[n - 1]);

        if (a[0] == a[n - 1])
        {
            if (vec[0] % k == 0 or vec[0] >= k)
            {
                cout << "YES" << endl;
                continue;
            }
        }

        int cnt = 0;
        bool ok = false;
        
        for (int i = 0; i <= n - 2; i++)
        {
            cnt += (a[i] == a[0]);
            if (cnt % k == 0 and vec[i + 1] >= k)
            {
                ok = true;
                break;
            }
        }

        if (ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}