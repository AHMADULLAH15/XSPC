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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int total_a = 0, cur_a = 0, b = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
                cur_a++;
            else if (s[i] == 'b')
            {
                total_a += cur_a;
                b = 1;
                cur_a = 0;
            }
            else
            {
                if (b == 1)
                {
                    if (total_a == 0)
                    {
                        b = 0;
                        continue;
                    }
                    else
                    {
                        ans++;
                        total_a--;
                    }
                }
            }
        }
        cout << ans << endl;;
    }
    

    return 0;
}