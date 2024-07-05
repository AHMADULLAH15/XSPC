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
    while (t--)
    {
        int n;cin>>n;
        vector<int> v(n);
        int mx = INT_MIN,two = INT_MIN,ans = 0;

        for(auto &i: v)
        {
            cin>>i;
            if(i >= mx)
            {
                two = mx;
                mx=i;
            }
        }

        if(v[n-1] == mx) ans = two +mx;
        else ans = mx+v[n-1];

        cout<<ans<<endl;
    }
    
    return 0;
}