# 백준 1620번 나는야 포켓몬 마스터 이다솜
import sys

input = sys.stdin.readline().rstrip()
line = int(input[:input.find(' ')])
question = int(input[input.find(' '):])

list = {}
for i in range(line):
    input = sys.stdin.readline().rstrip()
    list[input] = i

reverse_list = dict(map(reversed,list.items()))
for i in range(question):
    input = sys.stdin.readline().rstrip()
    if input.isalpha() :
        print(list[input] + 1)
    else :
        print(reverse_list[int(input) - 1])
