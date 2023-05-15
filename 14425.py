import sys

n, m = map(int, sys.stdin.readline().split())
string_set = set()
for _ in range(n):
    string_set.add(sys.stdin.readline().rstrip())

count = 0
for _ in range(m):
    if sys.stdin.readline().rstrip() in string_set:
        count += 1

print(count)
