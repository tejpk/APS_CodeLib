#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector <int> v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		int MIN = v[1] - v[0];
		for (int i = 1; i < n - 1; i++) {
			if (MIN > v[i+1] - v[i]) MIN = v[i+1] - v[i];
		}
		cout << MIN << endl;
	}
	return 0;
}
