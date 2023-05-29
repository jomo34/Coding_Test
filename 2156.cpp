// 백준 2156번 포도주 시식

#include<iostream>
#include<algorithm>

using namespace std;
int DP[10001];
int arr[10001] = { 0, };

long long solution(int n) {
	DP[1] = arr[1];
	DP[2] = arr[1] + arr[2];
	DP[3] = (arr[1] + arr[2] + arr[3]) - min({ arr[1], arr[2], arr[3] });

	for (int i = 4; i <= n; i++) 
		DP[i] = max({DP[i-3] + arr[i-1] + arr[i], DP[i-2] + arr[i], DP[i-1]});
	

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
