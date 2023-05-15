import sys
from collections import deque

def dfs(graph, start):
    visited = []
    stack = [start]

    while stack:
        node = stack.pop()

        if(node not in visited):
            visited.append(node)
            stack.extend(sorted(graph[node], reverse=True))

    return visited

def bfs(graph, start):
    visited = []
    queue = deque([start])

    while queue:
        node = queue.popleft()

        if(node not in visited):
            visited.append(node)
            queue.extend(sorted(graph[node]))

    return visited


n, m ,startPoint = map(int, sys.stdin.readline().rstrip().split())
graph = [[] for _ in range(n+1)]

for _ in range(m):
    node1, node2 = map(int, sys.stdin.readline().rstrip().split())
    graph[node1].append(node2)
    graph[node2].append(node1)

print(' '.join(map(str, dfs(graph, startPoint))))
print(' '.join(map(str, bfs(graph, startPoint))))
