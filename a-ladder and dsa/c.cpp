#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define rep(i,a,b) for(int i = a; i < b; i++)
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
#define ll long long int
#define mod 1e9 +7
#define ff first
#define ss second
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>


const int N = 1e5 + 2;

int main() {
	fast_io;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);
#endif
	ll t;
	cin >> t;
	while (t--) {
		ll i, n, x = 0, y = 0;
		bool flag = 0;
		string s;


		cin >> s;
		n = s.length();
		for (i = 0; i < n; i++) {
			if (i % 2)x = x * 10 + (s[i] - '0');
			else y = y * 10 + (s[i] - '0');

		}
		cout << (x + 1)*(y + 1) - 2 << endl;
	}

}