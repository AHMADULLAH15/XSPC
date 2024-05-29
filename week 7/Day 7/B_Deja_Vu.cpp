#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i < n; i++)
using namespace std;
int main()
{
    //Author : AHMAD
    //Never Give UP AHMAD
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> have(32);
    loop(i,0,32) have[i] = 1 <<i;
    
    int t;cin>>t;
    while (t--)
    {
        int n,q;cin>>n>>q;
        vector<int> arr(n),x(q);
        loop(i,0,n) cin>>arr[i];
        loop(i,0,q) cin>>x[i];

        loop(i,0,n)
        {
            for(auto v : x)
            {
                if(arr[i] % have[v] == 0)
                {
                    if(v == 0) arr[i] +=0;
                    else arr[i] += have[v-1];
                }
            }
        }

        for(auto val : arr) cout<<val<<" ";
        cout<<endl;
        
        
    }
    

    return 0;
}