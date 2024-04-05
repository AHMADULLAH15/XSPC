#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i < n; i++)
using namespace std;
int n,m;
bool valid_ida(int i,int j)
{
    if(i == -1 || j == -1 || i == n || j == m)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    //Author : AHMAD
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>m;
        vector<vector<int> > grid(n,vector<int>(m));
        loop(i,0,n)
        {
            loop(j,0,m)
            {
                cin>>grid[i][j];
            }
        }
        int ans = 0;
        loop(i,0,n)
        {
            loop(j,0,m)
            {
                int a = i, b = j;
                int mx = 0;
                while (valid_ida(a, b)) mx += grid[a--][b--];
                a = i, b = j, a++, b++;
                while (valid_ida(a, b)) mx += grid[a++][b++];
                a = i, b = j, a--, b++;
                while (valid_ida(a, b)) mx += grid[a--][b++];
                a = i, b = j, a++, b--;
                while (valid_ida(a, b)) mx += grid[a++][b--];
                ans = max(mx, ans);
            }
        }
        cout<<ans<<endl;
    }
    

    return 0;
}