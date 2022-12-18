# 백준 9012번 괄호
import sys

time = sys.stdin.readline().rstrip()
for i in range(int(time)):
    open = 0
    close = 0
    flag = 0
    line = sys.stdin.readline().rstrip()
    if line[0] =='(' and line[len(line)-1] == ')':
        if len(line) % 2 == 0:
            for j in line:
                if j == '(':
                    open = open + 1
                else:
                    close = close + 1
                if open < close:
                    flag = -1
                    break
            if flag != -1 and open == close:
                print('YES')
                continue
    print('NO')
