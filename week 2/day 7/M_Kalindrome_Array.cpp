#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i < n; i++)
using namespace std;
bool check(vector<int>&v)
{
    int sz = v.size(), i = 0 , j = sz-1,sol = 1;
    while (i < j)
    {
        if(v[i] != v[j])
        {
            sol = 0;
            break;
        }
        i++,j--;
    }
    return sol;
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
        int n;cin>>n;int arr[n+2];
        loop(i,0,n) cin>>arr[i];
        int i = 0,j = n-1,ans = -1;
        int idxi,idxb;
        while (i < j)
        {
            if(arr[i] != arr[j])
            {
                ans = 1;
                idxi = arr[i],idxb = arr[j];
                break;
            }
            i++,j--;
        }
        if(ans == -1) cout<<"YES"<<endl;
        else
        {
            vector<int>v1,v2;
            loop(i,0,n)
            {
                if(arr[i] == idxi) continue;
                v1.push_back(arr[i]);
            }
            loop(i,0,n)
            {
                if(arr[i] == idxb) continue;
                v2.push_back(arr[i]);
            }

            int sol1 = check(v1),sol2 = check(v2);
            if(sol1 == 1 || sol2 == 1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    

    return 0;
}