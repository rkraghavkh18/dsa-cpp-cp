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
	// cout << n;
	while (n--)
	{
		int a[6];
		for (int i = 0; i < 6; i++)
		{
			cin >> a[i];
		}
		if (a[0] == a[2] && a[1] == a[3])
		{
			cout << 1 << endl;
		}
		else if (a[0] == a[3] && a[1] == a[2])
		{
			cout << 1 << endl;
		}
		else if (a[0] == a[4] && a[1] == a[5])
		{
			cout << 2 << endl;
		}
		else if (a[0] == a[5] && a[1] == a[4])
		{
			cout << 2 << endl;
		}
		else
			cout << 0 << endl;
	}
	return 0;
}