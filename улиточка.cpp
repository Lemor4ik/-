

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector < vector <int> > arr(n, vector <int>(m));
	int x2 = 0, y2 = 0, x1 = 0, y1 = 0;
	int a = 1;
	while (x1+x2<n and y1+y2<m) {
		for (int i = x1; i < m-x2; i++) {
			arr[y1][i] = a;
			a++;
		}
		y1++;

		if (x1 + x2 >= m) {
			break;
		}
		for (int j = y1; j < n-y2; j++) {
			arr[j][m-x2-1] = a;
			a++;
		}
		x2++;

		if (y1 + y2 >= n) {
			break;
		}
		for (int i = m - x2 -1; i >= x1; i--) {
			arr[n - y2-1][i] = a;
			a++;
		}
		y2++;

		if (x1 + x2 >= m) {
			break;
		}
		for (int j = n-y2-1; j >= y1; j--) {
			arr[j][x1] = a;
			a++;
		}
		x1++;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j]<<' ';
		}
		cout << endl;
	}
}
