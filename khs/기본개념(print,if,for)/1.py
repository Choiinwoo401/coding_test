import sys
input = sys.stdin.readline
N = int(input().strip())
array1 = list(map(int, input().split()))
M = int(input().strip())
array2 = list(map(int, input().split()))
dict1 = {}

for i in array1:
    if i not in dict1:
        dict1[i] = 1
    else:
        dict1[i] += 1

for j in array2:
    if j not in dict1:
        print(0,end = ' ')
    else:
        print(dict1[j],end = ' ')