#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i < n; i++)
using namespace std;
const int maxN = (1 << 15);
vector<int> all_palindromes;

void make_palindrome()
{
    for (int i = 0; i < maxN; i++)
    {
        string s = to_string(i);
        int len = s.length();
        bool ok = true;

        for (int i = 0; i < (len / 2); i++)
        {
            if(s[i] != s[len - i - 1])
            {
                ok = false;
                break;
            }
        }
        if(ok) all_palindromes.push_back(i);
    }
    
}
int main()
{
    //Author : AHMAD
    //Never Give UP AHMAD
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    make_palindrome();
    
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> cnt(maxN), a;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin>>val;
            cnt[val]++;
            a.push_back(val);
        }

        ll ans = n;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < all_palindromes.size(); j++)
            {
                int curr = (a[i] ^ all_palindromes[j]);
                ans += cnt[curr];
            }
            
        }
        
        cout<<(ans/2)<<endl;
    }
    

    return 0;
}