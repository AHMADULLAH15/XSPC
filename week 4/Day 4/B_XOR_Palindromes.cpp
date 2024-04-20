#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i <= n; i++)
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
        string s; cin>>s; string ans = " ";
        int a=0,b=0,l = 0,r = n-1;

        while (l < r)
        {
            if(s[l] == s[r])
            {
                a += 2;
            }
            else
            {
                b++;
            }
            l++,r--;
        }
        

        loop(i,0,n)
        {
            int sum = i;
            sum -= b;

            if(sum < 0)
            {
                ans.push_back('0');
                continue;
            }
            
            sum = max((sum % 2), sum - a);
            sum = max(0,sum -(n%2));


            if(sum == 0) ans.push_back('1');
            else ans.push_back('0');
        }

        cout<<ans<<endl;
    }
    

    return 0;
}