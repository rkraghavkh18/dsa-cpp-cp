#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define read(x) int x; cin >> x
int main()
{
	fast_io;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);
#endif
	read(n);
	// cout << n;
	while (n--)
	{
		ll n; cin >> n;
		ll a[n];
		ll ans = 0;
		map<int, int> ump;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			ump[a[i] - i - 1]++;
			if (ump[a[i] - i - 1] == 1) {
				ans++;
			}
		}
		if (ump[a[0] - 1] == n) {
			cout << n << endl;
		}
		else {
			cout << 1 << endl;
		}
	}
	return 0;
}