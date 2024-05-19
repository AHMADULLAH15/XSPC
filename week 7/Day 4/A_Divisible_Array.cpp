#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i <=n; i++)
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
        vector<int>v;
        if(n % 2 == 0)
        {
            loop(i,1,n)
            {
                v.push_back(i*2);
            }
        }
        else
        {
            loop(i,1,n)
            {
                v.push_back(i);
            }
        }

        for(auto val : v) cout<<val<<" ";
        cout<<endl;
    }
    

    return 0;
}