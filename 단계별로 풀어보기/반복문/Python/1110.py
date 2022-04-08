# 1110
# 더하기 사이클
# 브론즈1

import sys

n = int(sys.stdin.readline())
li = []
tmp = 0
cnt = 0

if( n < 10 ):
    li.append(0)
    li.append(n)
else:
    li.append(n//10)
    li.append(n%10)
while(True):
    cnt += 1
    tmp = li[0] + li[1]
    tmp = tmp%10
    del li[0]
    li.append(tmp)
    if ( n == (li[0]*10 + li[1])):
        print(cnt)
        break
    else:
        continue
