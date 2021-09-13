#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define ll long long
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);
#endif
    read(t);
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> b(n - 1);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < n - 1; i++)
            cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        map<ll, ll> mp;
        for (ll i = 0; i < n - 1; i++)
        {
            ll m1 = b[i] - a[i];
            ll m2 = b[i] - a[i + 1];
            if (m1 != m2)
            {
                if (m1 > 0)
                    mp[m1] += 1;
                if (m2 > 0)
                    mp[m2] += 1;
            }
            else
            {
                if (m1 > 0)
                    mp[m1] += 1;
            }
        }
        for (auto i : mp)
        {
            if (i.second == n - 1)
            {
                cout << i.first << endl;
                break;
            }
        }
    }
    return 0;
}