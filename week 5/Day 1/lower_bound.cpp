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

    vector<int> v = {2,3,4,4,6,9,10};

    auto it = lower_bound(v.begin(), v.end(), 4);
    // cout<< it - v.begin()<<endl;//ata idx return korbe  it - v.begin() ata internally kaj korbe
    cout<< *it<<endl;//ata korle value ta dibe

    if(it == v.end()) cout<<"NOt present"<<endl;
    else cout<<"Present";

    return 0;
}