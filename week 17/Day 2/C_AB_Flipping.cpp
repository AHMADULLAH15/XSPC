#include<iostream>
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
const int mod = 1e9+7;
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
        string s;cin>>s;
        int ans = n-1;
        loop(i,0,n)
        {
            if(s[i] == 'B') ans--;
            else break;
        }
        for(int i = n-1; i>=0; i--)
        {
            if(s[i] == 'A') ans--;
            else break;
        }

        if(ans >= 0) cout<<ans<<endl;
        else cout<<0<<endl;
    }
    

    return 0;
}