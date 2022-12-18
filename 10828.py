# 백준 10828번 스택
import sys

time = sys.stdin.readline().rstrip()
stack = []
for i in range(int(time)):
    command = sys.stdin.readline().rstrip()
    flag = command.find(' ')
    if(flag != -1):
        val = command[flag+1:]
        command = command[:flag]


    if command == 'push':
        stack.append(val)

    if command == 'pop':
        if len(stack) == 0:
            print('-1')
        else:
            print(stack[len(stack) - 1])
            stack.pop()

    if command == 'size':
        print(len(stack))

    if command == 'empty':
        if len(stack) == 0:
            print(1)
        else:
            print(0)

    if command == 'top':
        if len(stack) == 0:
            print('-1')
        else:
            print(stack[len(stack)-1])
