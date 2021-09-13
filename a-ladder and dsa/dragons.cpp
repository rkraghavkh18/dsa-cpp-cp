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


struct dragons
{
	int str;
	int bonus;
} p[1003];

bool comp(dragons a , dragons b)
{
	return a.str < b.str || a.str == b.str && a.bonus > b.bonus;
}
int main()
{
	fast_io;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);
#endif
	int st, dr;
	cin >> st >> dr;
	for (int i = 0; i < dr; i++)
	{
		cin >> p[i].str >> p[i].bonus;
	}
	sort(p, p + dr, comp);

	// for (int i = 0; i < dr; i++)
	// {
	// 	cout << p[i].str << " " << p[i].bonus << endl;
	// }
	int flag = 1;
	for (int i = 0; i < dr; i++)
	{
		if (st > p[i].str)
		{
			st += p[i].bonus;
		}
		else {
			flag = 0;
			break;
		}
	}
	if (flag == 1)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}