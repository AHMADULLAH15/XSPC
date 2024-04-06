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

    int n,m;
    cin>>n>>m;
    int arr[n],arr1[m];
    loop(i,0,n) cin>>arr[i];
    loop(i,0,m) cin>>arr1[i];
    

    ll ans = 0;
    int l = 0,r = 0;
    while (l < n && r  < m)
    {
        int cnt1 = 0 ,cnt2 = 0,curr = arr[l];
        while(arr[l] == curr && l < n)
        {
            cnt1++;
            l++;
        }
        while (curr > arr1[r] && r < m)
        {
            r++;
        }
        while (arr1[r] == curr && r < m)
        {
            cnt2++;
            r++;
        }
        ans += (1ll * cnt1*cnt2);
    }
        cout<<ans;
    return 0;
}