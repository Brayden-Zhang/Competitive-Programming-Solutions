#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y;
	int m;
	cin >> x >> y >> m;

	int closest = 0;
	// Try all possible combinations of the first & second bucket.
	for (int first = 0; first <= m; first++) {
		if (x * first > m) { break; }
		for (int second = 0; second <= m; second++) {
			int n = (x * first) + (y * second);
			if (n > m) { break; }
			closest = max(closest, n);
		}
	}

	cout << closest << endl;
}
