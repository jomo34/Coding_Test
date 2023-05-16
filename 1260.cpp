//백준 1260번 DFS와 BFS

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> graph[1001];
bool visited[1001];

void dfs(int node) {
    visited[node] = true;
    cout << node << " ";

    for (int i = 0; i < graph[node].size(); i++) {
        int nextNode = graph[node][i];
        if (!visited[nextNode]) {
            dfs(nextNode);
        }
    }
}

void bfs(int start) {
    queue<int> q;
    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int i = 0; i < graph[node].size(); i++) {
            int nextNode = graph[node][i];
            if (!visited[nextNode]) {
                visited[nextNode] = true;
                q.push(nextNode);
            }
        }
    }
}

int main() {
    int n, m, start;
    cin >> n >> m >> start;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 1; i <= n; i++) {
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(start);
    cout << endl;

    fill(visited, visited + 1001, false);

    bfs(start);
    cout << endl;

    return 0;
}

                   
/*
  fill()은 초기화 해주는 함수.
  안에는 차례대로 초기화 해줄 배열, 초기화할 범위, 초기화할 값으로 넣어준다.
*/
