import sys
N = int(input())
array1 = [sys.stdin.readline().rstrip() for i in range(N)]
array1 = list(set(array1))
array1.sort()
array1.sort(key=len)
for i in array1:
    print(i)