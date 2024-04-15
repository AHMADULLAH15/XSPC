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

    ll t;cin>>t;
    while (t--)
    {
        ll n;cin>>n;
    ll arr[n];
    loop(i,0,n) {cin >> arr[i];}
    ll l = 0,cnt = 0,sum = 0;
    bool flag = false;
    while (l < n)
    {
        while (arr[l] <= 0 && l < n)
        {
            // flag = true;
            if(arr[l] < 0)
            {
                flag = true;
            }
            l++;
        }
        if(flag) cnt++;
        flag = false;
        while (arr[l] >=0 && l < n)
        {
            l++;
        }
        
    }
    // cout<<cnt<<endl;
    loop(i,0,n)
    {
        if(arr[i] <= 0)
        {
            arr[i] = arr[i] * -1;
        }
        sum+=arr[i];
    }
    // cout<<sum<<" "<<cnt<<endl;
    if(sum == 0) cout<<0<<" "<<0<<endl;
    else cout<<sum<<" "<<cnt<<endl;
    }
    
    return 0;
}