//백준 10816번 숫자 카드2
#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int num, m, input;
	cin >> num;
	unordered_map <int, int> card;

	for (int i = 0; i < num; i++) {
		cin >> input;
		card[input]++;
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> input;
		cout << card[input] << " ";
	}
}

/*
	unorderd_map : map보다 더 빠른 탐색을 하기 위한 자료구조
	해쉬 테이블로 구현한 자료구조로 시간 복잡도는 O(1)
	(map은 이진 탐색 트리이므로 O(log n))
*/
