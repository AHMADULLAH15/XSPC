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

    int n,k;cin>>n>>k;
    vector<int> v(n);loop(i,0,n) cin>>v[i];

    while (k--)
    {
        int key;cin>>key;
        int l = 0 ,r = n-1,mid, ans = n;
        while (l <=r)
        {
            mid = (l + r) / 2;
            if(key <= v[mid])
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout<< ans + 1<<endl;
    }
    

    return 0;
}