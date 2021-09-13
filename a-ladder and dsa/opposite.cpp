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
	read(t);
	// cout << t;
	while (t--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		int x = abs(a - b);
		if (2 * x >= c && 2 * x >= a && 2 * x >= b)
		{
			int alpha = c + x;
			int beta  = c - x;
			if (alpha != a && alpha != b && alpha <= x * 2)
				cout << alpha << endl;
			else if (beta != a && beta != b && beta > 0)
				cout << beta << endl;
			else
				cout << -1 << endl;
		}
		else {
			cout << -1 << endl;
		}
	}
	return 0;
}