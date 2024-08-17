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
        string s,a,b;cin>>s;

        bool tik = false;
        a+= s[0];

        for(int i = 1; i <s.size(); i++)
        {
            if(s[i] != '0' || tik)
            {
                b+= s[i];
                tik = true;
            }
            else
            {
                a+= s[i];
            }
        }
        if(b.size() == 0) b+='0';
        int n = stoi(a),m = stoi(b);
        if(m > n && n != 0 && m != 0) cout<<n<<" "<<m<<endl;
        else cout<<-1<<endl;
    }
    

    return 0;
}