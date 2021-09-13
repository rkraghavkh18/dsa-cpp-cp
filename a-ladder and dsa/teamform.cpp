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
		read(n);
		string s;
		string t;
		cin >> s;
		cin >> t;
		int team = 0;
		int si = 0;
		int ti = 0;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '1' &t[i] == '1')
			{
				team++;
			}
			else if (s[i] == '1' && t[i] == '0')
			{
				si++;
			}
			else if (s[i] == '0' && t[i] == '1')
				ti++;
		}
		int major = si > ti ? ti : si;
		team += major ;
		cout << team << endl;
	}
	return 0;
}