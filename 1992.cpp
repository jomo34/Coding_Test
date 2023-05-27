// 백준 1992번 쿼드트리

#include<iostream>
#include<string>

using namespace std;
string video[64];

void solution(int y, int x, int size) {
	char check = video[y][x];
	for (int i = y; i < y + size; i++) {
		for (int j = x; j < x + size; j++) {
			if (check != video[i][j]) {
				cout << '(';
				solution(y, x, size / 2);
				solution(y, x+size/2, size / 2);
				solution(y + size / 2, x, size / 2);
				solution(y + size / 2, x + size / 2, size / 2);
				cout << ')';
				return;
			}
		}
	}
	cout << check;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> video[i];
	}

	solution(0, 0, n);

	return 0;

}
