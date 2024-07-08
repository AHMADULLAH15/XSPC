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
        int sum = 0,ans = n;

        loop(i,0,n)
        {
            cin>>v[i];
            sum += v[i];
        }

        if(sum % 2 == 0)
        {
            cout<<ans<<endl;
            continue;
        }

        int i = 0,j = n-1;
        int close = 0;

        while (i <= j)
        {
            if((v[i] % 2 != 0) || (v[j] % 2 != 0))
            {
                close = min(i+1,n-j);
                break;
            }
            i++,j--;
        }
        
        ans -= close;
        cout<<ans<<endl;
    }
    

    return 0;
}