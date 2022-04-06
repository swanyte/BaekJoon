# 2480
# 주사위 세개
# 브론즈4

import sys

n1, n2, n3 = map(int,sys.stdin.readline().split())
total = 0

if (n1 == n2 and n2 == n3):
    total = 10000 + n1*1000
elif (n1 == n2):
    total = 1000+n1*100
elif (n1 == n3):
    total = 1000+n1*100
elif (n2 == n3):
    total = 1000+n2*100
else:
    total = 100*max(n1, n2, n3)
print(total)

# set을 이용하거나 list를 통해 정렬하면 더 깔끔하게 풀 수 있음