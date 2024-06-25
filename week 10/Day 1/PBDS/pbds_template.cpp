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

    pbds<int> p;
    int n;cin>>n;
    loop(i,0,n)
    {
        int x;cin>>x;
        p.insert(x);
    }

    int x = p.order_of_key(5);// ata dia value tar age koita value ace array te aita output dibe
    cout<<x<<endl;
    auto it = p.find_by_order(5);// ata dia oi index a kon value ace aita dekabe aita ittarator dia use korte hbe
    cout<<*it<<endl;
    for(auto val : p) cout<<val<<" ";
    return 0;
}