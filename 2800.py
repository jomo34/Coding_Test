# 백준 2800번 괄호
import sys
from itertools import combinations

input = sys.stdin.readline().rstrip()
index = -1
stack = []
glst = []
resarr = set()

# 괄호쌍 위치 glst에 넣기
for i in range(len(input)):
    if input[i] == '(':
        stack.append(i)
    elif input[i] == ')':
        s = stack.pop()
        glst.append((s,i))

# 조합을 이용해 괄호 제거
for i in range(1,len(glst)+1):
    for comb in combinations(glst,i):
        tmp = list(input)
        for x in comb:
            tmp[x[0]] = ""
            tmp[x[1]] = ""
            resarr.add("".join(tmp))

for x in sorted(list(resarr)):
    print(x)
