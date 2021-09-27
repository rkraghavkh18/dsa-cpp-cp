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
	// cout << n;

	while (t--)
	{
		int h , a;
		cin >> h >> a;
		int count = 0;
		while (h > 0 || a > 0)
		{
			h += 3;
			a += 2;
			count++;
			if (h > 5 && a > 10)
			{
				h -= 5;
				a -= 10;

				count++;
			}
			else if (h > 20) {
				h -= 20;
				a += 5;
				count++;
			}
			else {
				break;

			}
		}
		cout << count << endl;
	}

	return 0;
}