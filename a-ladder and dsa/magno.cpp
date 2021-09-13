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
	// read(n);
	// cout << n;
	string s;
	while (cin >> s)
	{
		int flag = 1;
		int len = s.size();
		for (int i = 0; i < len; i++) {
			if (s[i] == '4') {
				if ((i >= 1 && s[i - 1] == '1') || (i > 1 && s[i - 2] == '1'))
					continue;
				else {
					flag = 0;
					break;
				}
			}
			else if (s[i] != '1') {
				flag = 0;
				break;
			}
		}
		if (!flag)  cout << "NO" << endl;
		else  cout << "YES" << endl;
	}
	return 0;
}