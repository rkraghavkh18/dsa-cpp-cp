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
#define ROW 5
#define COL 2



struct Person {
	int age;
	float height;
// public:
	Person(int age , float height): age(age), height(height)
	{
	}
};

struct compare
{
	bool operator()(Person const& p1, Person const& p2)
	{
		return p1.height < p2.height
		       ;
	}
};


int main()
{
	fast_io;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);
#endif
	// read(n);
	// cout << n
	priority_queue<Person, vector<Person>, compare> pq;
	float arr[ROW][COL] = { { 30, 5.5 }, { 25, 5 },
		{ 20, 6 }, { 33, 6.1 }, { 23, 5.6 }
	};
	for (int i = 0; i < ROW; i++)
	{
		pq.push(Person(arr[i][0], arr[i][1]));
	}
	while (!pq.empty())
	{
		Person p = pq.top();
		pq.pop();
		cout << p.height << " " << p.age << endl;
	}

	return 0;
}