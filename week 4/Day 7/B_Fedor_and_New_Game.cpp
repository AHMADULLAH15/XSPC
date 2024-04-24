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

    int n,m,k;cin>>n>>m>>k;

    vector<int> v(m+1);
    for (int i = 0; i <=m; i++)
    {
        cin>>v[i];
    }
    
    vector<vector<int>> all_mask;
    for (int i = 0; i <=m; i++)
    {
        vector<int> temp;
        for (int k = 0; k < n; k++)
        {
            if((v[i] >> k) & 1) temp.push_back(1);
            else temp.push_back(0);
        }
        all_mask.push_back(temp);
    }
    int ans = 0;

    vector<int> fedor = all_mask[m];

    for (int i = 0; i < all_mask.size()-1; i++)
    {
        vector<int> temp = all_mask[i];
        int cnt = 0;

        for (int k = 0; k < n; k++)
        {
            if(fedor[k] != temp[k]) cnt++;
        }
        if(cnt <= k) ans++;
    }
    
    cout<<ans<<endl;
    return 0;
}