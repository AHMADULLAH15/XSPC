#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool check(vector<int> v,int val)
{
    int sz = v.size(), i = 0 , j = sz-1;

    while (i < j)
    {
        if(v[i] == val)
        {
            i++;
        }
        else if( v[j] == val)
        {
            j--;
        }
        else if(v[i] != v[j])
        {
            return false;
        }
        else
        i++,j--;
    }
    return true;
}
int main()
{
    //Author : AHMAD
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0; i<n; i++) cin>> v[i];
        bool flag = true;

        for (int i = 0; i < n -1 -i; i++)
        {
            if(v[i] != v[n -1 -i])
            {
                flag = check(v,v[i]  or check(v,v[n-1-i]));
                break;
            }
        }
        (flag)?cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    
    

    return 0;
}