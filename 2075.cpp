//백준 2075번 N번째 큰 수
#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	
	priority_queue<int, vector<int>, greater<int>> pq_reverse;
	int count = 0;
	
	while (1) {
		for (int i = 0; i < n * n; i++) {
			int num;
			scanf("%d", &num);
			count++;
			if (count > n){
				if (pq_reverse.top() < num) {
					pq_reverse.pop();
					pq_reverse.push(num);
				}
			}
			else {
				pq_reverse.push(num);
			}
			
		}

		printf("%d", pq_reverse.top());
		break;
	}
}

/*	
	priority_queue<int, vector<int>, greater<int>> : 우선순위큐가 오름차순으로 정의됨.
	n번째로 ~한값을 출력할때에는 전체를 다 저장해서 값을 찾기보단 저장하기전에 미리 판단을하는것이 메모리 효율에 있어서 더 좋다.
*/ 
