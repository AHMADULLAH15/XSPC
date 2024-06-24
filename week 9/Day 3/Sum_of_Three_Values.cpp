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

    int n,x;cin>>n>>x;

    vector<pair<ll,int>> v(n);

    loop(i,0,n)
    {
        cin>> v[i].first;
        v[i].second = i+1;
    }

    sort(v.begin(),v.end());

    loop(i,0,n)
    {
        ll a = x - v[i].first;
        
        for (int j = i+1, k = n -1 ; j < k; j++)
        {
            while (v[j].first+v[k].first > a)
                k--;
            if(j < k && v[j].first + v[k].first == a)
            {
                cout << v[i].second << " " << v[j].second << " " << v[k].second;
                return 0;
            }
            
        }
        
    }

    cout<<"IMPOSSIBLE";
    return 0;
}