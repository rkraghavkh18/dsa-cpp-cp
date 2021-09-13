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
	int n, m, q;
	unordered_set<int>gamma;
	int sum = 0;
	int flag = 0;
	while (t--)
	{

		cin >> n >> m >> q;
		for (int i = 0; i < q; i++)
		{
			char ch ;
			cin >> ch;
			int x;
			cin >> x;
			if (ch == '+')
			{
				sum += 1;
				gamma.insert(x);
			}
			if (ch == '-')
			{
				sum -= 1;
				if (gamma.find(x) == gamma.end())
				{
					flag = 1;
					break;
				}
			}
			if (sum > m)
			{
				flag = 1;
				break;
			}
			// cout << flag << " " << sum;
		}
		// cout << << flag << sum;


	}
	if ( flag == 0)
		cout << "Consistent" << endl;
	else
		cout << "Inconsistent" << endl;
	return 0;
}