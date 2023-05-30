//백준 2798번 블랙잭
#include<iostream>
#include<algorithm>

using namespace std;
int arr[101] = { 0, };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	
	int result = 0;

	for (int i = 1; i <= m; i++) {
		for (int j = i + 1; j <= n; j++) {
			for (int k = j + 1; k <= n; k++) {
				int sum = arr[i] + arr[j] + arr[k];
				if (sum > result && sum <= m)
					result = sum;
			}
		}
	}
	
	cout << result;
	return 0;
}
