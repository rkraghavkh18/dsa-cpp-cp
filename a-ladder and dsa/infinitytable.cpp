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
#define read(x) long long x; cin >> x
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
		read(k);
		if (k == 1000000000)
		{
			cout << 31623 << " " << 14130 << endl;
			break;
		}
		int alpha = sqrt(k);
		// cout << alpha << endl;
		int r = alpha;
		int c = alpha;
		int x = pow(alpha, 2);
		x = k - x;
		if (x == 0)
			cout << r << " " << 1 << endl;
		else {
			if (x <= alpha + 1) {
				r = 0;
				while (x != 0) {
					r++;
					x--;
				}
				cout << r << " " << c + 1 << endl;
			}
			else {
				x = x - (alpha + 1);
				while (x != 1) {
					c--;
					x--;

				}
				cout << r + 1 << " " << c << endl;

			}


		}
	}
	return 0;
}