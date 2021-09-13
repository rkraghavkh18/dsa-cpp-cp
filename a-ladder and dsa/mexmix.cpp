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
const int N = 3e5 + 5;
int ar[N];
int main()
{
	fast_io;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin)
	;
	freopen("output.txt", "w", stdout);
#endif
	read(t);
	// cout << n;
	for (int i = 1; i < N; i++) {
		ar[i] = ar[i - 1] ^ (i - 1);
	}
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		int x = ar[a];

		if (x == b)cout << a << endl;
		else if ((x ^ b) == a)
			cout << a + 2 << endl;
		else cout << a + 1 << endl;
	}
	return 0;
}