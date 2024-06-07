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

    int t;cin>>t;
    while (t--)
    {
        long long n, ans;
        cin >> n;
        long long x, y;
        x = (n / 9) * 45;
        y = (n % 9);
        ans = x + ((y * (y + 1)) / 2);
        cout << ans <<endl;
    }
    

    return 0;
}