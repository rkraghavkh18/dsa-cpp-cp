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
	string s;
	getline(cin, s);
	int i = 0;
	for (int j = 1; j < 26; j++)
	{
		while (i != 14)
		{
			char a = s[i] - j;
			int x = a;
			if (x < 65)
				a = 91 - (65 - x);
			cout << a;
			i++;
		}
		i = 0;
		cout << endl;
	}
	return 0;
}