// 백준 2748번 피보나치 수 2

#include<iostream>

using namespace std;

long long solution(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;

	long long prev = 0;
	long long curr = 1;
	long long result = 0;

	for (int i = 2; i <= n; i++) {
		result = prev + curr;
		prev = curr;
		curr = result;
		
	}

	return result;
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	long long answer = solution(n);
	cout << answer;

	return 0;
}
