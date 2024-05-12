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

    int t;
    cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        

        int val = min(abs(v[1]-v[0]), abs(v[n-1]-v[n-2]));

        for (int i = 1; i < n - 1; i++)
        {
            int x = abs(v[i + 1] - v[i]);

            int y = abs(v[i] - v[i - 1]);

            int mx  = max(x, y);
            
            val = min(val, mx);
        }
        
        cout << val << endl;
    }

    return 0;
}