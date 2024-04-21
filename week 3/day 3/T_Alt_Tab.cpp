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

    int n;cin>>n;
    stack<string> st;
    loop(i,0,n)
    {
        string s;cin>>s;
        st.push(s);
    }
    set<string> se;
    while (!st.empty())
    {
        if(se.find(st.top()) == se.end())
        { 
            se.insert(st.top());
        
            string program = st.top();

            if(program.size() > 2) cout<<program.substr(program.size() - 2);
        }
        st.pop();
    }
    // while (!se.empty())
    // {
    //     string program = *se.begin();
    //     if(program.size() > 2)
    //     {
    //         cout<<program.substr(program.size() - 2);
    //     }
    //     se.erase(*se.begin());
    // }
    

    return 0;
}