//백준 4358번 생태학
#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);


	string line;
	map <string, float> m;
	int count = 0;

	//파일 입출력
	ifstream file("trees.txt");
	if (file.is_open()) {
		while (getline(file, line)) {
			count++;
			if (m.find(line) == m.end()) {
				m.insert({ line, 1.0 });
			}
			else {
				m[line] = m[line] + 1.0;
			}
		}

		file.close();
	}
	else {
		cout << "Unable to open file";
		return 1;
	}

	//제출시 코드
	//while (getline(cin, line)) {
	//	count++;
	//	if (m.find(line) == m.end()) {
	//		m.insert({ line, 1.0 });
	//	}
	//	else {
	//		m[line] = m[line] + 1.0;
	//	}
	//}


	for (map<string, float>::iterator itr = m.begin(); itr != m.end(); itr++) {
		itr->second = itr->second / count * 100;
	}

	for (map<string, float>::iterator itr = m.begin(); itr != m.end(); itr++) {
		cout << fixed;
		cout.precision(4);
		cout << itr->first << " " << itr->second << endl;
	}

	return 0;
}

/*
	map: <key, value>의 형태
	m[key]를 통해 value에 접근할 수 있고, iterator를 사용한다면 itr->second로 접근 가능
	소수점 고정은 cout << fixed;	cout.precision(4);
*/
