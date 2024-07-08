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

    int t;cin>>t;

    while(t--)
    {
    int n; cin >> n;
    string s; cin >> s;
    int ans = n * (n + 1) / 2;

    unordered_map<int, int> same;

    same[0] = 1;

    int z = 0, o = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0') z++;
        else o++;
        if (same.find(z - o) != same.end())
        {
            ans += same[z - o];
            same[z - o]++;
            continue;
        }
        same[z-o] = 1;
    }
    cout << ans <<endl;

    }

    return 0;
}