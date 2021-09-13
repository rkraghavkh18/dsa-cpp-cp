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
	while (n--)
	{
		int n, k, s, s1 = 0;
		cin >> n >> k >> s;
		for (int i = 1; i <= n * 2; i += 2)
		{
			s1 += i;
		}
		for (int i = 1; i <= n * 2; i += 2 )
		{
			if (i * (k - 1) == (s - s1))
			{
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}