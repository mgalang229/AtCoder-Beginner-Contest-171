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
	char c;
	cin >> c;
	if(isupper(c)) {
		cout << 'A';
	}
	else {
		cout << 'a';
	}
	cout << "\n";
	return 0;
}
