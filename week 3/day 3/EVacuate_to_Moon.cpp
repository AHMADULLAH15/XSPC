#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i < n; i++)
using namespace std;
void solve()
{
    int n,m,h;cin>>n>>m>>h;
    int arr[n],brr[m];
    loop(i,0,n) cin >> arr[i];
    sort(arr,arr+n, greater<int>());
    loop(j,0,m) cin >> brr[j];
    sort(brr,brr + m, greater<int>());

    ll sum = 0;
    loop(i,0,min(n,m)) sum += min(1ll * brr[i] * h , 1ll*arr[i]);

    cout<<sum<<endl;
}
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
        solve();
    }
    

    return 0;
}