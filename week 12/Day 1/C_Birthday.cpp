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

        int n;
        cin >> n;
        vector<int> a(n),ans;
        
        loop(i,0,n) cin >> a[i];
            
        sort(a.begin(), a.end());

        ans.push_back(a[n - 1]);

        for (int i = n - 2; i >= 0; --i) 
        {
            if (i % 2 == 0) ans.push_back(a[i]);
            else ans.insert(ans.begin(), a[i]);
        }
        for (int i : ans) cout << i << " ";
        
        cout << endl;

    return 0;
}