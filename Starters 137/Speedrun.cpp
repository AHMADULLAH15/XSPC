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

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> h(n);

        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < n; i++) cin >> h[i];

        int time_spent = 0;
        bool failed = false;
        bool pass = true;

        for (int i = 0; i < n; i++)
        {
            if (a[i] >= time_spent + h[i])
            {
                time_spent += h[i];
                continue;
            }
            if (failed)
            {
                pass = false;
                break;
            }
            int j = i;
            while (j < n && (a[j] - a[i]) <= 2 * k)
            {
                j++;
            }
            i--;
            j--;

            while (i >= 0 && (a[j] - a[i]) <= 2 * k)
            {
                time_spent -= h[i];
                i--;
            }
            i = j;
            failed = true;
        }

        if (pass) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}