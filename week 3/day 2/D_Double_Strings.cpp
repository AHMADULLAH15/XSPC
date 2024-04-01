#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i <=n; i++)
using namespace std;
int main()
{
    //Author : AHMAD
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<string> v(n);
        loop(i, 0, n-1)
        {
            cin>>v[i];
        }

        map<string,int> mp;
        loop(i, 0, n-1)
        {
            mp[v[i]]++;
        }

        string  a(n,'0');
        
        loop(i,0,n-1)
        {
            if(v[i].size() == 1)
            {
                continue;
            }
            loop(j,0,v[i].size()-2)
            {
                string c = "",d = "";
            loop(k,0,j)
                {
                    c.push_back(v[i][k]);
                }
                loop(k,j+1,v[i].size() -1)
                {
                    d.push_back(v[i][k]);
                }
                if(c==d)
                {
                    if(mp[c]>0)
                    {
                        a[i] = '1';
                        break;
                    }
                }
                else
                {
                    if(mp[c] > 0 && mp[d] > 0)
                    {
                        a[i] = '1';
                        break;
                    }
                }
                if(a[i] == '1') break;
            }
        }
        cout<<a<<endl;
        
    }
    

    return 0;
}