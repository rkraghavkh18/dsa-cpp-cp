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
	while (t--)
	{
		read(alpha);
		int i = 1;
		// int j = 1;
		// cout << alpha % 10 << alpha % 3;
		if (alpha == 1)
			cout << 1 << endl;
		else
		{
			while (i <= alpha)
			{
				if (i % 3 == 0 || i % 10 == 3)
				{
					alpha++;
					// i++;

				}
				i++;
				// j++;
			}
			cout << --i << endl;
		}
	}
	return 0;
}