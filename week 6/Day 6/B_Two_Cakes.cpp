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

    int n, a, b;
    cin >> n >> a >> b;

    int l = 1, r = min(a, b),ans = 1;

    while (l <= r) 
    {
        int mid = (l + r) / 2;
        if (a / mid + b / mid >= n) 
        {
            l = mid + 1;
            ans = mid;
        } 
        else 
        {
            r = mid - 1;
        }
    }

    cout <<ans<<endl;

    return 0;
}