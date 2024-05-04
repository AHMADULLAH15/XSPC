#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i < n; i++)
using namespace std;
const int maxN = 1e4;
int main()
{
    //Author : AHMAD
    //Never Give UP AHMAD
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<ll> pw;
    for (int i = 1; i <= maxN; i++)
    {
        pw.push_back(pow(i,3));
    }
    
    int t;cin>>t;
    while (t--)
    {
        ll x;cin>>x;
        bool found = false;

        for (int i = 0; i < maxN; i++)
        {
            if(pw[i] >= x)
            {
                break;
            }

            int l = 0,r = maxN -1 , mid;
            ll need = x - pw[i];
            bool ok = false;

            while (l <= r)
            {
                mid = l + (r - l) / 2;
                if(need == pw[mid])
                {
                    ok = true;
                    break;
                }
                else if(pw[mid] > need) r = mid - 1;
                else l = mid +1;
            }
            if(ok)
            {
                found = true;
                break;
            }
        }
        (found)? cout<<"YES"<<endl : cout<<"NO"<<endl;
        
    }
    
    return 0;
}