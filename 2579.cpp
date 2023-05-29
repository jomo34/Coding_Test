// 백준 2579번 계단 오르기

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int arr[301] = { 0, };
int DP[301];

long long solution(int n) {
	DP[1] = arr[1];
	DP[2] = arr[1] + arr[2];
	DP[3] = max(arr[1], arr[2]) + arr[3];

	if (n > 3) {
		for (int i = 4; i <= n; i++) {
			DP[i] = max(DP[i - 2], DP[i - 3] + arr[i - 1]) + arr[i];
		}
	}
	
	
	return DP[n];
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	long long result = solution(n);

	cout << result;

	return 0;
}
