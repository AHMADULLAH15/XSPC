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
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        int pair_count = 0;
        
        for (int i = 0; i < n; i++)
        {
            int cur = a[i];
            if (cur == 1)
            {
                pair_count += n;
            }
            else
            {
                int power = 1;
                for (int j = 0; j < n; j++)
                {
                    if (power > 1e9 / cur)
                        break;
                    power *= cur;
                    if (power <= a[j])
                        pair_count++;
                }
            }
        }
        cout << pair_count <<endl;
    }

    return 0;
}