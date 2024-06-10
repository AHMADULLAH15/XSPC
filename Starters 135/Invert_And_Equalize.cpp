#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i < n; i++)
using namespace std;
int min_operations(string s) 
{
    int n = s.length();
    if (n == 1) return 0;

    int zero = 0;
    int one = 0;

    if (s[0] == '0') zero++;
    else one++;

    for (int i = 1; i < n; i++) 
    {
        if (s[i] != s[i - 1]) 
        {
            if (s[i] == '0') zero++;
            else one++;
        }
    }

    return min(zero, one);

}
int main()
{
    //Author : AHMAD
    //Never Give UP AHMAD
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) 
    {
        int n;cin >> n;
        string s;cin >> s;
        cout << min_operations(s) << endl;
    }

    return 0;
}