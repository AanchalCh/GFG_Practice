#include <bits/stdc++.h>
using namespace std;
int main()
{
    //code
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int s = 0, c = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            s += a[i];
            if (s == 0)
                c++;
            if (mp.find(s) != mp.end())
                c += mp[s];
            mp[s]++;
        }
        cout << c << endl;
    }
    return 0;
}