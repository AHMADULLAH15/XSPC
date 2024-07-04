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
        ll n,mn,mx,ans = 0;cin>>n>>mn>>mx;

        if((mn - mx) > 1|| (n <mn))
        {
            cout<<-1<<endl;
            continue;
        }

        if(mx == mn) mx--;

        loop(i,0,n)
        {
            if(mn > i) ans +=i;
            else ans +=mx;
        }

        cout<<ans<<endl;
    }
    

    return 0;
}