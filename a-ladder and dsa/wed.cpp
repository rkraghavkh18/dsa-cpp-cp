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
	read(n);
	long long arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	long long ans = arr[n - 1];
	int num = 1;
	if (n == 2)
	{
		cout << ans << endl;
		return 0;
	}
	int i;
	for (i = n - 2; i >= 0; i--)
	{
		if (num != n - 1)
		{
			ans += arr[i];
			num++;
		}
		if (num == n - 1)
			break;
		ans += arr[i];
		num++;
		if (num == n - 1)
			break;
	}
	cout << ans << endl;
	return 0;
}