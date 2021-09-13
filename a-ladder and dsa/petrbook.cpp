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
	read(num);
	int arr[7];
	rep(i, 0, 7)
	{
		cin >> arr[i];
	}
	int i = 0;
	while (1)
	{
		num -= arr[i];
		if (num <= 0)
		{
			break;
		}
		if (i == 6)
		{
			i = 0
			    ;
		}
		else
			i++;
	}
	cout << i + 1;
	return 0;
}