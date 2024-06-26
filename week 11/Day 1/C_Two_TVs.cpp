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

    int n;cin>>n;
    map<int,int> mp;
    while (n--)
    {
        int l,r;cin>>l>>r;
        mp[l]++,mp[r+1]--;
    }

    bool ans = true;
    int sum = 0;

    for(auto [x,y] : mp)
    {
        sum += y;
        if(sum  > 2)
        {
            ans = false;
            break;
        }
    }
    
    (ans) ? cout<<"YES" : cout<<"NO";


    return 0;
}