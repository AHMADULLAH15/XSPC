#include <iostream>
#include <vector>
#include <map>
#define loop(i,s,n) for(int i = s; i < n; i++)
using namespace std;

int main() {
    // Author : AHMAD
    // Never Give UP AHMAD
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        map<int, int> cnt;
        for (int i = 0; i < n; i++) 
        {
            for (int j = 2; j * j <= a[i]; j++) 
            {
                if (a[i] % j == 0) {
                    while (a[i] % j == 0) 
                    {
                        cnt[j]++;
                        a[i] /= j;
                    }
                }
            }
            if (a[i] > 1) 
            {
                cnt[a[i]]++;
            }
        }

        bool ok = true;
        for (auto it = cnt.begin(); it != cnt.end(); ++it) 
        {
            if (it->second % n != 0) 
            {
                ok = false;
                break;
            }
        }

        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
