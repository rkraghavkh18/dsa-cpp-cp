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
#define read(x) int x; cin >> x
int main()
{
	fast_io;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);
#endif
	read(n);
	int a;
	map<int, pair<int, int>> res;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		if (res[a].first) {
			if (res[a].second == 0) {
				res[a].second = i;
			}
		} else {
			res[a].first = i;
		}
	}
	cout << res.size() << endl;
	for (auto itr = res.begin(); itr != res.end(); itr++) {
		if (itr->second.second) {
			cout << itr->first << " " << itr->second.second - itr->second.first << endl;
		} else {
			cout << itr->first << " " << 0 << endl;
		}
	}
	return 0;
}