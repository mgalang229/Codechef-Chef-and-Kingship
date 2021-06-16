#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<long long> p(n);
		for (int i = 0; i < n; i++) {
			cin >> p[i];
		}
		// sort the sequence in non-decreasing order
		sort(p.begin(), p.end());
		long long res = 0;
		// run a for-loop (but skip the first element)
		for (int i = 1; i < n; i++) {
			// calculate the sum between the product of the first element and every element
			res += (p[0] * p[i]);
		}
		cout << res << '\n';
	}
	return 0;
}
