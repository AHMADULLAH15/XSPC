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
        ll x,y,cnt = 0;cin>>x>>y;

        loop(i,0,40)
        {
            bool a = 0, b = 0;

            if(x&(1ll<<i))a = 1;
            if(y&(1ll<<i))b = 1;

            if(a == b) cnt++;
            else break;
        }

        cout<<(1ll<<cnt)<<endl;
    }
    

    return 0;
}