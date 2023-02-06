//백준 5618번 공약수
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int count;
	cin >> count;
	int a, b, c, i;
	switch (count)
	{
	case 2:
		cin >> a >> b;
		if (a < b) {
			for (i = 1; i <= a; i++) {
				if (a % i == 0 && b % i == 0)
					cout << i << endl;
			}
		}
		else {
			for (i = 1; i <= b; i++) {
				if (a % i == 0 && b % i == 0)
					cout << i << endl;
			}
		}
		break;
	case 3:
		cin >> a >> b >> c;
		if (a < b) {
			if(a<c){
				for (i = 1; i <= a; i++) {
					if (a % i == 0 && b % i == 0 && c%i == 0)
						cout << i << endl;
				}
			}
			else {
				for (i = 1; i <= c; i++) {
					if (a % i == 0 && b % i == 0 && c % i == 0)
						cout << i << endl;
				}
			}
		}
		else {
			if (b < c) {
				for (i = 1; i <= b; i++) {
					if (a % i == 0 && b % i == 0 && c % i == 0)
						cout << i << endl;
				}
			}
			else {
				for (i = 1; i <= c; i++) {
					if (a % i == 0 && b % i == 0 && c % i == 0)
						cout << i << endl;
				}
			}
		}
		break;
	}
}
