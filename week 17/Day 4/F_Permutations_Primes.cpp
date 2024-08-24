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

    int t;
    cin >> t;
    while (t--)
    {
        int n;cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }

        if (n == 2)
        {
            cout << "2 1" << endl;
            continue;
        }

        vector<int> ans(n, -1);

        ans[n / 2] = 1;
        ans[0] = 3;
        ans[n - 1] = 2;

        int curr = 4;
        for (int i = 1; i <= n - 1; i++)
        {
            if (ans[i] != -1)
                continue;
            ans[i] = curr++;
        }

        loop(i,0,n) cout << ans[i] << " ";
        cout << endl;
    }

    return 0;
}