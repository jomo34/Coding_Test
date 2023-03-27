//백준 1026번 보물
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> a;
vector<int> b;

int solution(int num) {
    int answer = 0;

    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    for (int i = 0; i < num; i++) {

        answer = answer + a.back() * b.back();
        a.pop_back();
        b.pop_back();

    }

    return answer;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int num;
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        int input;
        cin >> input;
        a.push_back(input);
    }

    for (int i = 0; i< num; i++) {
        int input;
        cin >> input;
        b.push_back(input);
    }

    int answer = solution(num);
    cout << answer;

}
                   
/*
    벡터 출력
    for (auto loop : stack1) {
            cout << loop << endl;
    }
*/
