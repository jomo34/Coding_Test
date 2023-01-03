//백준 11279번 최대 힙
#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(false); //입출력 stream의 동기화를 해제
	cin.tie(0);
	cout.tie(0);

	int time;
	cin >> time;
	priority_queue<int> heap;
	int input;

	while (time--) {
		cin >> input;
		if (input == 0) {
			if (heap.empty())
				cout << "0\n";
			else {
				cout << heap.top() << "\n";
				heap.pop();
			}
		}
		else
			heap.push(input);
	}

	return 0;
}

/*	
	stream : 프로그램과 입출력 단말기 사이에 연결된 통로
	C와 C++ 코드를 혼동하여도 같은 스트림 버퍼에 쌓이기 때문에 의도한 순서대로 입출력 처리 가능.
	또한, 멀티 쓰레딩시 각각 출력 연산을 수행하여도 충돌이 일어나지 않음.
	하지만 연산량이 많고 속도가 떨어짐.
	만약 동기화가 되지않는다면, 멀티 쓰레딩시 충돌이 발생할 수 있고, 각자만의 버퍼를 사용하여 입출력 하기때문에 순서가 보장되지 않는다.

	tie : cin과 cout은 default로 tie되어있다.
	즉, 두개의 stream이 tie되어 있기때문에, 다른 stream이 작업 요청을하면 작업내용을 flush(buffer에 쌓아둔 데이터를 내보내는것).
	일반적으로는 buffer가 가득차면 flush를 하기때문에 긴문자열을 입출력하는경우 개행이나 뒷쪽의 문자열이 잘리는현상 발생.
	하지만 매우 빠른시간안에 입출력이 이루어지기때문에 untie를 해서 입출력 시간을 줄여도 된다.

	std::endl 보다 '\n'을 사용하는것이 더 빠르다.

	priority_queue: 우선순위 큐.
	push() / pop() / top() / empty() / size()
*/ 
