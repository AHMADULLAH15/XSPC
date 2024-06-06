#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i <=n; i++)
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
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);
        int left = 0, right = n - 1;

        int sum = 0;

        for (int i = 1; i <= n; i++)
        {
            if (i % 2)
            {
                sum += a[right];
                right--;
            }
            else
            {
                sum -= a[left];
                left++;
            }
        }
        cout << sum <<endl;
    }
    

    return 0;
}