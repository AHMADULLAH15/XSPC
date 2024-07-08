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
        string s;cin >> s;
        
        int minX = 0, maxX = 0, minY = 0, maxY = 0;

        
        if (s[0] == '1') minX = -10;
        if (s[1] == '1') maxX = 10;
        if (s[3] == '1') minY = -10;
        if (s[2] == '1') maxY = 10;


        int cnt = 0;

        for (int x = minX; x <= maxX; x++) 
        {
            for (int y = minY; y <= maxY; y++) 
            {
                cnt++;
            }
        }
        

        cout << cnt << endl;
    }
    

    return 0;
}