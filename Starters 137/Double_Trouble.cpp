#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
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
        int n;
        cin >> n;

        vector<int> x(n);
        vector<int> p(n);

        loop(i,0,n) cin >> x[i];

        loop(i,0,n) cin >> p[i];

        vector<int> left(n, 0);
        vector<int> right(n, 0);

        for (int i = 1; i < n; i++)
        {
            if ((x[i] - p[i]) <= x[i - 1])
                left[i] = left[i - 1] + 1;
        }

        for (int i = n - 2; i >= 0; i--)
        {
            if ((x[i] + p[i]) >= x[i + 1])
                right[i] = right[i + 1] + 1;
        }
        bool possible = false;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                int current_power = right[i] + 1;
                if (current_power == n || (current_power + 1 + right[i + current_power] == n))
                {
                    possible = true;
                    break;
                }
            }
            else if (i == n - 1)
            {
                int current_power = left[i] + 1;
                if (current_power == n || (current_power + 1 + left[i - 1 - left[i]] == n))
                {
                    possible = true;
                    break;
                }
            }
            else if (2 + left[i] + right[i + 1] == n)
            {
                possible = true;
                break;
            }
        }

        if (2 + right[0] + left[n - 1] >= n)
            possible = true;
        if (2 + right[1] == n)
            possible = true;

        if (possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}