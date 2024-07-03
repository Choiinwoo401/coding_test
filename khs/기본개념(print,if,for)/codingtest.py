a, b = map(int, input().split())
if (b<45):
    if(a==0):
        c = 23
        d = b+15
    else:
        c = a-1
        d = b+15
else:
    c = a-1
    d = b-45

print(c, d)