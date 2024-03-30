#include<iostream>
#include<bits/stdc++.h>
#define loop(i,s,n) for(int i = s; i < n; ++i)
using namespace std;
int main()
{
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;int arr[n];
        map<int,int>mp;
        loop(i, 0, n)
        {
            cin >> arr[i];mp[arr[i]]++;
        }
        int mxfreq=0;
        int ans = 0;
        for(auto a : mp) mxfreq = max(mxfreq,a.second);
        while (mxfreq<n)
        {
            int baki = n-mxfreq;
            int jog = mxfreq;
            ans++;
            ans += min(baki,jog);
            mxfreq +=min(baki,jog);
        }
        cout<<ans<<endl;
    }
        
    return 0;
}