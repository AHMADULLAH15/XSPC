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
        int n,m,x,y,d;cin>>n>>m>>x>>y>>d;

        if(((x-d) <= 1 and x+d >= n)) cout<<-1<<endl;
        else if(((y-d) <=1 and y+d >= m)) cout<<-1<<endl;
        else if(((x-d) <=1 and (y-d) <= 1)) cout<<-1<<endl;
        else if(x+d >= n and y+d >=m) cout<<-1<<endl;
        else cout<<(m+n) -2<<endl;
    }
    

    return 0;
}