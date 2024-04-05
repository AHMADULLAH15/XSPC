#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i < n; i++)
using namespace std;
int main()
{
    //Author : AHMAD
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        map<int,int>mp;
        loop(i, 0, n)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }

        sort(arr, arr+n);
        // for(auto m : mp) cout<<m.first<<" "<<m.second<<endl;
        int ans = 0;
        loop(i,0,n)
        {
            int v = arr[i];
            if(mp[arr[i]] != 0)
            {
                ans++;
                while (mp[v] > 0)
                {
                    mp[v]--;
                    v++;
                }
                
            }
        }
        cout<<ans<<endl;
        
    }
    

    return 0;
}