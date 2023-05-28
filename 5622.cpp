// 백준 5622번 다이얼

#include<iostream>
#include<unordered_map>

using namespace std;

int solution(string input) {
	int sum = 0;
	int time[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };

	for (int i = 0; i < input.size(); i++) 
		sum = sum + time[input[i] - 65];
	
	return sum;
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string input;
	cin >> input;

	int sum = solution(input);
	cout << sum;

	return 1;
}
