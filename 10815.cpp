//백준 10815번 숫자 카드
#include <iostream>
#include <set>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int num, m, input;
	cin >> num;
	set <int> card;

	for (int i = 0; i < num; i++) {
		cin >> input;
		card.insert(input);
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> input;

		if (card.find(input) == card.end())
			cout << "0 ";

		else
			cout << "1 ";
	}
}

/*
	set : 노드 기반 컨테이너. 중복 허용 X
	insert 함수에 의해 삽입되면 오름차순으로 정렬.
	find(k) -> k를 가리키는 반복자를 반환. 값이 없다면 end()와 같은 반복자를 반환.
	* 백준에 코드 제출시 scanf_s 로 하던지 cin으로 하자^^;;
*/
