#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i < n; i++)
using namespace std;
int differences(vector<int> &v)
{
    int sum = 0;
    loop(i,0,v.size()-1) sum += abs(v[i] - v[i+1]);

    return sum;
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
        int n,k;cin>>n>>k;

        vector<int> v(n); loop(i,0,n) cin>>v[i];

        int havesum = differences(v),ans = havesum;

        loop(i,0,n)
        {
            int genuine = v[i];
            v[i] = 1;

            int anothersum = differences(v);
            ans = max(ans,anothersum);

            v[i] = k;
            int another = differences(v);
            ans = max(another,ans);

            v[i] = genuine;
        }

        cout<<ans<<endl;
    }
    

    return 0;
}