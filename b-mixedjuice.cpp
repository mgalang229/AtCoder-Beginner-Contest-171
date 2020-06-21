#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, 
less<int>, rb_tree_tag, 
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	int a[1000];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a + n);
	int sum  = 0;
	for(int i = 0; i < k; ++i) {
		sum += a[i];
	}
	cout << sum << "\n";
	return 0;
}
