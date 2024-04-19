#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i < n; i++)
using namespace std;
void solve()
{
    int n;cin>>n;
    vector<int> arr(n);
    loop(i,0,n) cin >> arr[i];
    int x=0,b = 0;
    loop(i,0,n) x^=arr[i];
    loop(i,0,n) arr[i] ^= x;
    loop(i,0,n) b ^= arr[i];

    if(b == 0) cout<<x<<endl;
    else cout<<-1<<endl;
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