//백준 14425번 문자열 집합
#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;

int main() {
	string input = "";
	getline(cin, input);

	stringstream ss(input);
	string count, find;
	ss >> count >> find;

	int cardinality = stoi(count);
	map<string, int> set;
	for (int i{ 0 }; i < cardinality; i++) {
		string str;
		cin >> str;
		set.insert(map<string, int>::value_type(str, i));
	}

	int compare_cardinality = stoi(find);
	string str;
	int result = 0;
	for (int i{ 0 }; i < compare_cardinality; i++) {
		cin >> str;
		map<string, int>::iterator find = set.find(str);
		if (find != set.end())
			result++;
	}

	cout << result;
	
	return 0;
}
