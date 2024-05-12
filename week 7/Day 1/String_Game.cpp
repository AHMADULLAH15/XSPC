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
        int n;cin>>n;string s;cin>>s;
        stack<int> st;
        int cnt = 0;

        for(auto a : s)
        {
            if(!st.empty() && st.top() != (a-'0'))
            {
                st.pop();
                cnt++;
            }
            else 
            {
                st.push((a - '0'));
            }
        }

        cnt = cnt % 2;
        if(cnt != 1) cout<<"Ramos"<<endl;
        else cout<<"Zlatan"<<endl;
    }
    

    return 0;
}