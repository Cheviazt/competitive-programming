#include <bits/stdc++.h>
using namespace std;

static vector<vector<int>> reflect_horizontal(const vector<vector<int>>& a) {
	// Reflect across a horizontal line: top <-> bottom (reverse rows)
	int n = (int)a.size();
	int m = (int)a[0].size();
	vector<vector<int>> b(n, vector<int>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			b[n - 1 - i][j] = a[i][j];
		}
	}
	return b;
}

static vector<vector<int>> reflect_vertical(const vector<vector<int>>& a) {
	// Reflect across a vertical line: left <-> right (reverse columns)
	int n = (int)a.size();
	int m = (int)a[0].size();
	vector<vector<int>> b(n, vector<int>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			b[i][m - 1 - j] = a[i][j];
		}
	}
	return b;
}

static vector<vector<int>> rotate90(const vector<vector<int>>& a) {
	// Rotate 90 degrees clockwise
	int n = (int)a.size();
	int m = (int)a[0].size();
	vector<vector<int>> b(m, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			b[j][n - 1 - i] = a[i][j];
		}
	}
	return b;
}

static vector<vector<int>> rotate180(const vector<vector<int>>& a) {
	int n = (int)a.size();
	int m = (int)a[0].size();
	vector<vector<int>> b(n, vector<int>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			b[n - 1 - i][m - 1 - j] = a[i][j];
		}
	}
	return b;
}

static vector<vector<int>> rotate270(const vector<vector<int>>& a) {
	// Rotate 270 degrees clockwise (or 90 degrees counterclockwise)
	int n = (int)a.size();
	int m = (int)a[0].size();
	vector<vector<int>> b(m, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			b[m - 1 - j][i] = a[i][j];
		}
	}
	return b;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m, x;
	cin >> n >> m >> x;

	vector<vector<int>> a(n, vector<int>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	for (int k = 0; k < x; k++) {
		string op;
		cin >> op;

		if (op == "_") {
			a = reflect_horizontal(a);
		} else if (op == "|") {
			a = reflect_vertical(a);
		} else if (op == "90") {
			a = rotate90(a);
		} else if (op == "180") {
			a = rotate180(a);
		} else if (op == "270") {
			a = rotate270(a);
		}
	}

	for (int i = 0; i < (int)a.size(); i++) {
		for (int j = 0; j < (int)a[0].size(); j++) {
			if (j) cout << ' ';
			cout << a[i][j];
		}
		cout << '\n';
	}
	return 0;
}
