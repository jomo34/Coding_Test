// 백준 2606번 바이러스

#include<iostream>
#include<vector>

using namespace std;
vector<int> edges[101];
bool check[101];
int cnt = 0;

void solution(int n) {
	check[n] = true;
	for (int i = 0; i < edges[n].size(); i++) {
		int a = edges[n][i];
		if (!check[a]) {
			solution(a);
			cnt++;
		}
	}
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, edge;
	cin >> n;
	cin >> edge;
	for (int i = 0; i < edge; i++) {
		int a, b;
		cin >> a >> b;
		edges[a].push_back(b);
		edges[b].push_back(a);
	}

	solution(1);
	cout << cnt;

}
