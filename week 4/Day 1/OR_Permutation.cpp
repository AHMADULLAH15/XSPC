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
        int  n;cin >> n;
        for (int i = n; i >= 1; i--)
        {
            cout<<i<<" ";
        }
        
        cout<<endl;
    }
    

    return 0;
}