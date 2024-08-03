import sys
from collections import deque
input = sys.stdin.readline

N = int(input())
deq1 = deque()

for i in range(N):
    order = input().split()
    O = int(order[0])
    if O == 1:
        deq1.appendleft(order[1])
    elif O == 2:
        deq1.append(order[1])
    elif O == 3:
        if len(deq1) >= 1:
            print(deq1.popleft())
        else:
            print(-1)
    elif O == 4:
        if len(deq1) >= 1:
            print(deq1.pop())
        else:
            print(-1)
    elif O == 5:
        print(len(deq1))
    elif O == 6:
        if len(deq1) == 0:
            print(1)
        else:
            print(0)
    elif O == 7:
        if len(deq1) >= 1:
            print(deq1[0])
        else:
            print(-1)
    elif O == 8:
        if len(deq1) >= 1:
            print(deq1[-1])
        else:
            print(-1)