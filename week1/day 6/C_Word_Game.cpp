#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;
        vector<string> s1(n),s2(n),s3(n);
        map<string,int> mp;
        int ans1 = 0,ans2=0,ans3=0;
        for (int i = 0; i < n; i++)
        {
            cin>>s1[i];
            mp[s1[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin>>s2[i];
            mp[s2[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin>>s3[i];
            mp[s3[i]]++;
        }
        

        for(auto s : s1)
        {
            if(mp[s] == 2)
            {
                ans1++;
            }
            else if(mp[s] == 1)
            {
                ans1 +=3;
            }
        }
        for(auto s : s2)
        {
            if(mp[s] == 2)
            {
                ans2++;
            }
            else if(mp[s] == 1)
            {
                ans2 +=3;
            }
        }
        for(auto s : s3)
        {
            if(mp[s] == 2)
            {
                ans3++;
            }
            else if(mp[s] == 1)
            {
                ans3 +=3;
            }
        }

        cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
    }
    
    return 0;
}