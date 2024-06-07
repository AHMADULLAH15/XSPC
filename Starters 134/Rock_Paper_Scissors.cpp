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
        int n;cin>>n;
        string s;cin>>s;
        int ans = n;

        loop(i,0,n)
        {
            if(s[i] == s[i+1])
            {
                ans--;
                i++;
            }
        }
        
        cout<<ans<<endl;
    }
    

    return 0;
}