# 백준 2493번 탑
import sys

count = sys.stdin.readline().rstrip()
input = sys.stdin.readline().rstrip()
tower = input.split()

# # 출력초과
# # ans에 역순으로 값 넣어주기
# ans = [0 for i in range(int(count))]
# for i in range(int(count)-1, -1, -1):
#     for j in range(i-1, -1, -1):
#         #print('i and j = ' + str(i) + ' ' + str(j))
#         #print(tower[i])
#         #print(tower[j])
#         if int(tower[i]) < int(tower[j]):
#             #print('now')
#             ans[i] = j + 1
#             break;
#
# # ans 출력
# output = ''
# for i in range(int(count)):
#     if i != int(count)-1:
#         output = output + str(ans[i]) + ' '
#     else:
#         output = output + str(ans[i])
#
# print(output)

## 스택을 사용해 정방향으로 계산
stack = []
ans = []
for i in range(int(count)):
    while True:
        if len(stack) == 0:
            stack.append([i, int(tower[i])])
            ans.append(0)
            break;
        elif stack[-1][1] > int(tower[i]):
            ans.append(stack[-1][0] + 1)
            stack.append([i, int(tower[i])])
            break;
        else:
            stack.pop()

print(' '.join(map(str, ans)))
