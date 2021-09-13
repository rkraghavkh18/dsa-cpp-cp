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

int check(int stalls[], int mid, int n, int c)
{
	int cow_placed = 1;
	int pos = stalls[0];
	for (int i = 1; i < n; i++)
	{
		if (stalls[i] - pos >= mid)
		{
			pos = stalls[i];
			cow_placed++;
		}
		if (cow_placed == c)
			return 1;
	}
	return 0;

}

int bsearch(int stalls[], int n, int c)
{
	sort(stalls, stalls + n);
	int lo = stalls[0];
	int hi = stalls[n - 1];
	int mind = -1;
	while (lo <= hi)
	{
		int mid = (lo + hi) / 2;
		if (check(stalls, mid, n, c))
		{
			mind = mid;
			lo = mid + 1;
		}
		else
			hi = mid - 1;

	}
	return mind;
}


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
		int n, c;
		cin >> n >> c;
		int stalls[n];
		for (int i = 0; i < n; i++)
		{
			cin >> stalls[i];
		}
		int x = bsearch(stalls, n, c);
		cout << x;
	}
	return 0;
}