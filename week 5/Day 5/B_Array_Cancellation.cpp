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
        ll vp = 0,vn = 0;
        for (int i = 1; i <=n; i++)
        {
            ll val;cin>>val;
            if(val >= 0) vp +=val;
            else
            {
                if(vp+val >= 0) vp+=val;
                else
                {
                    val +=  vp;
                    vp = 0;
                    vn += val;
                }
            }
        }
        cout<<abs(vn)<<endl;
    }
    return 0;
}