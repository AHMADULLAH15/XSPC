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
    vector<int> v(n),v1(n);

    for(auto &val : v) cin>>val;
    for(auto &val : v1) cin>>val;

    int l = 0,r = n-1;

    while (v[l] == v1[l])
    {
        l++;
    }
    
    while (v[r] == v1[r])
    {
        r--;
    }

    while (l > 0 && v1[l] >= v1[l-1])
    {
        l--;
    }

    while (r < n-1 && v1[r] <= v1[r+1])
    {
        r++;
    }
    
    cout<<l+1<<" "<<r+1<<endl;
    }
    
    

    return 0;
}