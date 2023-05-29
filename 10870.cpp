// 백준 10870번 피보나치 수 5

#include<iostream>

using namespace std;

int solution(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else 
		return solution(n - 2) + solution(n - 1);
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, answer;
	cin >> n;
	answer = solution(n);
	cout << answer;

	return 0;
}
