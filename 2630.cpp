//백준 2630번 색종이 만들기

#include <iostream>
 
using namespace std;
int arr[128][128];
int white = 0; 
int blue = 0;


void solution(int y, int x, int size) {
    int check = arr[y][x];
    for (int i = y; i < y + size; i++) {
        for (int j = x; j < x + size; j++) {
            if (check == 0 && arr[i][j] == 1)
                check = 2;
            else if (check == 1 && arr[i][j] == 0)
                check = 2;

            if (check == 2) {
                solution(y, x, size / 2);
                solution(y, x + size / 2, size / 2);
                solution(y + size / 2, x , size / 2);
                solution(y + size / 2, x + size / 2, size / 2);
                return;
            }
        }
    }

    if (check == 0)
        white++;
    else
        blue++;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    solution(0,0,n);
    cout << white << endl;
    cout << blue << endl;

    return 0;
}

                   
/*


*/
