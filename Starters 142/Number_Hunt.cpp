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
bool isprime(int x)
{
    if (x <= 1)
        return false;
    if (x == 2 || x == 3)
        return true;
    if (x % 2 == 0)
        return false;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
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
        int x;
        cin >> x;
        int a, b;
        int count = 0;
        if (isprime(x))
            a = x, count++;
        int i = x + 1;
        while (true)
        {
            if (count == 2)
                break;
            if (isprime(i))
            {
                if (count == 0)
                {
                    a = i;
                    count++;
                }
                else if (count == 1)
                {
                    b = i;
                    count++;
                }
            }
            i++;
        }
        cout << a * b << "\n";
    }

    return 0;
}