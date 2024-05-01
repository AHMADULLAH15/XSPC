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
        int a = 1,b = 0,cnt = 0;
        while (a*2 <=n)
        {
            a *= 2;cnt++;
        }
        int ans = 1;
        bool ok = false;
        for (int i = cnt - 1; i >=0; i--)
        {
            if((n&1<<i))
            {
                b = b | (1<<i);
                ok = true;
            }
            else
            {
                if(ok) ans *= 2;
            }
        }
        cout<<ans<<endl;
        

    }
    

    return 0;
}