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





merge() {
	int cnt = 0;
	int j = mid + 1;
	for (int i = low; i <= mid; i++)
	{
		while (j <= high && nums[i] > 2 * (long)nums[j])
		{
			j++;
		}
		cnt += (j - (mid + 1));
	}
	int temp[];
	int left = low;
	int right = mid + 1;
	while (left <= mid  &&  right <= high)
	{
		if (nums[left] <= num[right])
		{
			temp.push_back(nums[left++]);
		}
		else {
			temp.pb(nums[right++]);
		}
	}
	while (left <= mid)
	{
		temp.pb(nums[left++]);
	}
	while (right <= high)
		temp.push_back(nums[ritgh++]);

	return cnt;

}

mergeSort()
{
	if (low >= high) return 0;
	int mid = (low + high) / 2;
	int inv = mergeSort(nums, low, mid);
	inv += mergeSort(nums, mid, high);
	inv += merge(nums, low, mid, high);
	return inv;
}


int main()
{
	fast_io;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);
#endif
	cout << mergeSort(arr, 0, n - 1);
	return 0;
}