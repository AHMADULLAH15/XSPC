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

    int n;
    cin >> n;
    map<int, int> cnt;

    for (int i = 2;i * i <= n;i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                cnt[i]++;
                n /= i;
            }
        }
    }

    if (n > 1) {
        cnt[n]++;
    }

    for (auto it = cnt.begin(); it != cnt.end(); ++it) {
        cout << it->first << " " << it->second << '\n';
    }

    return 0;
}